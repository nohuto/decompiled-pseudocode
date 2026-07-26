/*
 * XREFs of ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002CF10
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C011B500 (ndisIfInitializePhase2.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BF78 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002C178 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1C0038018 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 *     Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage @ 0x1C00380D4 (Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0110F74 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C011140C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C011A6E4 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C013F148 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 ndisIfCompartmentSubsystemInitializePhase3(void)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v0; // r14
  int Network; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v2; // rbx
  unsigned __int8 v3; // r15
  KIRQL v4; // si
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  unsigned __int16 v6; // cx
  KIRQL v7; // al
  unsigned int v9; // [rsp+70h] [rbp+8h] BYREF

  v0 = qword_1C00F5DA8;
  Network = 0;
  while ( v0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA8 )
  {
    v2 = v0;
    v0 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v0;
    v3 = 0;
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v2 + 5);
    KeReleaseSpinLock(&ndisIfListLock, v4);
    if ( NetworkBlock )
      goto LABEL_5;
    Network = ndisIfCreateNetwork((struct _GUID *)v2 + 5, *((_DWORD *)v2 + 4));
    if ( Network >= 0 )
    {
      v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v2 + 5);
      KeReleaseSpinLock(&ndisIfListLock, v4);
      if ( !NetworkBlock )
        goto LABEL_11;
LABEL_5:
      *((_QWORD *)v2 + 7) = NetworkBlock;
      if ( *((_QWORD *)v2 + 213) )
        goto LABEL_11;
      v6 = *((_WORD *)v2 + 39);
      if ( !v6 )
        goto LABEL_9;
      v9 = (*((_QWORD *)v2 + 9) >> 24) & 0xFFFFFF;
      if ( (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v6, &v9, 0, 0) )
      {
        *((_QWORD *)v2 + 9) = 0LL;
LABEL_9:
        v3 = 1;
      }
      Network = ndisIfCreateInterface(
                  NetworkBlock,
                  v3,
                  (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v2 + 64),
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  NdisIfBlockSourceAutomaticLoopback);
LABEL_11:
      if ( !(unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() )
        v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      if ( Network >= 0 )
      {
        if ( (unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() )
        {
          _InterlockedIncrement((volatile signed __int32 *)v2 + 11);
          ndisNsiNotifyClientCompartmentChange(v2, 1LL);
          v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          *((_DWORD *)v2 + 10) &= ~8u;
          v4 = v7;
          COMPARTMENTBLOCK_DECREMENT_REF(v2);
          KeReleaseSpinLock(&ndisIfListLock, v4);
        }
        else
        {
          ndisNsiScheduleCompartmentBlockChangeNotification(v2);
        }
      }
      if ( !(unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() )
      {
        *((_DWORD *)v2 + 10) &= ~8u;
        KeReleaseSpinLock(&ndisIfListLock, v4);
      }
    }
  }
  return (unsigned int)Network;
}

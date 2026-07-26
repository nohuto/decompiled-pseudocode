/*
 * XREFs of ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002D278
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C0112350 (ndisIfInitializePhase2.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0022378 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002D458 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ @ 0x1C0035BDC (-Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1C0035DA0 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010A270 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C010ABF8 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C01123B0 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C013349C (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 ndisIfCompartmentSubsystemInitializePhase3(void)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v0; // r14
  int Interface; // esi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v2; // rdi
  unsigned __int8 v3; // r15
  KIRQL v4; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rbp
  KIRQL v6; // bl
  unsigned __int16 v7; // cx
  KIRQL v8; // bl
  unsigned int v10; // [rsp+70h] [rbp+8h] BYREF

  v0 = qword_1C00ECDC0;
  Interface = 0;
  while ( v0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
  {
    v2 = v0;
    v0 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v0;
    v3 = 0;
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v2 + 5);
    KeReleaseSpinLock(&ndisIfListLock, v4);
    if ( NetworkBlock )
    {
LABEL_5:
      *((_QWORD *)v2 + 7) = NetworkBlock;
      if ( !*((_QWORD *)v2 + 213) )
      {
        v7 = *((_WORD *)v2 + 39);
        if ( !v7 )
          goto LABEL_9;
        v10 = (*((_QWORD *)v2 + 9) >> 24) & 0xFFFFFF;
        if ( (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v7, &v10, 0, 0) )
        {
          *((_QWORD *)v2 + 9) = 0LL;
LABEL_9:
          v3 = 1;
        }
        Interface = ndisIfCreateInterface(
                      NetworkBlock,
                      v3,
                      (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v2 + 64),
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      NdisIfBlockSourceAutomaticLoopback);
      }
LABEL_11:
      if ( (unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        if ( Interface >= 0 )
          ndisNsiScheduleCompartmentBlockChangeNotification(v2);
        *((_DWORD *)v2 + 10) &= ~8u;
LABEL_17:
        KeReleaseSpinLock(&ndisIfListLock, v8);
      }
      else if ( Interface >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v2 + 11);
        ndisNsiNotifyClientCompartmentChange(v2, 1LL);
        v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        COMPARTMENTBLOCK_DECREMENT_REF(v2);
        goto LABEL_17;
      }
    }
    else
    {
      Interface = ndisIfCreateNetwork((struct _GUID *)v2 + 5, *((_DWORD *)v2 + 4));
      if ( Interface >= 0 )
      {
        v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)v2 + 5);
        KeReleaseSpinLock(&ndisIfListLock, v6);
        if ( !NetworkBlock )
          goto LABEL_11;
        goto LABEL_5;
      }
    }
  }
  return (unsigned int)Interface;
}

/*
 * XREFs of ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002C640
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0006F7C (-ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000CF50 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D050 (WPP_RECORDER_SF_qqq.c)
 *     NdisOpenConfigurationEx @ 0x1C001D060 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C001D290 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C001D370 (NdisReadConfiguration.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0021284 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C0025044 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     memcmp @ 0x1C0038280 (memcmp.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01177E4 (-ndisNsiSyncMiniportOperStatusNotification@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C0117834 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C011A820 (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C011BEDC (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C013E7A8 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnInitialize(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a3)
{
  unsigned int IntegerData; // esi
  int v7; // edx
  unsigned int updated; // r12d
  KIRQL v9; // al
  unsigned int v10; // ecx
  size_t v11; // rdi
  _IF_PHYSICAL_ADDRESS_LH *p_ifPhysAddress; // rax
  size_t MacAddressLength; // rsi
  size_t v14; // r8
  size_t v15; // r8
  unsigned __int16 v16; // r13
  size_t v17; // r8
  unsigned __int16 v18; // ax
  _NDIS_MEDIUM MediaType; // eax
  char v20; // di
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  KIRQL v22; // dl
  KIRQL v23; // dl
  KIRQL NewIrql; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 ifDeviceWakeUpEnable; // [rsp+51h] [rbp-2Fh]
  int Status; // [rsp+54h] [rbp-2Ch] BYREF
  PVOID ConfigurationHandle; // [rsp+58h] [rbp-28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+60h] [rbp-20h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+68h] [rbp-18h] BYREF
  char v31; // [rsp+C0h] [rbp+40h]
  char v32; // [rsp+D8h] [rbp+58h]

  v32 = 0;
  LOBYTE(IntegerData) = 0;
  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  ConfigurationHandle = 0LL;
  ParameterValue = 0LL;
  v31 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  updated = Status;
  if ( Status )
    goto LABEL_41;
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NdisDeviceTypeStr, NdisParameterInteger);
  if ( !Status )
    IntegerData = ParameterValue->ParameterData.IntegerData;
  updated = 0;
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  a2->AccessType = a3->AccessType;
  a2->DirectionType = a3->DirectionType;
  a2->ifConnectorPresent = a3->IfConnectorPresent;
  a2->ConnectionType = a3->ConnectionType;
  a2->ifMtu = a3->MtuSize;
  v10 = 0;
  a2->Flags = 0;
  NewIrql = v9;
  if ( _bittest((const signed __int32 *)&a1->PnPFlags, 0x15u) )
  {
    a2->Flags = 1;
    v10 = 1;
  }
  if ( (a1->PnPFlags & 0x8000000) != 0 )
  {
    v10 |= 2u;
    a2->Flags = v10;
  }
  v11 = 32LL;
  if ( (a1->PnPFlags & 0x400000) != 0 )
  {
    v10 |= 0x20u;
    a2->Flags = v10;
  }
  if ( (IntegerData & 1) != 0 )
  {
    v10 |= 0x40u;
    a2->Flags = v10;
  }
  if ( _bittest((const signed __int32 *)&a1->PnPFlags, 0x15u) && ndisAoAcCapable || (a1->FilterPnPFlags & 0x200) != 0 )
  {
    v10 |= 0x100u;
    a2->Flags = v10;
  }
  a2->ifFlags = v10;
  p_ifPhysAddress = &a2->ifPhysAddress;
  MacAddressLength = a3->MacAddressLength;
  if ( a2->ifPhysAddress.Length != (_WORD)MacAddressLength )
  {
    v31 = 1;
    v16 = a3->MacAddressLength;
    goto LABEL_24;
  }
  v14 = a3->MacAddressLength;
  if ( (unsigned __int16)MacAddressLength >= 0x20u )
    v14 = 32LL;
  if ( !memcmp(a2->ifPhysAddress.Address, a3->CurrentMacAddress, v14) )
  {
    v15 = MacAddressLength;
    if ( (unsigned __int16)MacAddressLength >= 0x20u )
      v15 = 32LL;
    v16 = MacAddressLength;
    if ( !memcmp(a2->PermanentPhysAddress.Address, a3->PermanentMacAddress, v15) )
      goto LABEL_23;
  }
  else
  {
    v16 = MacAddressLength;
  }
  v31 = 1;
LABEL_23:
  p_ifPhysAddress = &a2->ifPhysAddress;
LABEL_24:
  if ( (unsigned __int16)MacAddressLength >= 0x20u )
    v16 = 32;
  p_ifPhysAddress->Length = v16;
  v17 = a3->MacAddressLength;
  if ( a3->MacAddressLength >= 0x20u )
    v17 = 32LL;
  memmove(a2->ifPhysAddress.Address, a3->CurrentMacAddress, v17);
  v18 = a3->MacAddressLength;
  if ( v18 >= 0x20u )
    v18 = 32;
  a2->PermanentPhysAddress.Length = v18;
  if ( a3->MacAddressLength < 0x20u )
    v11 = a3->MacAddressLength;
  memmove(a2->PermanentPhysAddress.Address, a3->PermanentMacAddress, v11);
  a2->XmitLinkSpeed = a3->XmitLinkSpeed;
  a2->RcvLinkSpeed = a3->RcvLinkSpeed;
  a2->MediaConnectState = a3->MediaConnectState;
  a2->MediaDuplexState = a3->MediaDuplexState;
  a2->SupportedStatistics = a3->SupportedStatistics;
  MediaType = a3->MediaType;
  if ( a2->MediaType == MediaType )
  {
    v20 = 0;
  }
  else
  {
    v20 = 1;
    a2->MediaType = MediaType;
    v32 = 1;
  }
  PhysicalMediumType = a3->PhysicalMediumType;
  if ( a2->PhysicalMediumType != PhysicalMediumType )
  {
    v20 = 1;
    a2->PhysicalMediumType = PhysicalMediumType;
    v32 = 1;
  }
  v22 = NewIrql;
  ifDeviceWakeUpEnable = a2->ifDeviceWakeUpEnable;
  a2->ifDeviceWakeUpEnable = a1->PMCapabilities61.Flags & 1;
  KeReleaseSpinLock(&ndisIfListLock, v22);
  ndisIfUpdateInterfaceHiddenFlag(a2, (a1->PnPFlags & 0x1000) != 0);
  if ( a2->Source == NdisIfBlockSourcePersistedNetSetup )
  {
    if ( (v20 || v31) && (int)ndisIfWriteBackPersistedInterface(a2) < 0 )
    {
      updated = -1073741823;
      goto LABEL_41;
    }
  }
  else
  {
    if ( v32 )
    {
      updated = ndisIfUpdatePersistedInterfaceInfo(
                  (unsigned __int8 *)&a2->NetLuid,
                  8u,
                  0x434u,
                  (unsigned __int8 *)&a2->MediaType);
      if ( updated )
        goto LABEL_41;
    }
    if ( v31 )
    {
      updated = ndisIfUpdatePersistedInterfaceInfo(
                  (unsigned __int8 *)&a2->NetLuid,
                  0x44u,
                  0x440u,
                  (unsigned __int8 *)&a2->ifPhysAddress);
      if ( updated )
        goto LABEL_41;
    }
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  ndisIfSetInterfaceState(a1, 0, NewIrql);
  v23 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v23);
  ndisNsiSyncMiniportOperStatusNotification(a1);
  ndisNsiSyncMiniportMediaConnectStateNotification(a1);
  ndisIfGetRcvAddressFromMiniport(a1);
  if ( ifDeviceWakeUpEnable != a2->ifDeviceWakeUpEnable )
    ndisNsiScheduleIfBlockRodChangeNotification(a2, &a2->ifDeviceWakeUpEnable, 1, 641);
LABEL_41:
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_3d61bbabecaa38aa84130e7e4a2da4d6_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      updated);
  return updated;
}

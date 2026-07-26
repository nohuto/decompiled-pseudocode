/*
 * XREFs of ndisIfOpenInterfaceRegistryKey @ 0x1C011BD04
 * Callers:
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0119240 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C011BF1C (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C011C210 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C012B950 (ndisWdfOpenConfigurationKey.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C012BF90 (ndisLWMBuildConfigurationKeyPath.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C012D0C8 (ndisMiniportQueryInterfaceProperty.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C013E4F8 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF__guid_Dd @ 0x1C00B7D64 (WPP_RECORDER_SF__guid_Dd.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C011290C (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011E124 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ndisIfOpenInterfaceRegistryKey(__int64 a1, KRegKey *this, ACCESS_MASK a3, __int64 a4)
{
  unsigned int v7; // edi
  int v8; // edx
  int v9; // ebx
  wchar_t v11[256]; // [rsp+40h] [rbp-238h] BYREF

  v7 = a4;
  netsetupBuildObjectPath(2LL, a1, 0LL, a4, v11);
  v9 = KRegKey::Open(this, a3, v11, 0LL);
  if ( v9 == -1073741772 )
  {
    if ( !*((_BYTE *)qword_1C00F5730 + 96) )
      goto LABEL_6;
    netsetupBuildObjectPath(2LL, a1, 1LL, v7, v11);
    v9 = KRegKey::Open(this, a3, v11, 0LL);
  }
  if ( v9 >= 0 )
    return 0LL;
LABEL_6:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0x16u,
      0xFu,
      (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids,
      a1,
      v7,
      v9);
  return (unsigned int)v9;
}

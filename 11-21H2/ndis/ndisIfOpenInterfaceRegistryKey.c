/*
 * XREFs of ndisIfOpenInterfaceRegistryKey @ 0x1C011177C
 * Callers:
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C010DFC0 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0111478 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0111810 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C011FC18 (ndisWdfOpenConfigurationKey.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C0120228 (ndisLWMBuildConfigurationKeyPath.c)
 *     ndisMiniportQueryInterfaceProperty @ 0x1C0121634 (ndisMiniportQueryInterfaceProperty.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C0132918 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     WPP_RECORDER_SF__guid_Dd @ 0x1C00B2B34 (WPP_RECORDER_SF__guid_Dd.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C011095C (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ndisIfOpenInterfaceRegistryKey(__int64 a1, KRegKey *this, ACCESS_MASK a3, int a4)
{
  int v8; // edx
  int v9; // ebx
  wchar_t v11[256]; // [rsp+40h] [rbp-238h] BYREF

  netsetupBuildObjectPath(2u, a1, 0, a4, v11);
  v9 = KRegKey::Open(this, a3, v11, 0LL);
  if ( v9 == -1073741772 )
  {
    if ( !*((_BYTE *)qword_1C00EC738 + 96) )
      goto LABEL_6;
    netsetupBuildObjectPath(2u, a1, 1u, a4, v11);
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
      a4,
      v9);
  return (unsigned int)v9;
}

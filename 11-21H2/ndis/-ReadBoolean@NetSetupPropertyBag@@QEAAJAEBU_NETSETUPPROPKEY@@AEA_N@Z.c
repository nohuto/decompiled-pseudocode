/*
 * XREFs of ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0110454
 * Callers:
 *     ndisIfReadHiddenFlag @ 0x1C010D764 (ndisIfReadHiddenFlag.c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C010FC08 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010FDEC (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisBindReadFilterDriverSettingsFromV3Registry @ 0x1C0110270 (ndisBindReadFilterDriverSettingsFromV3Registry.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0111478 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ndisIsBindPathEnabled @ 0x1C0130C30 (ndisIsBindPathEnabled.c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C01310A0 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1C01313BC (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReplaceBindTokens @ 0x1C0131518 (ndisReplaceBindTokens.c)
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C0134860 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     GetPkeyName @ 0x1C0110524 (GetPkeyName.c)
 *     netsetupIsImpliedProperty @ 0x1C01105F4 (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___ @ 0x1C0110864 (KRegKey--QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadBoolean(void ***this, const struct _NETSETUPPROPKEY *a2, bool *a3)
{
  unsigned int v5; // edi
  unsigned int v7; // r10d
  KRegKey v9; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v10; // [rsp+28h] [rbp-A0h] BYREF
  wchar_t v11[48]; // [rsp+40h] [rbp-88h] BYREF

  v5 = 0;
  v9.m_ptr = 0LL;
  GetPkeyName(a2, v11);
  v7 = KRegKey::Open(&v9, 1u, v11, **this);
  if ( v7 != -1073741772 )
  {
    if ( !v7 )
    {
      v10 = 0LL;
      v5 = KRegKey::QueryValueBlob__lambda_bc7a44a56f15b2257a2340eb3a455b3d___(&v9, &v10, a3);
      goto LABEL_4;
    }
LABEL_7:
    v5 = v7;
    goto LABEL_4;
  }
  if ( !(unsigned __int8)netsetupIsImpliedProperty(a2) )
    goto LABEL_7;
  *a3 = 0;
LABEL_4:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v9.m_ptr);
  return v5;
}

/*
 * XREFs of ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0110388
 * Callers:
 *     ndisIfReadHiddenFlag @ 0x1C010D764 (ndisIfReadHiddenFlag.c)
 *     ?Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x1C010D8A0 (-Open@ExecutionContextKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010FDEC (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0111478 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C011FC18 (ndisWdfOpenConfigurationKey.c)
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C0134860 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01065B8 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     GetPkeyName @ 0x1C0110524 (GetPkeyName.c)
 *     netsetupIsImpliedProperty @ 0x1C01105F4 (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x1C0110638 (KRegKey--QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadUint32(void ***this, const struct _NETSETUPPROPKEY *a2, unsigned int *a3)
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
  if ( v7 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      *a3 = 0;
      goto LABEL_4;
    }
  }
  else if ( !v7 )
  {
    v10 = 0LL;
    v5 = KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___(&v9, &v10, a3);
    goto LABEL_4;
  }
  v5 = v7;
LABEL_4:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v9.m_ptr);
  return v5;
}

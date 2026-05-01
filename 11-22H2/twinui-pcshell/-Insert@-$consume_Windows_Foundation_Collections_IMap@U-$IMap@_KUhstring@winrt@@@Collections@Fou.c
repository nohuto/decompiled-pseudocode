/*
 * XREFs of ?Insert@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_KAEBUhstring@param@3@@Z @ 0x1807139A0
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180717EE4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180719C80 (-UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,unsigned __int64,winrt::hstring>::Insert(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v4; // eax
  char v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v3 + 80LL))(v3, *a2, *a3, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  return v6;
}

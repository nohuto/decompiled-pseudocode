/*
 * XREFs of ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@IUhstring@5@@impl@winrt@@QEBA@AEBI@Z @ 0x180719524
 * Callers:
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x180719A68 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ?check_hresult_allow_bounds@impl@winrt@@YA?AUhresult@2@U32@@Z @ 0x1800933D8 (-check_hresult_allow_bounds@impl@winrt@@YA-AUhresult@2@U32@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,unsigned int,winrt::hstring>::TryLookup(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, volatile signed __int32 **); // rbx
  int v7; // eax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rax
  int v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h]
  volatile signed __int32 *v13; // [rsp+70h] [rbp+40h] BYREF

  v12 = a2;
  *(_BYTE *)(a2 + 8) = 0;
  v13 = 0LL;
  v5 = *a1;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, volatile signed __int32 **))(*(_QWORD *)*a1 + 48LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  v7 = v6(v5, *a3, &v13);
  if ( !*winrt::impl::check_hresult_allow_bounds(&v11, v7) )
  {
    if ( *(_BYTE *)(a2 + 8) )
    {
      if ( (volatile signed __int32 **)a2 != &v13 )
      {
        v8 = v13;
        v13 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2);
        *(_QWORD *)a2 = v8;
      }
    }
    else
    {
      v9 = v13;
      v13 = 0LL;
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 1;
    }
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  return a2;
}

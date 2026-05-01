/*
 * XREFs of ?make_weak_ref@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800FAFF4
 * Callers:
 *     ?query_interface@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F7F74 (-query_interface@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180423740 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 < 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v1 + 24), 1u);
    return 2 * v1 + 8;
  }
  else
  {
    v3 = (unsigned __int64)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      *(_QWORD *)(v3 + 8) = &winrt::impl::weak_source<0,1>::`vftable';
      *(_QWORD *)v3 = &winrt::impl::weak_ref<0,1>::`vftable';
      *(_DWORD *)(v3 + 24) = v1;
      *(_DWORD *)(v3 + 28) = 1;
      *(_QWORD *)(v3 + 16) = v4;
    }
    else
    {
      v3 = 0LL;
    }
    v9 = v3;
    if ( v3 )
    {
      while ( 1 )
      {
        v6 = _InterlockedCompareExchange64(a1 + 1, (v3 >> 1) | 0x8000000000000000uLL, v1);
        v5 = v1 == v6;
        v1 = v6;
        if ( v5 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 24), 1u);
          return v3 + 8;
        }
        if ( v6 < 0 )
          break;
        _InterlockedExchange((volatile __int32 *)(v3 + 24), v6);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v6 + 24), 1u);
      v8 = 2 * v6 + 8;
      winrt::com_ptr<winrt::impl::weak_ref<0,1>>::unconditional_release_ref(&v9);
      return v8;
    }
    else
    {
      return 0LL;
    }
  }
}

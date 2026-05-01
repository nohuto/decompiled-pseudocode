/*
 * XREFs of ?make_weak_ref@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1805B4EE8
 * Callers:
 *     ?query_interface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B5134 (-query_interface@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x18033DCA0 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdi
  void **v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rbx
  volatile signed __int32 *v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  if ( v1 >= 0 )
  {
    v5 = (unsigned __int64)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      v8 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      v4 = &winrt::impl::weak_source<1,1>::`vftable';
      *(_QWORD *)(v5 + 8) = &winrt::impl::weak_source<1,1>::`vftable';
      *(_QWORD *)v5 = &winrt::impl::weak_ref<1,1>::`vftable';
      *(_DWORD *)(v5 + 24) = v1;
      *(_DWORD *)(v5 + 28) = 1;
      *(_QWORD *)(v5 + 16) = v8;
    }
    else
    {
      v5 = 0LL;
    }
    v12 = (volatile signed __int32 *)v5;
    if ( v5 )
    {
      while ( 1 )
      {
        v10 = _InterlockedCompareExchange64(a1 + 4, (v5 >> 1) | 0x8000000000000000uLL, v1);
        v9 = v1 == v10;
        v1 = v10;
        if ( v9 )
          break;
        if ( v10 < 0 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v10 + 24), 1u);
          v11 = 2 * v10 + 8;
          winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(&v12, (__int64)v4, v6, v7);
          return v11;
        }
        _InterlockedExchange((volatile __int32 *)(v5 + 24), v10);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 24), 1u);
      return v5 + 8;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v1 + 24), 1u);
    return 2 * v1 + 8;
  }
}

/*
 * XREFs of ?query_interface@?$root_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180197558
 * Callers:
 *     ?QueryInterface@?$produce_base@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWindowsTracker@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180197540 (-QueryInterface@-$produce_base@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@UIWi.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800D7718 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?make_weak_ref@?$root_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801113CC (-make_weak_ref@-$root_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U1.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::WindowsTracker>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  void *weak_ref; // rax
  signed __int64 v13; // rdx
  bool v14; // zf
  signed __int64 v15; // rax
  signed __int64 v16; // rax
  __int64 v17; // rax
  signed __int64 v18; // rax
  signed __int64 v19; // rax

  v6 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 48))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v13 = *((_QWORD *)a1 + 1);
    while ( v13 >= 0 )
    {
      v15 = _InterlockedCompareExchange64(a1 + 1, v13 + 1, v13);
      v14 = v13 == v15;
      v13 = v15;
      if ( v14 )
        return 0LL;
    }
  }
  else if ( winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IAgileObject>) )
  {
    *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
    v13 = *((_QWORD *)a1 + 1);
    while ( v13 >= 0 )
    {
      v16 = _InterlockedCompareExchange64(a1 + 1, v13 + 1, v13);
      v14 = v13 == v16;
      v13 = v16;
      if ( v14 )
        return 0LL;
    }
  }
  else
  {
    if ( winrt::operator==(v7, &winrt::impl::guid_v<winrt::impl::IMarshal>) )
    {
      v17 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      return winrt::impl::make_marshaler(v17, a3);
    }
    if ( winrt::operator==(v8, &winrt::impl::guid_v<IInspectable>) )
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
      v13 = *((_QWORD *)a1 + 1);
      while ( v13 >= 0 )
      {
        v18 = _InterlockedCompareExchange64(a1 + 1, v13 + 1, v13);
        v14 = v13 == v18;
        v13 = v18;
        if ( v14 )
          return 0LL;
      }
    }
    else
    {
      if ( !winrt::operator==(v9, &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>) )
      {
        if ( !winrt::operator==(v10, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>) )
          return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))a1)(a1, a2, a3);
        weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::WindowsTracker>::make_weak_ref(a1);
        *a3 = (__int64)weak_ref;
        return weak_ref == 0LL ? 0x8007000E : 0;
      }
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v13 = *((_QWORD *)a1 + 1);
      while ( v13 >= 0 )
      {
        v19 = _InterlockedCompareExchange64(a1 + 1, v13 + 1, v13);
        v14 = v13 == v19;
        v13 = v19;
        if ( v14 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v13 + 24), 1u);
  return 0LL;
}

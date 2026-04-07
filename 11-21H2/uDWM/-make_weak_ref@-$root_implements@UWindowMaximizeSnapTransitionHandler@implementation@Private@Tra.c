/*
 * XREFs of ?make_weak_ref@?$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18000624C
 * Callers:
 *     ??$get_weak@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@?$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@IEAA?AU?$weak_ref@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@2@XZ @ 0x180006084 (--$get_weak@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?query_interface@?$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180008828 (-query_interface@-$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@T.c)
 *     ?query_interface@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800453D0 (-query_interface@-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F1C34 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::Private::WindowMaximizeSnapTransitionHandler>::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  if ( v2 < 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v2 + 24), 1u);
    return 2 * v2 + 8;
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           32LL);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      *(_QWORD *)(v3 + 8) = &winrt::impl::weak_source<1,1>::`vftable';
      *(_QWORD *)v3 = &winrt::impl::weak_ref<1,1>::`vftable';
      *(_QWORD *)(v3 + 16) = v4;
      *(_DWORD *)(v3 + 24) = v2;
      *(_DWORD *)(v3 + 28) = 1;
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
        v6 = _InterlockedCompareExchange64(a1 + 1, (v3 >> 1) | 0x8000000000000000uLL, v2);
        v5 = v2 == v6;
        v2 = v6;
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
      winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(&v9);
      return v8;
    }
    else
    {
      return 0LL;
    }
  }
}

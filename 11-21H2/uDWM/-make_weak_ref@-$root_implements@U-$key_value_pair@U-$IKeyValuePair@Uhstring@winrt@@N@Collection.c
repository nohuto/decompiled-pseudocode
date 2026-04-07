/*
 * XREFs of ?make_weak_ref@?$root_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800F1720
 * Callers:
 *     ?query_interface@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180008990 (-query_interface@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@U.c)
 *     ?QueryInterface@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009C60 (-QueryInterface@-$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIR.c)
 *     ?query_interface@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180044D80 (-query_interface@-$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345.c)
 *     ?query_interface@?$root_implements@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationRejuvTransitionHandler@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F6488 (-query_interface@-$root_implements@UScreenRotationRejuvTransitionHandler@implementation@Private@.c)
 *     ??$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@34@@impl@winrt@@IEAA?AU?$weak_ref@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@2@XZ @ 0x1800F77E8 (--$get_weak@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@@-$root_implements@UUserRes.c)
 *     ?query_interface@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@34@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800FF29C (-query_interface@-$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U134.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F1C34 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  if ( v2 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           32LL);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      *(_QWORD *)(v4 + 8) = &winrt::impl::weak_source<1,1>::`vftable';
      *(_QWORD *)v4 = &winrt::impl::weak_ref<1,1>::`vftable';
      *(_QWORD *)(v4 + 16) = v5;
      *(_DWORD *)(v4 + 24) = v2;
      *(_DWORD *)(v4 + 28) = 1;
    }
    else
    {
      v4 = 0LL;
    }
    v9 = v4;
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = _InterlockedCompareExchange64(a1 + 1, (v4 >> 1) | 0x8000000000000000uLL, v2);
        v6 = v2 == v7;
        v2 = v7;
        if ( v6 )
          break;
        if ( v7 < 0 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v7 + 24), 1u);
          v8 = 2 * v7 + 8;
          winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(&v9);
          return v8;
        }
        _InterlockedExchange((volatile __int32 *)(v4 + 24), v7);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), 1u);
      return v4 + 8;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v2 + 24), 1u);
    return 2 * v2 + 8;
  }
}

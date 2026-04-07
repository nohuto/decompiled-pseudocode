/*
 * XREFs of ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x1800F16B8
 * Callers:
 *     ?query_interface@?$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180008828 (-query_interface@-$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@T.c)
 *     ?query_interface@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180008990 (-query_interface@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@U.c)
 *     ?QueryInterface@?$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UITransitionManagerNativePrivate@34@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009C60 (-QueryInterface@-$implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIR.c)
 *     ?query_interface@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180044D80 (-query_interface@-$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345.c)
 *     ?query_interface@?$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800453D0 (-query_interface@-$root_implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winr.c)
 *     ?QueryInterface@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F1170 (-QueryInterface@-$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z.c)
 *     ?query_interface@?$root_implements@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationRejuvTransitionHandler@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F6488 (-query_interface@-$root_implements@UScreenRotationRejuvTransitionHandler@implementation@Private@.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::QueryInterface @ 0x1800F75F0 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--AnimationCompletedHandle_ea_1800F75F0.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_c60948a4075e9d25cd4406f3dd63722d___::QueryInterface @ 0x1800F8150 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--UnloadDelegate__lambda_c60948a4075e9d.c)
 *     ?query_interface@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@34@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800FF29C (-query_interface@-$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U134.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0marshaler@?1??make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@PEAPEAX@Z@QEAA@0@Z @ 0x1800F0A04 (--0marshaler@-1--make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::make_marshaler(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  v5 = 0LL;
  if ( v4 )
    v5 = `winrt::impl::make_marshaler'::`2'::marshaler::marshaler(v4, a1);
  *a2 = v5;
  return v5 == 0 ? 0x8007000E : 0;
}

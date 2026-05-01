/*
 * XREFs of ?AnimateView@?$consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator@UIShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@AEBUShellViewCoordinator@5673@_KAEBUGestureAnimationData@Input@673@AEBUPoint@Foundation@Windows@3@@Z @ 0x1807609B4
 * Callers:
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&_ @ 0x1807605C0 (_lambda_00799cc444f9312ab8cc556666836ecb_--operator()_winrt--Windows--UI--Composition--Internal-.c)
 *     ?AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXUShellAnimationCoordinator@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@AEBUPoint@Foundation@67@@Z @ 0x180760A24 (-AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator<winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>::AnimateView(
        __int64 **a1,
        unsigned int *a2,
        _QWORD *a3,
        __int64 a4,
        __int128 *a5,
        _QWORD *a6)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF

  v6 = *a1;
  v7 = *v6;
  v9 = *a5;
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64, __int128 *, _QWORD))(v7 + 56))(
             v6,
             *a2,
             *a3,
             a4,
             &v9,
             *a6);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}

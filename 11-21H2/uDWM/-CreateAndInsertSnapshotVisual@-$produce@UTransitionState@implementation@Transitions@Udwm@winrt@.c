/*
 * XREFs of ?CreateAndInsertSnapshotVisual@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180013340
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800126F8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?CreateAndInsertSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimatedTransitionVisualWrapper@345@UTopLevelWindow3DWrapper@345@@Z @ 0x1800448B4 (-CreateAndInsertSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AUAni.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState>::CreateAndInsertSnapshotVisual(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *inserted; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v8 = a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  inserted = (__int64 *)winrt::Udwm::Transitions::implementation::TransitionState::CreateAndInsertSnapshotVisual(
                          (a1 - 16) & -(__int64)(a1 != 0),
                          &v9,
                          &v8);
  v6 = *inserted;
  *inserted = 0LL;
  *a3 = v6;
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return 0LL;
}

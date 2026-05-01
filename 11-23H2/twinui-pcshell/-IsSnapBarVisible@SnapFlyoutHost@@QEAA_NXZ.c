/*
 * XREFs of ?IsSnapBarVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x18067B7B4
 * Callers:
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1806653A4 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetVisibleSnapBar@SnapFlyoutHost@@AEAA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@XZ @ 0x18067AA44 (-GetVisibleSnapBar@SnapFlyoutHost@@AEAA-AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Window.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall SnapFlyoutHost::IsSnapBarVisible(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  winrt::Windows::Foundation::IUnknown *VisibleSnapBar; // rax
  bool v4; // bl
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+18h]

  v2 = this + 22;
  AcquireSRWLockShared(this + 22);
  v8 = v2;
  v7 = 0LL;
  VisibleSnapBar = SnapFlyoutHost::GetVisibleSnapBar((__int64)this, (winrt::Windows::Foundation::IUnknown *)&v6);
  v4 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))VisibleSnapBar, &v7) == 0;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v4;
}

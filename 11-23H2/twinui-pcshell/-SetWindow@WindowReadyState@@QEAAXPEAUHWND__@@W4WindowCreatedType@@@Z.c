/*
 * XREFs of ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1804EF630
 * Callers:
 *     _lambda_fd28b8cfd5332ad6b2a822ae0574fab8_::operator() @ 0x1804E894C (_lambda_fd28b8cfd5332ad6b2a822ae0574fab8_--operator().c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1804ED04C (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800522CC (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z @ 0x1800A0E08 (-GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1804EF5B4 (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x1804EF5E8 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1804EF600 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x1804EF7BC (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 */

char __fastcall WindowReadyState::SetWindow(__int64 a1, LayoutCompletedHelper *a2, int a3)
{
  bool IsReadyForPresentation; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r14
  HWND v10; // rdx
  bool ShouldWaitForLayoutCompletion; // al
  int v12; // eax
  char result; // al
  struct tagRECT Rect; // [rsp+20h] [rbp-38h] BYREF

  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  *(_QWORD *)v8 = v7;
  v9 = IsReadyForPresentation;
  WindowReadyState::WaitFlags::Clear((int *)(v8 + 8), (__int64 *)v8, 14);
  if ( a2 )
  {
    ShouldWaitForLayoutCompletion = LayoutCompletedHelper::GetShouldWaitForLayoutCompletion(a2, v10);
    *(_BYTE *)(a1 + 24) = ShouldWaitForLayoutCompletion;
    if ( ShouldWaitForLayoutCompletion && a3 != 1 )
      WindowReadyState::WaitFlags::Set((int *)(a1 + 8), (__int64 *)a1, 2);
    Rect = 0LL;
    GetWindowRect((HWND)a2, &Rect);
    v12 = Rect.right - Rect.left;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 28) = v12;
    *(_DWORD *)(a1 + 32) = Rect.bottom - Rect.top;
    WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)a1);
  }
  result = WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1);
  if ( result != v9 )
    return std::_Func_class<void,bool>::operator()(a1 + 40, result);
  return result;
}

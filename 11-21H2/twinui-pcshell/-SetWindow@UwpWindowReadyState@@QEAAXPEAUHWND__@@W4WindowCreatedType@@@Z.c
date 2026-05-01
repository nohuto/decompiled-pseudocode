/*
 * XREFs of ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18041A898
 * Callers:
 *     _lambda_02c18762fafac8f58346267f5d28b7a5_::operator() @ 0x180410E28 (_lambda_02c18762fafac8f58346267f5d28b7a5_--operator().c)
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180418020 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800295B4 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z @ 0x18040DF78 (-GetShouldWaitForLayoutCompletion@LayoutCompletedHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18041A638 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ @ 0x18041A780 (-IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ.c)
 *     ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18041A868 (-Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x18041AA24 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 */

char __fastcall UwpWindowReadyState::SetWindow(__int64 a1, LayoutCompletedHelper *a2, int a3)
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

  IsReadyForPresentation = UwpWindowReadyState::IsReadyForPresentation((UwpWindowReadyState *)a1);
  *(_QWORD *)v8 = v7;
  v9 = IsReadyForPresentation;
  UwpWindowReadyState::WaitFlags::Clear((int *)(v8 + 8), (__int64 *)v8, 14);
  if ( a2 )
  {
    ShouldWaitForLayoutCompletion = LayoutCompletedHelper::GetShouldWaitForLayoutCompletion(a2, v10);
    *(_BYTE *)(a1 + 24) = ShouldWaitForLayoutCompletion;
    if ( ShouldWaitForLayoutCompletion && a3 != 1 )
      UwpWindowReadyState::WaitFlags::Set((int *)(a1 + 8), (__int64 *)a1, 2);
    Rect = 0LL;
    GetWindowRect((HWND)a2, &Rect);
    v12 = Rect.right - Rect.left;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 28) = v12;
    *(_DWORD *)(a1 + 32) = Rect.bottom - Rect.top;
    UwpWindowReadyState::_WaitForUnfreezeIfNecessary((UwpWindowReadyState *)a1);
  }
  result = UwpWindowReadyState::IsReadyForPresentation((UwpWindowReadyState *)a1);
  if ( result != v9 )
    return std::_Func_class<void,bool>::operator()(a1 + 40, result);
  return result;
}

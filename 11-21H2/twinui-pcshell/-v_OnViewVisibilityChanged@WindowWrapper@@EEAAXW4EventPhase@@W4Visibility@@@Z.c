/*
 * XREFs of ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800C2D40
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800295B4 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x180036878 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x1800901B4 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1800901CC (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180091B84 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x1800C30D0 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 */

void __fastcall WindowWrapper::v_OnViewVisibilityChanged(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  char v4; // di
  int *v5; // rcx
  char v6; // si
  WindowReadyState *v7; // rcx
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1 + 360;
  v4 = 1;
  if ( !*(_QWORD *)(a1 + 360) )
  {
    v5 = (int *)(a1 + 368);
    goto LABEL_3;
  }
  v5 = (int *)(a1 + 368);
  if ( *(_DWORD *)(v3 + 8) )
  {
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v6 = 1;
LABEL_4:
  if ( a3 == 1 )
  {
    if ( a2 )
    {
      WindowReadyState::WaitFlags::Clear(v5, (__int64 *)v3, 1);
      if ( WindowReadyState::IsReadyForPresentation((WindowReadyState *)v3) )
        WindowReadyState::_WaitForUnfreezeIfNecessary(v7);
    }
    else if ( *(_BYTE *)(v3 + 24) && (*(_BYTE *)(v3 + 8) & 1) != 0 )
    {
      WindowReadyState::WaitFlags::Set((int *)(v3 + 8), v3, 2);
    }
  }
  else if ( a2 )
  {
    v8 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = v8 | 1;
    ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
      v3,
      &v8,
      v3 + 8);
  }
  if ( !*(_QWORD *)v3 || *(_DWORD *)(v3 + 8) )
    v4 = 0;
  if ( v6 != v4 )
    std::_Func_class<void,bool>::operator()(v3 + 40, v4);
}

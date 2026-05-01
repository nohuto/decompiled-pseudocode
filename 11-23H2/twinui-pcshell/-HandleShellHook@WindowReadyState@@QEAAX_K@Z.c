/*
 * XREFs of ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1802D978A
 * Callers:
 *     ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x1804EA710 (-HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800522CC (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x18017DB74 (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x1804EF4A0 (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1804EF5B4 (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x1804EF5E8 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x1804EF7BC (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 */

void __fastcall WindowReadyState::HandleShellHook(WindowReadyState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rdi
  __int64 v7; // rax
  WindowReadyState *v8; // rcx
  char IsReadyForPresentation; // al

  if ( WindowReadyState::IsReadyForPresentation(this) )
    return;
  switch ( v2 )
  {
    case 31LL:
      v6 = (_QWORD *)(v3 + 16);
      v7 = *(_QWORD *)(v3 + 16);
      if ( v7 )
      {
        *v6 = v7 - 1;
        ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
          (__int64 *)v3,
          (_DWORD *)(v3 + 16));
        if ( !*v6 )
        {
          v4 = (char *)this + 8;
          v5 = 8LL;
          goto LABEL_11;
        }
      }
      else
      {
        ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>();
      }
      break;
    case 36LL:
      v4 = (char *)(v3 + 8);
      v5 = 4LL;
      goto LABEL_11;
    case 38LL:
      v4 = (char *)(v3 + 8);
      v5 = 2LL;
LABEL_11:
      WindowReadyState::WaitFlags::Clear(v4, this, v5);
      break;
  }
  if ( WindowReadyState::IsReadyForPresentation(this) )
    WindowReadyState::_WaitForUnfreezeIfNecessary(v8);
  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation(this);
  if ( IsReadyForPresentation )
    std::_Func_class<void,bool>::operator()((__int64)this + 40, IsReadyForPresentation);
}

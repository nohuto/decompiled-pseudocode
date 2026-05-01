/*
 * XREFs of ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x18041A6C8
 * Callers:
 *     ?HandlePresentationReadinessChange@UwpWindowWrapperBase@@UEAAX_K@Z @ 0x180415390 (-HandlePresentationReadinessChange@UwpWindowWrapperBase@@UEAAX_K@Z.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800295B4 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x180138918 (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x18040DE10 (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18041A638 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ?IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ @ 0x18041A780 (-IsReadyForPresentation@UwpWindowReadyState@@QEAA_NXZ.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x18041AA24 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 */

void __fastcall UwpWindowReadyState::HandleShellHook(UwpWindowReadyState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int *v4; // rcx
  int v5; // r8d
  _QWORD *v6; // rdi
  __int64 v7; // rax
  UwpWindowReadyState *v8; // rcx
  char IsReadyForPresentation; // al

  if ( UwpWindowReadyState::IsReadyForPresentation(this) )
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
          (int *)(v3 + 16));
        if ( !*v6 )
        {
          v4 = (int *)((char *)this + 8);
          v5 = 8;
          goto LABEL_11;
        }
      }
      else
      {
        ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>((__int64 *)v3);
      }
      break;
    case 36LL:
      v4 = (int *)(v3 + 8);
      v5 = 4;
      goto LABEL_11;
    case 38LL:
      v4 = (int *)(v3 + 8);
      v5 = 2;
LABEL_11:
      UwpWindowReadyState::WaitFlags::Clear(v4, (__int64 *)this, v5);
      break;
  }
  if ( UwpWindowReadyState::IsReadyForPresentation(this) )
    UwpWindowReadyState::_WaitForUnfreezeIfNecessary(v8);
  IsReadyForPresentation = UwpWindowReadyState::IsReadyForPresentation(this);
  if ( IsReadyForPresentation )
    std::_Func_class<void,bool>::operator()((__int64)this + 40, IsReadyForPresentation);
}

/*
 * XREFs of ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x1800900B0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800295B4 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x1800901B4 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1800901CC (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180091B84 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x180138918 (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x18040DE10 (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapperBase::HandlePresentationReadinessChange(WindowWrapperBase *this, __int64 a2)
{
  char *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  WindowReadyState *v8; // rcx
  char IsReadyForPresentation; // al
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 200LL))(*((_QWORD *)this + 33), &SRWLock);
  v4 = (char *)this + 344;
  if ( *(_QWORD *)v4 && !*((_DWORD *)v4 + 2) )
    goto LABEL_12;
  if ( a2 != 31 )
  {
    if ( a2 == 36 )
    {
      v7 = 4LL;
    }
    else
    {
      if ( a2 != 38 )
        goto LABEL_8;
      v7 = 2LL;
    }
    goto LABEL_7;
  }
  v5 = v4 + 16;
  v6 = *((_QWORD *)v4 + 2);
  if ( !v6 )
  {
    ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>(v4);
    goto LABEL_8;
  }
  *v5 = v6 - 1;
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
    v4,
    v4 + 16);
  if ( !*v5 )
  {
    v7 = 8LL;
LABEL_7:
    WindowReadyState::WaitFlags::Clear(v4 + 8, v4, v7);
  }
LABEL_8:
  if ( WindowReadyState::IsReadyForPresentation((WindowReadyState *)v4) )
    WindowReadyState::_WaitForUnfreezeIfNecessary(v8);
  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation((WindowReadyState *)v4);
  if ( IsReadyForPresentation )
    std::_Func_class<void,bool>::operator()((__int64)(v4 + 40), IsReadyForPresentation);
LABEL_12:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}

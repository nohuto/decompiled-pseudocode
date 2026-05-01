/*
 * XREFs of ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1800A0130
 * Callers:
 *     ?HandlePresentationReadinessChange@UwpWindowWrapperBase@@UEAAX_K@Z @ 0x1800A00C0 (-HandlePresentationReadinessChange@UwpWindowWrapperBase@@UEAAX_K@Z.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800522CC (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1800A0550 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x1800C2E68 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x18017DB74 (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x1804EF4A0 (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 */

void __fastcall UwpWindowReadyState::HandleShellHook(UwpWindowReadyState *this, __int64 a2)
{
  _DWORD *v2; // rdi
  __int64 v4; // r8
  _QWORD *v5; // rsi
  __int64 v6; // rax

  v2 = (_DWORD *)((char *)this + 8);
  if ( *(_QWORD *)this && !*v2 )
    return;
  if ( a2 != 31 )
  {
    if ( a2 == 36 )
    {
      v4 = 4LL;
    }
    else
    {
      if ( a2 != 38 )
        goto LABEL_8;
      v4 = 2LL;
    }
    goto LABEL_7;
  }
  v5 = (_QWORD *)((char *)this + 16);
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    *v5 = v6 - 1;
    ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
      this,
      (char *)this + 16);
    if ( !*v5 )
    {
      v4 = 8LL;
LABEL_7:
      UwpWindowReadyState::WaitFlags::Clear(v2, this, v4);
    }
  }
  else
  {
    ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>();
  }
LABEL_8:
  if ( *(_QWORD *)this )
  {
    if ( !*v2 )
      UwpWindowReadyState::_WaitForUnfreezeIfNecessary(this);
    if ( *(_QWORD *)this )
    {
      if ( !*v2 )
        std::_Func_class<void,bool>::operator()((__int64)this + 40, 1);
    }
  }
}

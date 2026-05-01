/*
 * XREFs of _lambda_41fdec79629b933043b6dd44cc33a98f_::_lambda_41fdec79629b933043b6dd44cc33a98f_ @ 0x1801AF10C
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z @ 0x180463074 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18022DEFE (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18022DEFE.c)
 *     ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x18022E026 (--0ViewOptions@@QEAA@AEBU0@@Z.c)
 */

__int64 __fastcall lambda_41fdec79629b933043b6dd44cc33a98f_::_lambda_41fdec79629b933043b6dd44cc33a98f_(
        __int64 a1,
        int *a2,
        _OWORD *a3,
        const struct ViewOptions *a4,
        __int64 *a5,
        _QWORD *a6,
        __int64 a7)
{
  int v7; // eax

  v7 = *a2;
  *(_OWORD *)(a1 + 4) = *a3;
  *(_DWORD *)a1 = v7;
  ViewOptions::ViewOptions((ViewOptions *)(a1 + 24), a4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)(a1 + 80),
    a5);
  *(_QWORD *)(a1 + 88) = *a6;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 96,
    a7);
  *(_QWORD *)(a1 + 96) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  return a1;
}

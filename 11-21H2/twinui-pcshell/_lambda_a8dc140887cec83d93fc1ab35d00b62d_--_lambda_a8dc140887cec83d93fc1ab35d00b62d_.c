/*
 * XREFs of _lambda_a8dc140887cec83d93fc1ab35d00b62d_::_lambda_a8dc140887cec83d93fc1ab35d00b62d_ @ 0x1801AF288
 * Callers:
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180463A5C (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18022DEFE (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18022DEFE.c)
 */

_QWORD *__fastcall lambda_a8dc140887cec83d93fc1ab35d00b62d_::_lambda_a8dc140887cec83d93fc1ab35d00b62d_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v8; // rcx

  *a1 = *a2;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1, a3);
  a1[2] = *a4;
  a1[3] = 0LL;
  a1[4] = 0LL;
  v8 = a5[1];
  if ( v8 )
  {
    a1[3] = *a5;
    a1[4] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 5,
    a6);
  a1[5] = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  return a1;
}

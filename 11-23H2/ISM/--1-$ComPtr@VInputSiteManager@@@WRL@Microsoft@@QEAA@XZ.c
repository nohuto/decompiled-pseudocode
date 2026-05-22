/*
 * XREFs of ??1?$ComPtr@VInputSiteManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CA998
 * Callers:
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$2 @ 0x18006D6A0 (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1__&_unsigned_long_&_InputSiteManager____::_1_::dtor$3 @ 0x18006EC10 (_Microsoft--WRL--Details--Make_InputSite_gsl--span_InputSiteId__1__-_unsigned_long__ea_18006EC10.c)
 *     _InputProcess::InputProcess_::_1_::dtor$1 @ 0x1800CA8DB (_InputProcess--InputProcess_--_1_--dtor$1.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$2 @ 0x18011037F (_AnimationDataProvider--CreateDataSource_--_1_--dtor$2.c)
 *     _AnimationDataProvider::CreateProcessIdList_::_1_::dtor$0 @ 0x180110438 (_AnimationDataProvider--CreateProcessIdList_--_1_--dtor$0.c)
 *     _GestureHandler::StartAnimation_::_1_::dtor$1 @ 0x180157D5E (_GestureHandler--StartAnimation_--_1_--dtor$1.c)
 *     _PenEventsTipToGlassAdapter::IsTipToGlassRequired_::_1_::dtor$0 @ 0x1801DA980 (_PenEventsTipToGlassAdapter--IsTipToGlassRequired_--_1_--dtor$0.c)
 *     _PenEventsTipToGlassAdapter::NotifyTipToGlass_::_1_::dtor$0 @ 0x1801DAA34 (_PenEventsTipToGlassAdapter--NotifyTipToGlass_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<InputSiteManager>::~ComPtr<InputSiteManager>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}

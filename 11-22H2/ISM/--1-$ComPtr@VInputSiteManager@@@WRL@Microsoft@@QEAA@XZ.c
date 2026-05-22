/*
 * XREFs of ??1?$ComPtr@VInputSiteManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D9BF4
 * Callers:
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$2 @ 0x1800817E0 (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1__&_unsigned_long_&_InputSiteManager____::_1_::dtor$3 @ 0x180082600 (_Microsoft--WRL--Details--Make_InputSite_gsl--span_InputSiteId__1__-_unsigned_long__ea_180082600.c)
 *     _InputProcess::InputProcess_::_1_::dtor$1 @ 0x1800D9B37 (_InputProcess--InputProcess_--_1_--dtor$1.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$2 @ 0x18011E3EF (_AnimationDataProvider--CreateDataSource_--_1_--dtor$2.c)
 *     _AnimationDataProvider::CreateProcessIdList_::_1_::dtor$0 @ 0x18011E4A8 (_AnimationDataProvider--CreateProcessIdList_--_1_--dtor$0.c)
 *     _GestureHandler::StartAnimation_::_1_::dtor$1 @ 0x18016603E (_GestureHandler--StartAnimation_--_1_--dtor$1.c)
 *     _PenEventsTipToGlassAdapter::IsTipToGlassRequired_::_1_::dtor$0 @ 0x1801E8190 (_PenEventsTipToGlassAdapter--IsTipToGlassRequired_--_1_--dtor$0.c)
 *     _PenEventsTipToGlassAdapter::NotifyTipToGlass_::_1_::dtor$0 @ 0x1801E8244 (_PenEventsTipToGlassAdapter--NotifyTipToGlass_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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

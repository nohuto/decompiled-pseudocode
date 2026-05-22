/*
 * XREFs of ??1?$ComPtr@VInputSiteManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B1834
 * Callers:
 *     _Microsoft::WRL::Details::Make_InputSite_gsl::span_InputSiteId__1__&_unsigned_long_&_InputSiteManager____::_1_::dtor$3 @ 0x1800573C0 (_Microsoft--WRL--Details--Make_InputSite_gsl--span_InputSiteId__1__-_unsigned_long__ea_1800573C0.c)
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$2 @ 0x180057760 (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$2.c)
 *     _InputProcess::InputProcess_::_1_::dtor$1 @ 0x1800B1763 (_InputProcess--InputProcess_--_1_--dtor$1.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$0 @ 0x1800F59CC (_AnimationDataProvider--CreateDataSource_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$0 @ 0x1800F5BB4 (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetDataSourceId_::_1_::dtor$0 @ 0x1800F5D00 (_AnimationDataProvider--GetDataSourceId_--_1_--dtor$0.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x18013ECF7 (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$0 @ 0x18014152E (_DragNDropProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$1 @ 0x18014153A (_DragNDropProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _ResizeProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x180145439 (_ResizeProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$0 @ 0x180146E77 (_ResizeProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$1 @ 0x180146E83 (_ResizeProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _EdgyProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x180149A2B (_EdgyProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$0 @ 0x18014B2FC (_EdgyProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$1 @ 0x18014B308 (_EdgyProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _PenEventsTipToGlassAdapter::IsTipToGlassRequired_::_1_::dtor$0 @ 0x1801BC5F0 (_PenEventsTipToGlassAdapter--IsTipToGlassRequired_--_1_--dtor$0.c)
 *     _PenEventsTipToGlassAdapter::NotifyTipToGlass_::_1_::dtor$0 @ 0x1801BC6A4 (_PenEventsTipToGlassAdapter--NotifyTipToGlass_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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

/*
 * XREFs of ??1?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F4330
 * Callers:
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$1 @ 0x1800F5BC0 (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$1.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x18013ED03 (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 *     _ResizeProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x180145445 (_ResizeProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 *     _EdgyProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x180149A37 (_EdgyProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<BamoDataSourceStub>::~ComPtr<BamoDataSourceStub>(_QWORD *a1)
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

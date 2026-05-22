/*
 * XREFs of ??1?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@QEAA@XZ @ 0x18011C408
 * Callers:
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$1 @ 0x18011E6DB (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$1.c)
 *     _GestureHandler::FeedAnimationDataIfNeeded_::_1_::dtor$1 @ 0x1801651C6 (_GestureHandler--FeedAnimationDataIfNeeded_--_1_--dtor$1.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x18016BF44 (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 *     _ResizeProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x18017235A (_ResizeProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 *     _EdgyProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x180176608 (_EdgyProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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

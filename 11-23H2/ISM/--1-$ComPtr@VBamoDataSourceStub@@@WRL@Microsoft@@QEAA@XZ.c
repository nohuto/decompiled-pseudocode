/*
 * XREFs of ??1?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@QEAA@XZ @ 0x18010E398
 * Callers:
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$1 @ 0x18011066B (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$1.c)
 *     _GestureHandler::FeedAnimationDataIfNeeded_::_1_::dtor$1 @ 0x180156EE6 (_GestureHandler--FeedAnimationDataIfNeeded_--_1_--dtor$1.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x18015DCC4 (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 *     _ResizeProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x1801640DA (_ResizeProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 *     _EdgyProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$2 @ 0x180168388 (_EdgyProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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

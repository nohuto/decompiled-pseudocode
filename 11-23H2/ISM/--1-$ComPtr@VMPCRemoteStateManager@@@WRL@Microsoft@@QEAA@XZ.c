/*
 * XREFs of ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6F2C
 * Callers:
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$6 @ 0x18006C305 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$6.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$0 @ 0x18011033A (_AnimationDataProvider--CreateDataSource_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$0 @ 0x18011065F (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetDataSourceId_::_1_::dtor$0 @ 0x180110750 (_AnimationDataProvider--GetDataSourceId_--_1_--dtor$0.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x18015DCB8 (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$0 @ 0x1801603E3 (_DragNDropProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$1 @ 0x1801603EF (_DragNDropProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _ResizeProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x1801640CE (_ResizeProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$0 @ 0x18016577F (_ResizeProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$1 @ 0x18016578B (_ResizeProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _EdgyProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x18016837C (_EdgyProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$0 @ 0x180169BB3 (_EdgyProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$1 @ 0x180169BBF (_EdgyProcessor--StartAnimation_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MPCRemoteStateManager>::~ComPtr<MPCRemoteStateManager>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease(a1);
}

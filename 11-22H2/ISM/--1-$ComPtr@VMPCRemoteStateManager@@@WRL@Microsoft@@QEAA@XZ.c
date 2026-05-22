/*
 * XREFs of ??1?$ComPtr@VMPCRemoteStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B990C
 * Callers:
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$6 @ 0x18007FD18 (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$6.c)
 *     _AnimationDataProvider::CreateDataSource_::_1_::dtor$0 @ 0x18011E3AA (_AnimationDataProvider--CreateDataSource_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetBamoDataSourceStub_::_1_::dtor$0 @ 0x18011E6CF (_AnimationDataProvider--GetBamoDataSourceStub_--_1_--dtor$0.c)
 *     _AnimationDataProvider::GetDataSourceId_::_1_::dtor$0 @ 0x18011E7C0 (_AnimationDataProvider--GetDataSourceId_--_1_--dtor$0.c)
 *     _DragNDropProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x18016BF38 (_DragNDropProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$0 @ 0x18016E663 (_DragNDropProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartAnimation_::_1_::dtor$1 @ 0x18016E66F (_DragNDropProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _ResizeProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x18017234E (_ResizeProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$0 @ 0x1801739FF (_ResizeProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _ResizeProcessor::StartAnimation_::_1_::dtor$1 @ 0x180173A0B (_ResizeProcessor--StartAnimation_--_1_--dtor$1.c)
 *     _EdgyProcessor::FeedAnimationDataIfNeeded_::_1_::dtor$0 @ 0x1801765FC (_EdgyProcessor--FeedAnimationDataIfNeeded_--_1_--dtor$0.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$0 @ 0x180177E33 (_EdgyProcessor--StartAnimation_--_1_--dtor$0.c)
 *     _EdgyProcessor::StartAnimation_::_1_::dtor$1 @ 0x180177E3F (_EdgyProcessor--StartAnimation_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MPCRemoteStateManager>::~ComPtr<MPCRemoteStateManager>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease(a1);
}

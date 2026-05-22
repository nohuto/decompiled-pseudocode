/*
 * XREFs of ??1?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18008014C
 * Callers:
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$0 @ 0x180054CD0 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$0.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$3 @ 0x180054D10 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$3.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$2 @ 0x180054D30 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$2.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$2 @ 0x1800800D7 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$2.c)
 *     _Edge::Edge_::_1_::dtor$1 @ 0x1801AAEAA (_Edge--Edge_--_1_--dtor$1.c)
 *     _Edge::Edge_::_1_::dtor$1_0 @ 0x1801AAF2D (_Edge--Edge_--_1_--dtor$1_0.c)
 *     _Edge::Edge_::_1_::dtor$1_1 @ 0x1801AAFC1 (_Edge--Edge_--_1_--dtor$1_1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::~ComPtr<ShellGesturesClientProxy>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(a1);
}

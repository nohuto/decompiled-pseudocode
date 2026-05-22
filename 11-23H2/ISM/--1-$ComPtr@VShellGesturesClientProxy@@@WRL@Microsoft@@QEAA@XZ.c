/*
 * XREFs of ??1?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800970B0
 * Callers:
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$3 @ 0x18006BF1F (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$3.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$2 @ 0x18006BF31 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$2.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$2 @ 0x18009702B (_DeviceInputHost--DeviceInputHost_--_1_--dtor$2.c)
 *     _Edge::Edge_::_1_::dtor$1 @ 0x1801C927D (_Edge--Edge_--_1_--dtor$1.c)
 *     _Edge::Edge_::_1_::dtor$1_0 @ 0x1801C9305 (_Edge--Edge_--_1_--dtor$1_0.c)
 *     _Edge::Edge_::_1_::dtor$1_1 @ 0x1801C939D (_Edge--Edge_--_1_--dtor$1_1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::~ComPtr<ShellGesturesClientProxy>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(a1);
}

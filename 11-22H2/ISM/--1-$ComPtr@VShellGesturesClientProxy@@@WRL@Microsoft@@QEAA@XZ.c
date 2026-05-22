/*
 * XREFs of ??1?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A9750
 * Callers:
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$3 @ 0x18007FA6F (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$3.c)
 *     _ShellGesturesProcessor::OnHitTest_::_1_::dtor$2 @ 0x18007FA81 (_ShellGesturesProcessor--OnHitTest_--_1_--dtor$2.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$2 @ 0x1800A96CB (_DeviceInputHost--DeviceInputHost_--_1_--dtor$2.c)
 *     _Edge::Edge_::_1_::dtor$1 @ 0x1801D6AED (_Edge--Edge_--_1_--dtor$1.c)
 *     _Edge::Edge_::_1_::dtor$1_0 @ 0x1801D6B75 (_Edge--Edge_--_1_--dtor$1_0.c)
 *     _Edge::Edge_::_1_::dtor$1_1 @ 0x1801D6C0D (_Edge--Edge_--_1_--dtor$1_1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::~ComPtr<ShellGesturesClientProxy>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(a1);
}

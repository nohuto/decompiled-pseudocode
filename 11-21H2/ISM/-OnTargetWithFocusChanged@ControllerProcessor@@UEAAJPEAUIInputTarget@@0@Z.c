/*
 * XREFs of ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x180177D70
 * Callers:
 *     <none>
 * Callees:
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180179304 (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::OnTargetWithFocusChanged(
        ControllerProcessor *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  ControllerProcessor::StopAutoRepeatTimer((ControllerProcessor *)((char *)this - 8));
  return NonPointerProcessor::OnTargetWithFocusChanged(this, a2, a3);
}

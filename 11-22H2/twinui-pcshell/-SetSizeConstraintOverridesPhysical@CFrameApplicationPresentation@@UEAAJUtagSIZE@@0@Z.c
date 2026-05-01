/*
 * XREFs of ?SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x180058480
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___ @ 0x1800584A8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSizeConstraintOverridesPhysical(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[1] = a2;
  v4[0] = this;
  v4[2] = a3;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___(this, v4);
}

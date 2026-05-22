/*
 * XREFs of ?OnPointerInfoFrame@DragGestureTracker@@QEAAJAEAUtagPOINTER_INFO@@@Z @ 0x18019D6BC
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180140220 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180146060 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x18014BAFC (-OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ @ 0x18019D6FC (-ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ.c)
 */

__int64 __fastcall DragGestureTracker::OnPointerInfoFrame(DragGestureTracker *this, struct tagPOINTER_INFO *a2)
{
  if ( (int)ProcessPointerFramesInteractionContext(*((_QWORD *)this + 2), 1LL, 1LL, a2) < 0 )
    DragGestureTracker::ResetAndInitializeInteractionContext(this);
  return 0LL;
}

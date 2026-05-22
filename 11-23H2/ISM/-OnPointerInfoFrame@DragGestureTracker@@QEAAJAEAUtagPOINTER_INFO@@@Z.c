/*
 * XREFs of ?OnPointerInfoFrame@DragGestureTracker@@QEAAJAEAUtagPOINTER_INFO@@@Z @ 0x1801BB8BC
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18015F030 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180164B60 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x18016A340 (-OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ @ 0x1801BB8FC (-ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ.c)
 */

__int64 __fastcall DragGestureTracker::OnPointerInfoFrame(DragGestureTracker *this, struct tagPOINTER_INFO *a2)
{
  if ( (int)ProcessPointerFramesInteractionContext(*((_QWORD *)this + 2), 1LL, 1LL, a2) < 0 )
    DragGestureTracker::ResetAndInitializeInteractionContext(this);
  return 0LL;
}

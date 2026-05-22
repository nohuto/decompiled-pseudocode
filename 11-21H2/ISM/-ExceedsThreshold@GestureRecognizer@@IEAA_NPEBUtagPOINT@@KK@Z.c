/*
 * XREFs of ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x1801B74FC
 * Callers:
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1801B72D4 (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1801B8208 (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B8324 (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B8D78 (-TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B8E6C (-TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall GestureRecognizer::ExceedsThreshold(
        GestureRecognizer *this,
        const struct tagPOINT *a2,
        unsigned int a3,
        unsigned int a4)
{
  bool result; // al

  if ( abs32(a2->x) > a3 )
    return 1;
  if ( abs32(a2->y) > a4 )
    return 1;
  result = 0;
  if ( !a3 || !a4 )
    return 1;
  return result;
}

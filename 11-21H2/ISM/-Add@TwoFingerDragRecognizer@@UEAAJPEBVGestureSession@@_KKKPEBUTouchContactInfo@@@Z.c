/*
 * XREFs of ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B8100
 * Callers:
 *     <none>
 * Callees:
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1801B8208 (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?DeliverGesture@TwoFingerDragRecognizer@@AEAAX_NPEBUTouchContactInfo@@@Z @ 0x1801B82CC (-DeliverGesture@TwoFingerDragRecognizer@@AEAAX_NPEBUTouchContactInfo@@@Z.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B8324 (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B83D8 (-DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B84E0 (-DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::Add(
        TwoFingerDragRecognizer *this,
        const struct GestureSession *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  unsigned int v7; // ebx
  __int16 v8; // cx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx

  v7 = 0;
  v8 = *((_WORD *)this + 8);
  if ( (v8 & 8) != 0 && a4 >= *((_DWORD *)this + 6) )
  {
    *((_WORD *)this + 8) = 0;
    v8 = 0;
    *((_DWORD *)this + 5) = 4;
  }
  if ( (*((_DWORD *)a2 + 3) & *((_DWORD *)this + 2)) == 0 )
    return 0LL;
  if ( (a3 & 1) != 0 )
  {
    *((_WORD *)this + 8) = v8 & 0xFFF7;
    *((_DWORD *)this + 5) = 0;
    return (unsigned int)TwoFingerDragRecognizer::DragInactive(this, a2, a3, a4, a5, a6);
  }
  v11 = *((_DWORD *)this + 5);
  if ( !v11 )
    return (unsigned int)TwoFingerDragRecognizer::DragInactive(this, a2, a3, a4, a5, a6);
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        if ( (a3 & 4) != 0 || !TwoFingerDragRecognizer::ContactsAreValid(this, a5, a6) )
        {
          *((_WORD *)this + 8) = 0;
          *((_DWORD *)this + 5) = 4;
        }
        else
        {
          TwoFingerDragRecognizer::DeliverGesture(this, 0, a6);
        }
      }
      return v7;
    }
    return (unsigned int)TwoFingerDragRecognizer::DragInDeadZone(this, a2, a3, a4, a5, a6);
  }
  else
  {
    return (unsigned int)TwoFingerDragRecognizer::DragOneFingerDown(this, a2, a3, a4, a5, a6);
  }
}

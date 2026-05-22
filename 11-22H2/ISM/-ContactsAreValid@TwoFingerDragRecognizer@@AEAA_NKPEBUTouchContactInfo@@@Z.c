/*
 * XREFs of ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1801E3F50
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801E3E40 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801E406C (-DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801E4120 (-DragInactive@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801E4228 (-DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x1801E3214 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z.c)
 */

bool __fastcall TwoFingerDragRecognizer::ContactsAreValid(
        TwoFingerDragRecognizer *this,
        int a2,
        const struct TouchContactInfo *a3)
{
  unsigned int v3; // edx
  _DWORD *v4; // r9
  unsigned __int16 *i; // r10
  int v6; // ebx
  unsigned int v7; // r9d
  int v8; // rcx^4
  __int64 v9; // r11
  int v10; // edx
  unsigned int v11; // r9d
  GestureRecognizer *v12; // rcx
  struct tagPOINT v14; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 == 2 )
  {
    v3 = 0;
    v4 = (_DWORD *)((char *)this + 28);
    for ( i = (unsigned __int16 *)((char *)a3 + 2); *v4 == *i; i += 20 )
    {
      ++v3;
      ++v4;
      if ( v3 >= 2 )
      {
        v6 = *((_DWORD *)a3 + 1) - *((_DWORD *)a3 + 11);
        v7 = *((unsigned __int16 *)this + 38);
        v14 = (struct tagPOINT)__PAIR64__(*((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 12), v6);
        if ( GestureRecognizer::ExceedsThreshold(*(GestureRecognizer **)&v14, &v14, v7, v7) )
          return 0;
        v10 = *(_DWORD *)(v9 + 40) - *(_DWORD *)(v9 + 48);
        v11 = *(unsigned __int16 *)(v9 + 86);
        v14.x = v6 - (*(_DWORD *)(v9 + 36) - *(_DWORD *)(v9 + 44));
        v12 = (GestureRecognizer *)(unsigned int)(v8 - v10);
        v14.y = (int)v12;
        return !GestureRecognizer::ExceedsThreshold(v12, &v14, v11, v11);
      }
    }
  }
  return 0;
}

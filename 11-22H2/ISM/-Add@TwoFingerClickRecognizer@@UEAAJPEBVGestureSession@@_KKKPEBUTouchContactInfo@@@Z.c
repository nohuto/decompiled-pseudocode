/*
 * XREFs of ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801E4650
 * Callers:
 *     <none>
 * Callees:
 *     ?TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801E4AC8 (-TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801E4BC4 (-TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 *     ?TapOneFingerUp@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801E4C90 (-TapOneFingerUp@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapStarted@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801E4D04 (-TapStarted@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::Add(
        TwoFingerClickRecognizer *this,
        const struct GestureSession *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  unsigned int v7; // r10d
  __int16 v8; // cx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  v7 = 0;
  v8 = *((_WORD *)this + 8);
  if ( (v8 & 0x10) != 0 && a4 >= *((_DWORD *)this + 6) )
  {
    *((_WORD *)this + 8) = 0;
    v8 = 0;
    *((_DWORD *)this + 5) = 4;
  }
  if ( (*((_DWORD *)a2 + 3) & *((_DWORD *)this + 2)) == 0 )
    return 0LL;
  if ( (a3 & 1) != 0 )
  {
    *((_WORD *)this + 8) = v8 & 0xFFE7 | 8;
    *((_DWORD *)this + 5) = 0;
  }
  v10 = *((_DWORD *)this + 5);
  if ( !v10 )
    return (unsigned int)TwoFingerClickRecognizer::TapInactive(this, a2, a3, a4, a5, a6);
  v11 = v10 - 1;
  if ( !v11 )
    return (unsigned int)TwoFingerClickRecognizer::TapOneFingerDown(this, a2, a3, a4, a5, a6);
  v12 = v11 - 1;
  if ( !v12 )
    return (unsigned int)TwoFingerClickRecognizer::TapStarted(this, a2, a3, a4, a5, a6);
  if ( v12 == 1 )
    return (unsigned int)TwoFingerClickRecognizer::TapOneFingerUp(this, a2, a3, a4, a5, a6);
  return v7;
}

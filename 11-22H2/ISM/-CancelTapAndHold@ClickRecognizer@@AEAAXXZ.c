/*
 * XREFs of ?CancelTapAndHold@ClickRecognizer@@AEAAXXZ @ 0x1801E2670
 * Callers:
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801E2994 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?OnTouchUp@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801E2B0C (-OnTouchUp@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1801E2C50 (-Reset@ClickRecognizer@@UEAAXPEBVGestureSession@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClickRecognizer::CancelTapAndHold(ClickRecognizer *this)
{
  __int16 v1; // dx
  __int16 v2; // dx

  v1 = *((_WORD *)this + 8);
  if ( (v1 & 0x200) != 0 )
  {
    v2 = v1 & 0xFDFF;
    *((_WORD *)this + 8) = v2;
    if ( (*((_BYTE *)this + 20) & 0xF) == 3 )
    {
      *((_WORD *)this + 8) = v2 | 0x20;
      *(_QWORD *)((char *)this + 84) = *((_QWORD *)this + 14);
      *((_DWORD *)this + 23) = 2;
    }
  }
  *((_DWORD *)this + 5) &= 0xFFFFFFF0;
}

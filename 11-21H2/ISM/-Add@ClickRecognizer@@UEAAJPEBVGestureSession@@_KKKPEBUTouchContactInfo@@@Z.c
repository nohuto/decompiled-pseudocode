/*
 * XREFs of ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B6890
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B6C78 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?OnTouchDown@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B6D4C (-OnTouchDown@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 *     ?OnTouchUp@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B6DE4 (-OnTouchUp@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall ClickRecognizer::Add(
        ClickRecognizer *this,
        const struct GestureSession *a2,
        __int16 a3,
        unsigned int a4)
{
  char v5; // r14
  unsigned int v8; // ebp
  char *v9; // rdi
  unsigned int v10; // r8d
  unsigned int v11; // r9d

  v5 = a3;
  if ( (a3 & 0x100) == 0 )
  {
    v8 = 1;
    if ( (*((_DWORD *)a2 + 3) & 0x7880) != 0 )
      v8 = *((_DWORD *)a2 + 187);
    v9 = (char *)a2 + (-(__int64)((*((_DWORD *)a2 + 3) & 0x7880) != 0) & 0xFFFFFFFFFFFFFE70uLL) + 1152;
    *((_QWORD *)this + 14) = *(_QWORD *)(v9 + 4);
    if ( (a3 & 1) != 0 )
      ClickRecognizer::OnTouchDown(this, a2, a4, a4, (const struct TouchContactInfo *)v9);
    ClickRecognizer::OnTouch(this, a2, a4, v8, (const struct TouchContactInfo *)v9);
    if ( (v5 & 4) != 0 )
      ClickRecognizer::OnTouchUp(this, a2, v10, v11, (const struct TouchContactInfo *)v9);
  }
  return 0LL;
}

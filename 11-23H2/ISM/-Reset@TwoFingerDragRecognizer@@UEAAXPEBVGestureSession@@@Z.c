/*
 * XREFs of ?Reset@TwoFingerDragRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x18002FE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TwoFingerDragRecognizer::Reset(TwoFingerDragRecognizer *this, const struct GestureSession *a2)
{
  *((_WORD *)this + 8) = 0;
  *(_OWORD *)((char *)this + 28) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 5) = 0;
}

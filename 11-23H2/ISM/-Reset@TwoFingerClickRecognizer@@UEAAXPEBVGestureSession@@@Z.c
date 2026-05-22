/*
 * XREFs of ?Reset@TwoFingerClickRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1801D70D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TwoFingerClickRecognizer::Reset(TwoFingerClickRecognizer *this, const struct GestureSession *a2)
{
  *((_WORD *)this + 8) &= 0x14u;
  *(_OWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 5) = 0;
}

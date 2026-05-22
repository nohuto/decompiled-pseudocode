/*
 * XREFs of ?Reset@PinchStretchRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x180026F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PinchStretchRecognizer::Reset(PinchStretchRecognizer *this, const struct GestureSession *a2)
{
  *((_BYTE *)this + 56) &= 0xFCu;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
}

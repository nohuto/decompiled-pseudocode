/*
 * XREFs of ?Reset@TwoFingerGestureRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x1801B7F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall TwoFingerGestureRecognizer::Reset(TwoFingerGestureRecognizer *this, const struct GestureSession *a2)
{
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16);
  (*(void (__fastcall **)(char *, const struct GestureSession *))(*((_QWORD *)this + 11) + 32LL))((char *)this + 88, a2);
}

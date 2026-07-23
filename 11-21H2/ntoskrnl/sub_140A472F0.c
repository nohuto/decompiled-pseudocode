/*
 * XREFs of sub_140A472F0 @ 0x140A472F0
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     <none>
 */

double sub_140A472F0()
{
  double result; // xmm0_8
  _QWORD v1[65]; // [rsp+0h] [rbp-208h] BYREF

  _fxsave64(v1);
  __asm
  {
    fnclex
    ffree   st(7)
  }
  v1[1] = 0xFFFFFFFFLL;
  _fxrstor64(v1);
  __asm { fnsave  byte ptr [rsp+208h+var_208] }
  return result;
}

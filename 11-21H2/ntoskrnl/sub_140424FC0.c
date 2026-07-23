/*
 * XREFs of sub_140424FC0 @ 0x140424FC0
 * Callers:
 *     sub_14059FECC @ 0x14059FECC (sub_14059FECC.c)
 *     sub_1405A02B8 @ 0x1405A02B8 (sub_1405A02B8.c)
 *     sub_1405A1128 @ 0x1405A1128 (sub_1405A1128.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_140424FC0(__int64 _RCX, __int64 a2)
{
  __int64 v2; // rax

  LODWORD(v2) = KeGetPcr()[1].HalReserved[12];
  do
  {
    __asm { clwb    byte ptr [rcx] }
    _RCX += v2;
    a2 -= v2;
  }
  while ( a2 );
  _mm_sfence();
  return v2;
}

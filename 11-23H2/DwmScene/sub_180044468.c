/*
 * XREFs of sub_180044468 @ 0x180044468
 * Callers:
 *     sub_18004C2F0 @ 0x18004C2F0 (sub_18004C2F0.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_180044468(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 160);
  return _bittest64(&v2, a2);
}

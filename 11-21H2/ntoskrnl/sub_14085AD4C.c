/*
 * XREFs of sub_14085AD4C @ 0x14085AD4C
 * Callers:
 *     sub_140B27E7C @ 0x140B27E7C (sub_140B27E7C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14085AD4C(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int16 v4; // cx
  __int64 result; // rax

  v2 = qword_140C5AE28;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 24) &= 0xFFFFC0000000FFFFuLL;
  *(_QWORD *)(a1 + 32) = v2 + 960;
  *(_QWORD *)(a1 + 40) = v2 + 968;
  *(_QWORD *)(a1 + 72) = v2 + 976;
  v4 = *(unsigned __int8 *)(v2 + 977);
  *(_QWORD *)(a1 + 48) = a2;
  *(_WORD *)(a1 + 86) = 4 * (v4 + 2);
  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)(a2 + 2 * result) );
  *(_WORD *)(a1 + 80) = result;
  return result;
}

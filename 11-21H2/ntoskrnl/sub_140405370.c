/*
 * XREFs of sub_140405370 @ 0x140405370
 * Callers:
 *     sub_140A3792C @ 0x140A3792C (sub_140A3792C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140405370(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_140014868;
  return result;
}

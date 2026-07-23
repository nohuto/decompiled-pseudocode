/*
 * XREFs of sub_1405F3950 @ 0x1405F3950
 * Callers:
 *     sub_1405F327C @ 0x1405F327C (sub_1405F327C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405F3950(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // r9d
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = a2 - 16;
  v3 = *(_DWORD *)(a1 + 176) & 1;
  if ( v3 && (a2 & 0xFFF) == 0 )
    v2 = a2 - 32;
  v4 = 16 * (WORD1(qword_140C5A5C0) ^ WORD1(v2) ^ *(unsigned __int16 *)(v2 + 2)) - 16;
  if ( v3 && ((v2 + 32) & 0xFFF) == 0 )
    v4 = 16 * (WORD1(qword_140C5A5C0) ^ WORD1(v2) ^ *(unsigned __int16 *)(v2 + 2)) - 32;
  result = v4;
  *(_WORD *)(v4 + a2 - 2) |= 0x4000u;
  return result;
}

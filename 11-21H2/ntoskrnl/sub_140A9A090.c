/*
 * XREFs of sub_140A9A090 @ 0x140A9A090
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A9A090(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 != *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8LL) )
    return 0LL;
  result = 1LL;
  if ( a2 != ((*(_DWORD *)(a3 + 72) >> 1) & 1) )
    return 0LL;
  return result;
}

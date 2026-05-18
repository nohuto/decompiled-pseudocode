/*
 * XREFs of sub_1800841A0 @ 0x1800841A0
 * Callers:
 *     sub_180084078 @ 0x180084078 (sub_180084078.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 __fastcall sub_1800841A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  int v6; // eax

  for ( i = a1; i != a2; a3 += 40LL )
  {
    sub_1800124F8((__int64 *)a3, (_QWORD *)i);
    sub_1800124F8((__int64 *)(a3 + 16), (_QWORD *)(i + 16));
    v6 = *(_DWORD *)(i + 32);
    i += 40LL;
    *(_DWORD *)(a3 + 32) = v6;
  }
  return a3;
}

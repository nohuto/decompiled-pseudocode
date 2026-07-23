/*
 * XREFs of sub_140A2A0E4 @ 0x140A2A0E4
 * Callers:
 *     sub_140A24104 @ 0x140A24104 (sub_140A24104.c)
 * Callees:
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 */

__int64 __fastcall sub_140A2A0E4(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // rdi

  v3 = (__int64 *)&off_140A3B370;
  v5 = 13LL;
  do
  {
    sub_14077198C(a1, a2, 1, 0LL, 0LL, *v3, 0, 0LL, 0, 0);
    v3 += 4;
    --v5;
  }
  while ( v5 );
  return 0LL;
}

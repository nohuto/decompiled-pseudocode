/*
 * XREFs of sub_1C001DA20 @ 0x1C001DA20
 * Callers:
 *     sub_1C001D8EC @ 0x1C001D8EC (sub_1C001D8EC.c)
 *     sub_1C006C924 @ 0x1C006C924 (sub_1C006C924.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C001DA20(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = a1 + 5032;
  result = 5LL;
  do
  {
    *(_QWORD *)(v1 - 4) = 0LL;
    *(_BYTE *)(v1 + 4) = 1;
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_BYTE *)(v1 + 64) = 1;
    v1 += 12LL;
    --result;
  }
  while ( result );
  return result;
}

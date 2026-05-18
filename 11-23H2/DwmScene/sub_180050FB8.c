/*
 * XREFs of sub_180050FB8 @ 0x180050FB8
 * Callers:
 *     sub_1800902BC @ 0x1800902BC (sub_1800902BC.c)
 *     sub_1800906E4 @ 0x1800906E4 (sub_1800906E4.c)
 *     sub_180090AB8 @ 0x180090AB8 (sub_180090AB8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180050FB8(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8

  v3 = a2;
  LOBYTE(a2) = 10;
  LOBYTE(v4) = std::ios::widen(a1 + *(int *)(*(_QWORD *)a1 + 4LL), a2);
  return sub_180050E70(a1, v3, v4);
}

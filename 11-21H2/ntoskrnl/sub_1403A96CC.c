/*
 * XREFs of sub_1403A96CC @ 0x1403A96CC
 * Callers:
 *     sub_1403A8390 @ 0x1403A8390 (sub_1403A8390.c)
 *     sub_1403A8E50 @ 0x1403A8E50 (sub_1403A8E50.c)
 * Callees:
 *     sub_1403A9744 @ 0x1403A9744 (sub_1403A9744.c)
 *     sub_1403AA258 @ 0x1403AA258 (sub_1403AA258.c)
 */

__int64 __fastcall sub_1403A96CC(_DWORD *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // r8

  v6 = ((a2 * *a1 * a1[1] + 7) >> 3) + 72;
  v7 = sub_1403AA258(v6);
  if ( !v7 )
    return 3221225495LL;
  result = sub_1403A9744(a1, a2, v7, v6);
  *a3 = v9;
  return result;
}

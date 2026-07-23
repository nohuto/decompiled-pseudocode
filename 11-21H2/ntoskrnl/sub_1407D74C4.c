/*
 * XREFs of sub_1407D74C4 @ 0x1407D74C4
 * Callers:
 *     sub_1407DC0D0 @ 0x1407DC0D0 (sub_1407DC0D0.c)
 * Callees:
 *     sub_1407D7100 @ 0x1407D7100 (sub_1407D7100.c)
 *     sub_1407DE1A8 @ 0x1407DE1A8 (sub_1407DE1A8.c)
 */

__int64 __fastcall sub_1407D74C4(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r9

  sub_1407DE1A8(a2, a3);
  result = sub_1407D7100(a2, CriticalWorkQueue, a3, v6, *(_QWORD *)(a1 + 216));
  if ( (int)result >= 0 )
  {
    result = sub_1407D7100(a2, DelayedWorkQueue, a3, v8, *(_QWORD *)(a1 + 216));
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 232) |= a3;
      return 0LL;
    }
  }
  return result;
}

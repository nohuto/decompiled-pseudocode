/*
 * XREFs of sub_14025DCF8 @ 0x14025DCF8
 * Callers:
 *     sub_14081D450 @ 0x14081D450 (sub_14081D450.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14025DCF8(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  result = 0x3FFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) = 0x3FFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0x3FFFFFFFFFLL;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}

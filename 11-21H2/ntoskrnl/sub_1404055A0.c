/*
 * XREFs of sub_1404055A0 @ 0x1404055A0
 * Callers:
 *     sub_1403FEE6C @ 0x1403FEE6C (sub_1403FEE6C.c)
 * Callees:
 *     sub_1404053F0 @ 0x1404053F0 (sub_1404053F0.c)
 */

__int64 __fastcall sub_1404055A0(int a1, PRKSEMAPHORE *a2, __int64 a3, _QWORD *a4, __int64 a5, PRKSEMAPHORE a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( a1 == 2 )
    sub_1404053F0(*a2, a2[1], a3, *a4, a4[1], a5, a6);
  else
    return 209715726;
  return v6;
}

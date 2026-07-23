/*
 * XREFs of sub_1405378F4 @ 0x1405378F4
 * Callers:
 *     sub_140537770 @ 0x140537770 (sub_140537770.c)
 *     sub_140537860 @ 0x140537860 (sub_140537860.c)
 * Callees:
 *     sub_1405383E4 @ 0x1405383E4 (sub_1405383E4.c)
 */

__int64 __fastcall sub_1405378F4(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 280);
  v4 = v2 + *(unsigned int *)(a1 + 256);
  if ( v4 > v2 )
    return sub_1405383E4(v2, v4, a2);
  else
    return 0LL;
}

/*
 * XREFs of sub_14054E1A8 @ 0x14054E1A8
 * Callers:
 *     sub_140550360 @ 0x140550360 (sub_140550360.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14054E1A8(__int64 **P, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rdi

  v3 = *P;
  v4 = v3[4] + *((unsigned int *)v3 + 11);
  if ( a2 )
    *a2 = *((unsigned int *)v3 + 10);
  sub_1403A0EB4(P);
  ExFreePoolWithTag(P, 0);
  return v4;
}

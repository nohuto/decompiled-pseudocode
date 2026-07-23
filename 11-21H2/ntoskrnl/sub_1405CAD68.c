/*
 * XREFs of sub_1405CAD68 @ 0x1405CAD68
 * Callers:
 *     sub_1405CC220 @ 0x1405CC220 (sub_1405CC220.c)
 *     sub_1405CE584 @ 0x1405CE584 (sub_1405CE584.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1405CAD68(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140C224F0;
  qword_140C22510 += v1;
  if ( v1 > qword_140C22500 )
    qword_140C22500 = v1;
  if ( v1 < qword_140C22508 )
    qword_140C22508 = v1;
  ++dword_140C22518;
  qword_140C224F0 = 0LL;
}

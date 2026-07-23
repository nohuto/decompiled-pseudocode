/*
 * XREFs of sub_140863EC8 @ 0x140863EC8
 * Callers:
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 */

__int64 sub_140863EC8()
{
  __int64 v0; // rdx

  if ( (unsigned int)sub_14036FA84() - 1 > 3 || !qword_140C4AD18 )
    return 3221225800LL;
  *(_WORD *)v0 = *(_WORD *)(qword_140C4AD18 + 56);
  *(_QWORD *)(v0 + 8) = sub_1403D8EA0;
  *(_QWORD *)(v0 + 24) = sub_1403DEA70;
  *(_QWORD *)(v0 + 40) = sub_1403DE810;
  *(_QWORD *)(v0 + 48) = sub_1403DF380;
  *(_QWORD *)(v0 + 56) = sub_1403DE9B0;
  *(_QWORD *)(v0 + 32) = (unsigned __int64)sub_14051E390 & -(__int64)(qword_140C4ACC8 != 0);
  return 0LL;
}

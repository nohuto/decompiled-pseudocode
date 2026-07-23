/*
 * XREFs of sub_14058727C @ 0x14058727C
 * Callers:
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140586A44 @ 0x140586A44 (sub_140586A44.c)
 *     sub_1405875A0 @ 0x1405875A0 (sub_1405875A0.c)
 *     sub_140587900 @ 0x140587900 (sub_140587900.c)
 *     sub_1405879D8 @ 0x1405879D8 (sub_1405879D8.c)
 *     sub_1405882D0 @ 0x1405882D0 (sub_1405882D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14058727C(_QWORD *a1)
{
  if ( ((*a1 >> 49) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(qword_140C51F48 + 8 * ((*a1 >> 49) & 0x7FFLL));
}

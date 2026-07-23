/*
 * XREFs of sub_1403CB264 @ 0x1403CB264
 * Callers:
 *     sub_140247FBC @ 0x140247FBC (sub_140247FBC.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_1403C9C90 @ 0x1403C9C90 (sub_1403C9C90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403CB264(_QWORD *a1, __int64 a2)
{
  if ( *a1 >= *(_QWORD *)(a2 + 24) )
    return *a1 > *(_QWORD *)(a2 + 32);
  else
    return 0xFFFFFFFFLL;
}

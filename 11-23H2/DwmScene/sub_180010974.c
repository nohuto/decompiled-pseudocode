/*
 * XREFs of sub_180010974 @ 0x180010974
 * Callers:
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 * Callees:
 *     sub_180011A3C @ 0x180011A3C (sub_180011A3C.c)
 */

char __fastcall sub_180010974(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  _QWORD *v5; // r9

  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 || !(unsigned __int8)sub_180011A3C(v3, a2, a2, a1) )
    return 0;
  *v5 = *v4;
  v5[1] = v4[1];
  return 1;
}

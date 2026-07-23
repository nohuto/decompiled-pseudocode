/*
 * XREFs of sub_140656270 @ 0x140656270
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406565BC @ 0x1406565BC (sub_1406565BC.c)
 */

__int64 __fastcall sub_140656270(_QWORD *a1, _BYTE *a2)
{
  __int16 v3; // cx
  bool v4; // cf
  __int16 v5; // ax

  if ( !a1 || !*a1 )
    return 3LL;
  if ( HIDWORD(qword_140D03CC0) == (_DWORD)qword_140D03CC0 )
  {
    v5 = sub_1406565BC(a1, 0LL);
    if ( v5 >= 0 )
      return 1LL;
    *a2 = v5;
    v4 = (v5 & 0x400) != 0;
  }
  else
  {
    v3 = word_140D03CCA[HIDWORD(qword_140D03CC0)];
    *a2 = v3;
    HIDWORD(qword_140D03CC0) = (WORD2(qword_140D03CC0) + 1) & 0x3FF;
    v4 = (v3 & 0x400) != 0;
  }
  if ( v4 )
    return 2LL;
  else
    return 0LL;
}

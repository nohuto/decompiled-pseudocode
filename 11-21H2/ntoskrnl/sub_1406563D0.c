/*
 * XREFs of sub_1406563D0 @ 0x1406563D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140656234 @ 0x140656234 (sub_140656234.c)
 *     sub_1406565BC @ 0x1406565BC (sub_1406565BC.c)
 */

bool __fastcall sub_1406563D0(_QWORD *a1)
{
  __int16 v2; // ax

  if ( !a1 || !*a1 )
    return 0;
  while ( 1 )
  {
    v2 = sub_1406565BC(a1, 0LL);
    if ( v2 >= 0 )
      break;
    sub_140656234(v2);
  }
  return (_DWORD)qword_140D03CC0 != HIDWORD(qword_140D03CC0);
}

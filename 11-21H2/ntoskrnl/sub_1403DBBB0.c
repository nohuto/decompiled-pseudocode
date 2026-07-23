/*
 * XREFs of sub_1403DBBB0 @ 0x1403DBBB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DBC0C @ 0x1403DBC0C (sub_1403DBC0C.c)
 *     sub_140646840 @ 0x140646840 (sub_140646840.c)
 *     sub_140646BC8 @ 0x140646BC8 (sub_140646BC8.c)
 *     sub_140646C2C @ 0x140646C2C (sub_140646C2C.c)
 */

__int64 __fastcall sub_1403DBBB0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, _DWORD *a6)
{
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( !(_DWORD)a1 )
    return sub_140646BC8(a1, a3, a4, a6);
  v6 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)v6 )
    return sub_140646C2C(v6, a3, a4, a6);
  v7 = (unsigned int)(v6 - 7);
  if ( !(_DWORD)v7 )
    return sub_1403DBC0C(v7, a3, a4, a6);
  if ( (_DWORD)v7 == 1 )
    return sub_140646840(a2, a3, a4, a6);
  *a6 = 0;
  return 3221225488LL;
}

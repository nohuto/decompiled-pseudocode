/*
 * XREFs of sub_140822DF0 @ 0x140822DF0
 * Callers:
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     sub_140252460 @ 0x140252460 (sub_140252460.c)
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 */

__int64 __fastcall sub_140822DF0(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // rdx
  int v4; // r8d
  __int64 v5; // r9
  _DWORD *v6; // r10

  *a3 = 0;
  if ( a1 < 4 )
  {
    LODWORD(v5) = -1073741789;
  }
  else
  {
    *a2 = 0;
    v4 = sub_14036FA84();
    if ( (unsigned int)(v4 - 2) <= 1 || v4 == 1 && ((*v3 = 1, qword_140C4C4A8 != v5) || sub_140252460()) )
      *v3 = 3;
    *v6 = 4;
  }
  return (unsigned int)v5;
}

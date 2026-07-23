/*
 * XREFs of sub_140842D98 @ 0x140842D98
 * Callers:
 *     sub_14075E2D8 @ 0x14075E2D8 (sub_14075E2D8.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B1B8 @ 0x14075B1B8 (sub_14075B1B8.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_14075E448 @ 0x14075E448 (sub_14075E448.c)
 *     sub_140842E88 @ 0x140842E88 (sub_140842E88.c)
 */

__int64 __fastcall sub_140842D98(_QWORD *a1, _WORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  int v10; // edi
  _DWORD *v11; // rdi

  if ( !a2 || !*a2 || !a1 || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v8 = sub_14075B444((__int64)a1, 0x58uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = sub_14075B1B8(v8, a2);
    if ( v10 < 0 )
    {
      sub_1406E0C3C(1LL, (__int64)"AslFileMappingCreateFromImageView");
      sub_14075E448((PVOID *)v9);
    }
    else
    {
      *((_DWORD *)v9 + 20) = 1;
      v9[6] = 0LL;
      v11 = v9 + 8;
      v9[7] = 0x1000000LL;
      v9[1] = 0LL;
      v9[2] = 0LL;
      v9[3] = a4;
      v9[4] = a3;
      v9[5] = a4;
      if ( a4 )
      {
        if ( (int)sub_140842E88(v9 + 1, v9 + 8) < 0 )
        {
          sub_1406E0C3C(1LL, (__int64)"AslFileMappingCreateFromImageView");
          *v11 = 3;
        }
      }
      else
      {
        *v11 = 1;
      }
      *a1 = v9;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}

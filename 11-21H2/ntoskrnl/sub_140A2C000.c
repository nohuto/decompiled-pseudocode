/*
 * XREFs of sub_140A2C000 @ 0x140A2C000
 * Callers:
 *     sub_140787620 @ 0x140787620 (sub_140787620.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A2C000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5, int a6, _DWORD *a7)
{
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v7 = -1073741802;
  *a7 = 0;
  if ( &qword_140010B80 && *(_DWORD *)(a4 + 16) == *((_DWORD *)&qword_140010B80 + 4) )
  {
    v8 = *(_QWORD *)a4 - 0x44B70B3F14C83A99LL;
    if ( *(_QWORD *)a4 == 0x44B70B3F14C83A99LL )
      v8 = *(_QWORD *)(a4 + 8) - *(&qword_140010B80 + 1);
    if ( !v8 )
      goto LABEL_10;
  }
  if ( *(_DWORD *)(a4 + 16) == *((_DWORD *)&qword_14000DF78 + 4) )
  {
    v9 = *(_QWORD *)a4 - 0x101A47EFB725F130LL;
    if ( *(_QWORD *)a4 == 0x101A47EFB725F130LL )
      v9 = *(_QWORD *)(a4 + 8) - *(&qword_14000DF78 + 1);
    if ( !v9 )
    {
LABEL_10:
      *a7 = 1;
      if ( a6 )
      {
        v7 = 0;
        *a5 = 0;
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
  }
  return v7;
}

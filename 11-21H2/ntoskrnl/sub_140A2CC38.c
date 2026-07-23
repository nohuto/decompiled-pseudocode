/*
 * XREFs of sub_140A2CC38 @ 0x140A2CC38
 * Callers:
 *     sub_140787620 @ 0x140787620 (sub_140787620.c)
 *     sub_140A25124 @ 0x140A25124 (sub_140A25124.c)
 * Callees:
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 *     sub_140A2A640 @ 0x140A2A640 (sub_140A2A640.c)
 *     sub_140A2CD54 @ 0x140A2CD54 (sub_140A2CD54.c)
 */

__int64 __fastcall sub_140A2CC38(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        ULONG a8)
{
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx

  v11 = -1073741802;
  if ( !a4 )
  {
    if ( &qword_140010B80 && *(_DWORD *)(a5 + 16) == *((_DWORD *)&qword_140010B80 + 4) )
    {
      v12 = *(_QWORD *)a5 - 0x44B70B3F14C83A99LL;
      if ( *(_QWORD *)a5 == 0x44B70B3F14C83A99LL )
        v12 = *(_QWORD *)(a5 + 8) - *(&qword_140010B80 + 1);
      if ( !v12 )
      {
        if ( a6 < 2 )
          v13 = sub_140A2A640(a1, a2, a3, a5);
        else
          v13 = sub_140A2CD54(a1, a2, (int)a3, a5, a6, a7, a8);
        v11 = v13;
        if ( v13 >= 0 )
        {
          sub_1407720B8(a1, a2, 4, (__int64)a3, 0LL, a5);
          return v11;
        }
        if ( v13 != -1073741802 )
          return v11;
      }
    }
    if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)&qword_14000DF78 + 4) )
    {
      v14 = *(_QWORD *)a5 - 0x101A47EFB725F130LL;
      if ( *(_QWORD *)a5 == 0x101A47EFB725F130LL )
        v14 = *(_QWORD *)(a5 + 8) - *(&qword_14000DF78 + 1);
      if ( !v14 )
        return (unsigned int)-1073741790;
    }
  }
  return v11;
}

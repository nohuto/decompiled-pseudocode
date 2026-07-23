/*
 * XREFs of sub_140787730 @ 0x140787730
 * Callers:
 *     sub_140787620 @ 0x140787620 (sub_140787620.c)
 * Callees:
 *     sub_140787818 @ 0x140787818 (sub_140787818.c)
 *     sub_140A2BD78 @ 0x140A2BD78 (sub_140A2BD78.c)
 */

__int64 __fastcall sub_140787730(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  unsigned int v12; // r10d
  __int64 v13; // rcx
  __int64 v15; // rdx

  v12 = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    if ( !&qword_140010B80 || *(_DWORD *)(a5 + 16) != *((_DWORD *)&qword_140010B80 + 4) )
      goto LABEL_9;
    v13 = *(_QWORD *)a5 - 0x44B70B3F14C83A99LL;
    if ( *(_QWORD *)a5 == 0x44B70B3F14C83A99LL )
      v13 = *(_QWORD *)(a5 + 8) - *(&qword_140010B80 + 1);
    if ( v13 || (v12 = sub_140787818(a1, a2, a3, a5, a6, a7, a8, (__int64)a9), v12 == -1073741802) )
    {
LABEL_9:
      if ( *(_DWORD *)(a5 + 16) == *((_DWORD *)&qword_14000DF78 + 4) )
      {
        v15 = *(_QWORD *)a5 - 0x101A47EFB725F130LL;
        if ( *(_QWORD *)a5 == 0x101A47EFB725F130LL )
          v15 = *(_QWORD *)(a5 + 8) - *(&qword_14000DF78 + 1);
        if ( !v15 )
          return (unsigned int)sub_140A2BD78(a1, a2, a3, a5, a6, a7, a8, (__int64)a9);
      }
    }
  }
  return v12;
}

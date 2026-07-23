/*
 * XREFs of sub_140756F2C @ 0x140756F2C
 * Callers:
 *     sub_140756C90 @ 0x140756C90 (sub_140756C90.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1406FC9C4 @ 0x1406FC9C4 (sub_1406FC9C4.c)
 */

__int64 __fastcall sub_140756F2C(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // r8
  __int64 v7; // r11
  unsigned int v8; // r10d
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax

  v5 = sub_140287970(a2[4]);
  v8 = 0;
  v9 = v5;
  if ( v6[2] )
    return (unsigned int)-1073741811;
  if ( (*(_DWORD *)(v7 + 40) & 0x4000) != 0 )
  {
    if ( *v6 || v6[1] )
      return (unsigned int)-1073741811;
    *(_DWORD *)(v7 + 64) |= 0x4000000u;
    *(_DWORD *)(v7 + 60) |= 2u;
    *(_QWORD *)(v7 + 16) = 4096LL;
  }
  v10 = *v6;
  if ( ((*(_QWORD *)(v7 + 16) - 1LL) & *v6) != 0 || *a2 && (v10 || v6[1] || v6[2]) )
    return (unsigned int)-1073741811;
  v11 = v6[1];
  if ( v11 )
  {
    if ( v11 <= 0x7FFFFFFEFFFFLL && (((_WORD)v11 + 1) & 0xFFF) == 0 )
      goto LABEL_7;
    return (unsigned int)-1073741811;
  }
  v11 = sub_1406FC9C4(a2[5], 0LL);
  *(_QWORD *)(a3 + 8) = v11;
LABEL_7:
  if ( v10 >= v11 )
    return (unsigned int)-1073741811;
  v12 = a2[1];
  if ( v12 )
  {
    if ( v11 - v10 + 1 < v12 )
      return (unsigned int)-1073741811;
  }
  v13 = *(_DWORD *)(v7 + 40);
  if ( (v13 & 0x7F) != 0
    || *(_DWORD *)(v7 + 52) != v8
    || *(_DWORD *)(a3 + 32) > (unsigned int)(unsigned __int16)word_140D05000
    || (v13 & 0x40000000) != 0 && (*(_DWORD *)(v9 + 56) & 0x420) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v13 & 0x20000000) != 0 && (*(_DWORD *)(v9 + 56) & 0x20) != 0 && (*(_DWORD *)(v7 + 60) & 1) != 0 )
    return (unsigned int)-1073741811;
  v14 = *(_QWORD *)(a3 + 56);
  if ( (v14 & 0x20) != 0 )
  {
    *(_DWORD *)(v7 + 64) |= 2u;
    v14 = *(_QWORD *)(a3 + 56);
  }
  if ( (v14 & 0x40) != 0 )
    *(_DWORD *)(v7 + 120) |= 8u;
  *(_DWORD *)(v7 + 52) = *(_DWORD *)(a3 + 32);
  *(_QWORD *)v7 = *(_QWORD *)a3;
  *(_QWORD *)(v7 + 8) = *(_QWORD *)(a3 + 8);
  *(_WORD *)(v7 + 58) = *(_WORD *)(a3 + 50);
  *(_DWORD *)(v7 + 40) = v13 & 0xFFFFBFFF;
  return v8;
}

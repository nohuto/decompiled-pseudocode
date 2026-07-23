/*
 * XREFs of sub_1406FC8B0 @ 0x1406FC8B0
 * Callers:
 *     NtMapViewOfSection @ 0x1406FB000 (NtMapViewOfSection.c)
 *     sub_140756C90 @ 0x140756C90 (sub_140756C90.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 *     sub_1407A6574 @ 0x1407A6574 (sub_1407A6574.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406FC9C4 @ 0x1406FC9C4 (sub_1406FC9C4.c)
 */

__int64 __fastcall sub_1406FC8B0(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7, __int64 a8)
{
  unsigned __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v15; // r10d

  v11 = sub_140287970(a2);
  memset(a1, 0, 0x80uLL);
  *((_QWORD *)a1 + 12) = *((_QWORD *)KeGetCurrentThread() + 23);
  *((_QWORD *)a1 + 11) = a3;
  v12 = (unsigned __int16)word_140D05000;
  v13 = a6 & 0x7F;
  *((_BYTE *)a1 + 57) = *((_BYTE *)KeGetCurrentThread() + 562);
  *((_DWORD *)a1 + 13) = v13;
  if ( v13 > v12 )
    return 3221225485LL;
  *((_DWORD *)a1 + 10) = a6 & 0xFFFFFF80;
  *((_DWORD *)a1 + 11) = a7;
  if ( a4 )
    *((_DWORD *)a1 + 15) |= 1u;
  *((_QWORD *)a1 + 3) = a5;
  if ( (*(_DWORD *)(v11 + 56) & 0x20) == 0 && (*((_DWORD *)a1 + 15) & 1) != 0 )
    a8 = 0LL;
  *((_QWORD *)a1 + 1) = sub_1406FC9C4(a3, a8);
  *((_QWORD *)a1 + 2) = 0x10000LL;
  if ( (*(_DWORD *)(v11 + 56) & 0x420) == 0 )
  {
    if ( (v15 & 0x20000000) != 0 )
    {
      *((_QWORD *)a1 + 2) = 0x200000LL;
    }
    else if ( (v15 & 0x40000000) != 0 )
    {
      *((_QWORD *)a1 + 2) = 4096LL;
    }
  }
  return 0LL;
}

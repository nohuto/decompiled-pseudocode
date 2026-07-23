/*
 * XREFs of RtlFindExportedRoutineByName @ 0x140757F00
 * Callers:
 *     sub_14051F13C @ 0x14051F13C (sub_14051F13C.c)
 *     sub_1406CCD8C @ 0x1406CCD8C (sub_1406CCD8C.c)
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 *     sub_1407623F0 @ 0x1407623F0 (sub_1407623F0.c)
 *     sub_14082ED84 @ 0x14082ED84 (sub_14082ED84.c)
 *     sub_140964124 @ 0x140964124 (sub_140964124.c)
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140B24D94 @ 0x140B24D94 (sub_140B24D94.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 */

PVOID __cdecl RtlFindExportedRoutineByName(PVOID BaseOfImage, PCSTR RoutineName)
{
  char *v4; // rax
  char *v5; // r9
  char *v6; // r8
  int v7; // r10d
  char *v8; // rbp
  char *v9; // rdi
  int v10; // eax
  PCSTR v11; // rcx
  int v12; // edx
  signed __int64 v13; // rsi
  CHAR v14; // r11
  int v15; // ecx
  ULONG v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0;
  v4 = (char *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, &v17);
  v5 = v4;
  v6 = 0LL;
  if ( !v4 )
    return v6;
  v7 = 0;
  v8 = (char *)BaseOfImage + *((unsigned int *)v4 + 8);
  v9 = (char *)BaseOfImage + *((unsigned int *)v4 + 9);
  v10 = *((_DWORD *)v4 + 6) - 1;
  if ( v10 < 0 )
    return v6;
  while ( 1 )
  {
    v11 = RoutineName;
    v12 = (v7 + v10) >> 1;
    v13 = (_BYTE *)BaseOfImage + *(unsigned int *)&v8[4 * v12] - RoutineName;
    while ( 1 )
    {
      v14 = *v11;
      if ( *v11 != v11[v13] )
        break;
      ++v11;
      if ( !v14 )
      {
        v15 = 0;
        goto LABEL_7;
      }
    }
    v15 = *v11 < (unsigned int)v11[v13] ? -1 : 1;
LABEL_7:
    if ( v15 >= 0 )
      break;
    if ( !v12 )
      return v6;
    v10 = v12 - 1;
LABEL_10:
    if ( v10 < v7 )
      return v6;
  }
  if ( v15 > 0 )
  {
    v7 = v12 + 1;
    goto LABEL_10;
  }
  if ( v10 >= v7 && (unsigned int)*(unsigned __int16 *)&v9[2 * v12] < *((_DWORD *)v5 + 5) )
  {
    v6 = (char *)BaseOfImage
       + *(unsigned int *)((char *)BaseOfImage + 4 * *(unsigned __int16 *)&v9[2 * v12] + *((unsigned int *)v5 + 7));
    if ( v6 > v5 && v6 < &v5[v17] )
      return 0LL;
  }
  return v6;
}

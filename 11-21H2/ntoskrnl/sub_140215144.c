/*
 * XREFs of sub_140215144 @ 0x140215144
 * Callers:
 *     sub_140213908 @ 0x140213908 (sub_140213908.c)
 *     sub_140214F98 @ 0x140214F98 (sub_140214F98.c)
 *     sub_1403B8198 @ 0x1403B8198 (sub_1403B8198.c)
 *     sub_1403BED70 @ 0x1403BED70 (sub_1403BED70.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     strncmp @ 0x1403E0910 (strncmp.c)
 */

__int64 __fastcall sub_140215144(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char *Str1,
        char *a6,
        char a7,
        _DWORD *a8)
{
  __int64 v8; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v17; // rax
  int v18; // ecx
  char v19; // dl
  char *v20; // r8
  char v21; // al
  char v22; // al

  v8 = 0LL;
  if ( a2 )
  {
    v13 = a1
        ? sub_1403BF3B8(a2, ((unsigned __int64)(a2 & 0xFFF) + 4131) >> 12, 1, 0, 4)
        : MmMapIoSpaceEx(a2, 36LL, 516LL);
    v14 = v13;
    if ( v13 )
    {
      if ( *(_DWORD *)(v13 + 4) < a3
        || a4 && *(_DWORD *)v13 != a4
        || Str1 && strncmp(Str1, (const char *)(v13 + 10), 6uLL)
        || a6 && strncmp(a6, (const char *)(v14 + 16), 8uLL) )
      {
        LODWORD(v15) = 36;
        if ( !v14 )
          return v8;
        goto LABEL_9;
      }
      v15 = *(unsigned int *)(v14 + 4);
      if ( a1 )
      {
        sub_1403BF310(v14, ((unsigned __int64)(v14 & 0xFFF) + 4131) >> 12, 0LL);
        v17 = sub_1403BF3B8(a2, (v15 + (unsigned __int64)(a2 & 0xFFF) + 4095) >> 12, 1, 0, 4);
      }
      else
      {
        MmUnmapVideoDisplay((PVOID)v14, 0x24uLL);
        v17 = MmMapIoSpaceEx(a2, (unsigned int)v15, 516LL);
      }
      v14 = v17;
      if ( v17 )
      {
        if ( !a7 )
          goto LABEL_25;
        v18 = *(_DWORD *)(v17 + 4);
        v19 = 0;
        if ( !v18 )
          goto LABEL_25;
        v20 = (char *)v17;
        do
        {
          v21 = *v20++;
          v22 = v19 + v21;
          v19 = v22;
          --v18;
        }
        while ( v18 );
        if ( !v22 )
        {
LABEL_25:
          v8 = v14;
          *a8 = v15;
          return v8;
        }
LABEL_9:
        if ( a1 )
          sub_1403BF310(v14, ((v14 & 0xFFF) + 4095 + (unsigned __int64)(unsigned int)v15) >> 12, 0LL);
        else
          MmUnmapVideoDisplay((PVOID)v14, (unsigned int)v15);
        return 0LL;
      }
    }
  }
  return v8;
}

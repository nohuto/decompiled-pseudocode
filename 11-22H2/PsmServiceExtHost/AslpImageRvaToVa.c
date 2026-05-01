/*
 * XREFs of AslpImageRvaToVa @ 0x18009D680
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x18009A05C (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x18009B06C (AslpFileGetClrVersion.c)
 *     AslpFileQueryExportName @ 0x18009CDC8 (AslpFileQueryExportName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslpImageRvaToVa(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v7; // r11d
  _DWORD *v8; // rdx
  int v9; // r10d
  unsigned int v10; // ecx

  if ( *(_BYTE *)(a2 + 43) )
  {
    v4 = a3;
    if ( (unsigned __int64)a3 < *(_QWORD *)(a2 + 32) )
    {
      v5 = *(_QWORD *)(a2 + 24);
      return v4 + v5;
    }
  }
  else
  {
    v7 = *(unsigned __int16 *)(a1 + 6);
    v8 = (_DWORD *)(*(unsigned __int16 *)(a1 + 20) + a1 + 24);
    v9 = 0;
    if ( *(_WORD *)(a1 + 6) )
    {
      while ( 1 )
      {
        v10 = v8[3];
        if ( a3 >= v10 && a3 < v8[4] + v10 )
          break;
        v8 += 10;
        if ( ++v9 >= v7 )
          return 0LL;
      }
      if ( v8 )
      {
        v4 = a3 + v8[5] - v8[3];
        if ( v4 < *(_QWORD *)(a2 + 16) )
        {
          v5 = *(_QWORD *)(a2 + 24);
          return v4 + v5;
        }
      }
    }
  }
  return 0LL;
}

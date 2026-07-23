/*
 * XREFs of RtlpCaptureRetpolineBinaryInfoForImage @ 0x140376048
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x140375DC4 (RtlUpdateImportRelocationsInImage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14067AB7C (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407D4898 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlpCaptureRetpolineBinaryInfoForImage(
        PVOID BaseOfImage,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6)
{
  __int64 v7; // r15
  _DWORD *Config; // rax
  unsigned int v11; // ebx
  PVOID v12; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  ULONG Size[10]; // [rsp+20h] [rbp-28h] BYREF

  v7 = a3;
  *(_OWORD *)a6 = 0LL;
  *(_OWORD *)(a6 + 16) = 0LL;
  *(_OWORD *)(a6 + 32) = 0LL;
  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
  v11 = 0;
  if ( Config && *Config >= 0xC8u )
  {
    if ( *((_QWORD *)Config + 15) )
      *(_DWORD *)(a6 + 4) = Config[30] - a2;
    v12 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xCu, Size);
    if ( v12 )
      *(_DWORD *)(a6 + 8) = (_DWORD)v12 - (_DWORD)BaseOfImage;
    if ( a4 )
    {
      v14 = a4 - a2;
      v15 = 16LL;
      v16 = a5[18];
      if ( v16 <= a5[17] )
        v16 = a5[17];
      v17 = a5[19];
      if ( v17 <= v16 )
        v17 = v16;
      v18 = a5[20];
      if ( v18 <= v17 )
        v18 = v17;
      v19 = a5 + 1;
      do
      {
        v20 = *v19++;
        if ( v20 <= v18 )
          v20 = v18;
        v18 = v20;
        --v15;
      }
      while ( v15 );
      v21 = v14 + v20;
      if ( v21 < v14 || v21 > 0x7FFFFFFF || v14 - v7 < (__int64)0xFFFFFFFF80000000uLL )
        return (unsigned int)-1073741776;
      else
        *(_DWORD *)a6 = v14;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v11;
}

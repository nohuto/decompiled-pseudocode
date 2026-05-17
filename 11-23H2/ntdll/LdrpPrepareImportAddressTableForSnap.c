/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x18002B270
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180024A58 (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800E6B30 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002B858 (LdrImageDirectoryEntryToLoadConfig.c)
 *     ZwProtectVirtualMemory @ 0x1800A18B0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpPrepareImportAddressTableForSnap(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rdi
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  __int64 Config; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 result; // rax
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned int v14; // r10d
  unsigned int *v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // [rsp+60h] [rbp+30h] BYREF
  __int64 v20; // [rsp+68h] [rbp+38h] BYREF
  _QWORD *v21; // [rsp+70h] [rbp+40h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (__int64 *)(a1 + 120);
  v4 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v1 + 48), 1, 0xCu, (_DWORD *)(a1 + 120), &v20);
  v5 = v20;
  if ( v4 < 0 )
    v5 = 0LL;
  v6 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v20 = v5;
  *(_QWORD *)(a1 + 112) = v5;
  if ( !v6 )
    return 0LL;
  RtlImageNtHeaderEx(3, *(_QWORD *)(v1 + 48), 0LL, &v19);
  Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(v1 + 48));
  if ( !Config || *(_DWORD *)Config < 0x94u )
    goto LABEL_10;
  v8 = v19;
  if ( (*(_WORD *)(v19 + 94) & 0x4000) != 0 && (*(_DWORD *)(Config + 144) & 0x100) != 0 )
  {
    v9 = *(_QWORD **)(Config + 112);
    *(_QWORD *)(a1 + 160) = v9;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 152) = *v9;
LABEL_10:
      v8 = v19;
    }
  }
  if ( !*(_QWORD *)(a1 + 112) )
  {
    v14 = *(_DWORD *)(v8 + 144);
    v15 = (unsigned int *)(*(unsigned __int16 *)(v8 + 20) + v8 + 24);
    if ( v14 )
    {
      v16 = 0;
      if ( *(_WORD *)(v8 + 6) )
      {
        while ( 1 )
        {
          v17 = v15[3];
          if ( v14 >= v17 && v14 < v17 + v15[4] )
            break;
          ++v16;
          v15 += 10;
          if ( v16 >= *(unsigned __int16 *)(v8 + 6) )
            goto LABEL_12;
        }
        *(_QWORD *)(a1 + 112) = *(_QWORD *)(v1 + 48) + v17;
        v18 = v15[2];
        *v2 = v18;
        if ( !v18 )
          *v2 = v15[4];
      }
    }
  }
LABEL_12:
  v10 = *(_QWORD **)(a1 + 112);
  if ( v10 && *v2 )
  {
    v22 = *v2;
    v21 = v10;
    result = ZwProtectVirtualMemory(-1LL, &v21, &v22, 4LL, a1 + 144);
    if ( (int)result < 0 )
      return result;
    v12 = v21;
    v13 = (unsigned __int64)v21 + v22;
    do
    {
      *v12 = *v12;
      v12 += 512;
    }
    while ( (unsigned __int64)v12 < v13 );
  }
  return 0LL;
}

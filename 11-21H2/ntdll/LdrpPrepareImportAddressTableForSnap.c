/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x180034354
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800E6998 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180034A60 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x1800A4A70 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpPrepareImportAddressTableForSnap(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rdi
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  __int64 Config; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 result; // rax
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned int v14; // r10d
  unsigned int *v15; // r8
  unsigned int v16; // r11d
  unsigned int v17; // r9d
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // [rsp+60h] [rbp+30h] BYREF
  __int64 v21; // [rsp+68h] [rbp+38h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp+40h] BYREF
  __int64 v23; // [rsp+78h] [rbp+48h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (__int64 *)(a1 + 120);
  v4 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v1 + 48), 1, 12, (int)a1 + 120, (__int64)&v21);
  v5 = v21;
  if ( v4 < 0 )
    v5 = 0LL;
  v6 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v21 = v5;
  *(_QWORD *)(a1 + 112) = v5;
  if ( !v6 )
    return 0LL;
  RtlImageNtHeaderEx(3LL, *(_QWORD *)(v1 + 48), 0LL, &v20);
  Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(v1 + 48));
  if ( !Config || *(_DWORD *)Config < 0x94u )
    goto LABEL_10;
  v8 = v20;
  if ( (*(_WORD *)(v20 + 94) & 0x4000) != 0 && (*(_DWORD *)(Config + 144) & 0x100) != 0 )
  {
    v9 = *(_QWORD **)(Config + 112);
    *(_QWORD *)(a1 + 160) = v9;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 152) = *v9;
LABEL_10:
      v8 = v20;
    }
  }
  v10 = *(_QWORD **)(a1 + 112);
  if ( v10 )
    goto LABEL_30;
  v14 = *(_DWORD *)(v8 + 144);
  v15 = (unsigned int *)(*(unsigned __int16 *)(v8 + 20) + v8 + 24);
  if ( v14 )
  {
    v16 = *(unsigned __int16 *)(v8 + 6);
    v17 = 0;
    if ( *(_WORD *)(v8 + 6) )
    {
      while ( 1 )
      {
        v18 = v15[3];
        if ( v14 >= v18 && v14 < v18 + v15[4] )
          break;
        ++v17;
        v15 += 10;
        if ( v17 >= v16 )
          return 0LL;
      }
      v10 = (_QWORD *)(*(_QWORD *)(v1 + 48) + v18);
      *(_QWORD *)(a1 + 112) = v10;
      v19 = v15[2];
      *v2 = v19;
      if ( !v19 )
        *v2 = v15[4];
      if ( v10 )
      {
LABEL_30:
        if ( *v2 )
        {
          v23 = *v2;
          v22 = v10;
          result = ZwProtectVirtualMemory(-1LL, &v22, &v23, 4LL, a1 + 144);
          if ( (int)result < 0 )
            return result;
          v12 = v22;
          v13 = (unsigned __int64)v22 + v23;
          do
          {
            *v12 = *v12;
            v12 += 512;
          }
          while ( (unsigned __int64)v12 < v13 );
        }
      }
    }
  }
  return 0LL;
}

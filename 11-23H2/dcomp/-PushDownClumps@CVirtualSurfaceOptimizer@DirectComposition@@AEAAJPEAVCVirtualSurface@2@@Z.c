/*
 * XREFs of ?PushDownClumps@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@@Z @ 0x180037F58
 * Callers:
 *     ?OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_NPEA_N@Z @ 0x180036D24 (-OptimizeVirtualSurface@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@_.c)
 * Callees:
 *     ?PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileClump@2@@Z @ 0x1800050F8 (-PushDownClump@CVirtualSurfaceOptimizer@DirectComposition@@AEAAJPEAVCVirtualSurface@2@PEAVCTileC.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?RemoveEmptyClumps@CVirtualSurface@DirectComposition@@QEAAXXZ @ 0x1800382BC (-RemoveEmptyClumps@CVirtualSurface@DirectComposition@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurfaceOptimizer::PushDownClumps(
        DirectComposition::CVirtualSurfaceOptimizer *this,
        struct DirectComposition::CVirtualSurface *a2)
{
  char *v2; // rdi
  struct DirectComposition::CVirtualSurface *v3; // rax
  _BYTE *v4; // r10
  unsigned int v6; // r9d
  char *v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  char *v11; // rdx
  char *v12; // r11
  char *v13; // rax
  unsigned int i; // edi
  unsigned int v16; // edx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // edx
  int v20; // ecx
  int v21; // eax
  _QWORD v22[2]; // [rsp+28h] [rbp-59h] BYREF
  int v23; // [rsp+38h] [rbp-49h]
  __int64 v24; // [rsp+3Ch] [rbp-45h]
  _BYTE Base[128]; // [rsp+48h] [rbp-39h] BYREF
  char *v26; // [rsp+F0h] [rbp+6Fh] BYREF

  v2 = (char *)a2 + 256;
  v22[1] = Base;
  v3 = (struct DirectComposition::CVirtualSurface *)*((_QWORD *)a2 + 32);
  v4 = Base;
  v22[0] = Base;
  v6 = 16;
  v23 = 16;
  v8 = (char *)v3 - 16;
  v24 = 16LL;
  if ( v3 == (struct DirectComposition::CVirtualSurface *)((char *)a2 + 256) )
    v8 = 0LL;
  v9 = 0;
  v26 = v8;
  v10 = 0LL;
  if ( !v8 )
  {
LABEL_10:
    qsort(v4, (unsigned int)v10, 8uLL, (_CoreCrtNonSecureSearchSortCompareFunction)DirectComposition::CompareClumpArea);
    LODWORD(v10) = HIDWORD(v24);
    v4 = (_BYTE *)v22[0];
    goto LABEL_11;
  }
  v11 = v8;
  v12 = v8;
  do
  {
    if ( (unsigned int)(*(_DWORD *)this - *((_DWORD *)v11 + 42)) >= 2
      && !*(_QWORD *)(*((_QWORD *)v12 + 9) + 120LL)
      && v9 >= 0 )
    {
      v16 = v10 + 1;
      if ( (int)v10 + 1 < (unsigned int)v10 )
      {
        v9 = -2147024362;
        v19 = 181;
        v20 = -2147024362;
      }
      else
      {
        v9 = 0;
        if ( v16 <= v6 )
        {
          v17 = (unsigned int)v10;
          v10 = v16;
          *(_QWORD *)&v4[8 * v17] = v8;
          HIDWORD(v24) = v16;
LABEL_20:
          v6 = v24;
          v4 = (_BYTE *)v22[0];
          v8 = v26;
          goto LABEL_6;
        }
        v21 = DynArrayImpl<0>::AddMultipleAndSet(v22, 8LL, v10, &v26);
        v9 = v21;
        if ( v21 >= 0 )
        {
LABEL_29:
          v10 = HIDWORD(v24);
          goto LABEL_20;
        }
        v19 = 192;
        v20 = v21;
      }
      DoStackCaptureDirect(v20, v19);
      goto LABEL_29;
    }
LABEL_6:
    v13 = (char *)*((_QWORD *)v8 + 2);
    v8 = v13 - 16;
    if ( v13 == v2 )
      v8 = 0LL;
    v26 = v8;
    v11 = v8;
    v12 = v8;
  }
  while ( v8 );
  if ( v9 >= 0 )
    goto LABEL_10;
LABEL_11:
  for ( i = 0; i < (unsigned int)v10; ++i )
  {
    if ( v9 >= 0 )
    {
      v18 = DirectComposition::CVirtualSurfaceOptimizer::PushDownClump(
              this,
              a2,
              *(struct DirectComposition::CTileClump **)&v4[8 * i]);
      LODWORD(v10) = HIDWORD(v24);
      v9 = v18;
      v4 = (_BYTE *)v22[0];
    }
  }
  if ( v9 >= 0 )
    DirectComposition::CVirtualSurface::RemoveEmptyClumps(a2);
  DynArrayImpl<0>::~DynArrayImpl<0>(v22);
  return (unsigned int)v9;
}

/*
 * XREFs of ?ComputeLargeSurfaceAllocationSizes@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@_NPEAVSizeU@2@PEAUDCOMPOSITION_GUTTERS@@PEA_N@Z @ 0x18001E784
 * Callers:
 *     ?RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceRequestStruct@2@_N@Z @ 0x18001E950 (-RequestLargeSurface@CSurfaceManager@DirectComposition@@QEAAJPEAPEAVCAtlasSurface@2@AEBUSurfaceR.c)
 *     ?CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z @ 0x1800214A8 (-CollectLargeSurfaces@CSurfaceManager@DirectComposition@@IEAAX_N0PEAUSurfaceRequestStruct@2@0@Z.c)
 * Callees:
 *     ?AlignSurfaceSize@CSurfaceManager@DirectComposition@@SA?AVSizeU@2@AEBV32@@Z @ 0x18001E87C (-AlignSurfaceSize@CSurfaceManager@DirectComposition@@SA-AVSizeU@2@AEBV32@@Z.c)
 */

void __fastcall DirectComposition::CSurfaceManager::ComputeLargeSurfaceAllocationSizes(
        DirectComposition::CSurfaceManager *this,
        const struct DirectComposition::SurfaceRequestStruct *a2,
        char a3,
        struct DirectComposition::SizeU *a4,
        struct DCOMPOSITION_GUTTERS *a5,
        bool *a6)
{
  bool *v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // edx
  bool *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax

  *(_QWORD *)a4 = *(_QWORD *)((char *)a2 + 4);
  v8 = a6;
  *(_DWORD *)a5 = 0;
  *v8 = 1;
  if ( *((_BYTE *)a2 + 13) )
  {
    v9 = *(_DWORD *)a4;
    v10 = *((_DWORD *)a4 + 1);
    *v8 = *(_DWORD *)a4 > v10;
    if ( v9 <= v10 )
    {
      *(_DWORD *)a5 = 4;
      *((_DWORD *)a4 + 1) = v10 + 2;
    }
    else
    {
      *(_DWORD *)a5 = 1;
      *(_DWORD *)a4 = v9 + 2;
    }
  }
  if ( a3 && *((_DWORD *)this + 24) && *((_DWORD *)this + 25) )
  {
    v11 = *(bool **)DirectComposition::CSurfaceManager::AlignSurfaceSize(&a6, a4);
    v12 = *((_QWORD *)this + 16);
    a6 = v11;
    v13 = *(_DWORD *)(v12 + 132);
    if ( *(_BYTE *)(v12 + 249) )
      v13 = 0x800000;
    v14 = (unsigned int)a6;
    if ( (unsigned int)a6 > v13 )
    {
      v14 = *(_DWORD *)a4;
      LODWORD(a6) = *(_DWORD *)a4;
    }
    v15 = HIDWORD(a6);
    if ( HIDWORD(a6) > v13 )
    {
      v15 = *((_DWORD *)a4 + 1);
      HIDWORD(a6) = v15;
    }
    if ( *(_DWORD *)a4 < v14 )
      *(_DWORD *)a5 |= 2u;
    if ( *((_DWORD *)a4 + 1) < v15 )
      *(_DWORD *)a5 |= 8u;
    *(_QWORD *)a4 = a6;
  }
}

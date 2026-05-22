/*
 * XREFs of ?AlignSurfaceSize@CSurfaceManager@DirectComposition@@SA?AVSizeU@2@AEBV32@@Z @ 0x18001E87C
 * Callers:
 *     ?ComputeLargeSurfaceAllocationSizes@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestStruct@2@_NPEAVSizeU@2@PEAUDCOMPOSITION_GUTTERS@@PEA_N@Z @ 0x18001E784 (-ComputeLargeSurfaceAllocationSizes@CSurfaceManager@DirectComposition@@AEAAXAEBUSurfaceRequestSt.c)
 *     ?GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEAPEAVCScratchSurface@2@@Z @ 0x1800FAFB4 (-GetScratchSurface@CScratchSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@AEBVSizeU@2@PEA.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall DirectComposition::CSurfaceManager::AlignSurfaceSize(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r10
  int v3; // r9d
  int v4; // r8d
  int v5; // edx
  unsigned int v6; // eax
  int v7; // eax
  float v8; // xmm1_4
  __int64 v9; // rax

  v2 = *a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = v3 * *a2;
  v5 = *a2;
  *a1 = v2;
  if ( (_DWORD)v2 != 1 )
  {
    v5 = (v2 + 31) & 0xFFFFFFE0;
    *(_DWORD *)a1 = v5;
  }
  v6 = *((_DWORD *)a1 + 1);
  if ( v6 != 1 )
  {
    v6 = (v3 + 31) & 0xFFFFFFE0;
    *((_DWORD *)a1 + 1) = v6;
  }
  v7 = v5 * v6;
  if ( (unsigned int)v7 > 0x1000 )
  {
    v8 = (float)v7;
    v9 = *a1;
    if ( v8 > (float)((float)v4 * 1.25) )
      v9 = v2;
    *a1 = v9;
  }
  return a1;
}

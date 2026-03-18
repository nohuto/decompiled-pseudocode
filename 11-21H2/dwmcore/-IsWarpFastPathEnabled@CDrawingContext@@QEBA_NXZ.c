/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800ED90C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180056C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 */

char __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  char v1; // bl
  CMILMatrix *TopByReference; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v1 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 568LL) )
  {
    if ( !CCommonRegistryData::UseHWDrawListEntriesOnWARP )
    {
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 368));
      if ( CMILMatrix::Is2DAxisAlignedPreserving(TopByReference, v5, v6, v7) )
      {
        if ( (*((_DWORD *)this + 156) || !*((_DWORD *)this + 138)) && !*((_QWORD *)this + 419) )
          return 1;
      }
    }
  }
  return v1;
}

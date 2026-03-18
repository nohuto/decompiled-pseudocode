/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800C34E0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000F370 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800C27D0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x18008F954 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800D0874 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 */

char __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  char v1; // bl
  CMILMatrix *TopByReference; // rax

  v1 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 568LL) )
  {
    if ( !CCommonRegistryData::UseHWDrawListEntriesOnWARP )
    {
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
      if ( CMILMatrix::Is2DAxisAlignedPreserving(TopByReference) )
      {
        if ( (*((_DWORD *)this + 164) || !*((_DWORD *)this + 146)) && !*((_QWORD *)this + 428) )
          return 1;
      }
    }
  }
  return v1;
}

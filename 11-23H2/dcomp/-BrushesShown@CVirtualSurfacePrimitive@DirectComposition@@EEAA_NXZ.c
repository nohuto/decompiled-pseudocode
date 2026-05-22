/*
 * XREFs of ?BrushesShown@CVirtualSurfacePrimitive@DirectComposition@@EEAA_NXZ @ 0x1800857E0
 * Callers:
 *     ?Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180085760 (-Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOcclu.c)
 * Callees:
 *     ?BrushesShown@CPrimitive@DirectComposition@@MEAA_NXZ @ 0x180085820 (-BrushesShown@CPrimitive@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CVirtualSurfacePrimitive::BrushesShown(
        DirectComposition::CVirtualSurfacePrimitive *this)
{
  bool v2; // al
  char v3; // dl
  __int64 v4; // rax

  v2 = DirectComposition::CPrimitive::BrushesShown(this);
  v3 = 0;
  if ( v2 )
  {
    v4 = *((_QWORD *)this + 32);
    if ( (*(_BYTE *)(v4 + 132) & 4) == 0 )
      return *(_DWORD *)(v4 + 248) != 0;
  }
  return v3;
}

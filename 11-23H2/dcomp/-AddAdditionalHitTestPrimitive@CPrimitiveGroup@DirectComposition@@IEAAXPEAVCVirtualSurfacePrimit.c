/*
 * XREFs of ?AddAdditionalHitTestPrimitive@CPrimitiveGroup@DirectComposition@@IEAAXPEAVCVirtualSurfacePrimitive@2@@Z @ 0x180089598
 * Callers:
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 *     ?Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180085760 (-Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOcclu.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CPrimitiveGroup::AddAdditionalHitTestPrimitive(
        DirectComposition::CPrimitiveGroup *this,
        struct DirectComposition::CVirtualSurfacePrimitive *a2)
{
  DirectComposition::CPrimitiveGroup **v2; // r9
  DirectComposition::CPrimitiveGroup *v3; // rax

  v2 = (DirectComposition::CPrimitiveGroup **)*((_QWORD *)this + 36);
  v3 = (struct DirectComposition::CVirtualSurfacePrimitive *)((char *)a2 + 24);
  if ( *v2 != (DirectComposition::CPrimitiveGroup *)((char *)this + 280) )
    __fastfail(3u);
  *(_QWORD *)v3 = (char *)this + 280;
  *((_QWORD *)a2 + 4) = v2;
  *v2 = v3;
  *((_QWORD *)this + 36) = v3;
  ++*((_DWORD *)this + 68);
  if ( (*((_BYTE *)a2 + 176) & 2) == 0 )
    ++*((_DWORD *)this + 74);
}

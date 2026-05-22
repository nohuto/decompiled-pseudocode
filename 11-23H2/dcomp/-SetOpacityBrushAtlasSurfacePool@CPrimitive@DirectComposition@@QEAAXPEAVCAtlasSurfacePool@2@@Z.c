/*
 * XREFs of ?SetOpacityBrushAtlasSurfacePool@CPrimitive@DirectComposition@@QEAAXPEAVCAtlasSurfacePool@2@@Z @ 0x1800F9600
 * Callers:
 *     ??1CPrimitive@DirectComposition@@MEAA@XZ @ 0x180032364 (--1CPrimitive@DirectComposition@@MEAA@XZ.c)
 *     ?AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@1@Z @ 0x180032EB0 (-AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOcclu.c)
 *     ?BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@PEAPEAVCPrimitiveBatch@2@@Z @ 0x180032F84 (-BatchPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@.c)
 * Callees:
 *     ?AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x180030190 (-AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCSurfaceFactory@DirectComposition@@@@YAXAEAPEAVCSurfaceFactory@DirectComposition@@@Z @ 0x1800EAAAC (--$ReleaseInterface@VCSurfaceFactory@DirectComposition@@@@YAXAEAPEAVCSurfaceFactory@DirectCompos.c)
 *     ??$ReleaseInterface@VCAtlasSurfacePool@DirectComposition@@@@YAXAEAPEAVCAtlasSurfacePool@DirectComposition@@@Z @ 0x1800F91D8 (--$ReleaseInterface@VCAtlasSurfacePool@DirectComposition@@@@YAXAEAPEAVCAtlasSurfacePool@DirectCo.c)
 */

void __fastcall DirectComposition::CPrimitive::SetOpacityBrushAtlasSurfacePool(
        DirectComposition::CPrimitive *this,
        struct DirectComposition::CAtlasSurfacePool *a2)
{
  __int64 v4; // rax
  DirectComposition::CSurfaceFactory *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    DirectComposition::CSurfaceFactory::AddRef(*(DirectComposition::CSurfaceFactory **)(*((_QWORD *)a2 + 18) + 128LL));
    CMILRefCountImpl::AddReference((struct DirectComposition::CAtlasSurfacePool *)((char *)a2 + 8));
  }
  v4 = *((_QWORD *)this + 28);
  if ( v4 )
  {
    v5 = *(DirectComposition::CSurfaceFactory **)(*(_QWORD *)(v4 + 144) + 128LL);
    ReleaseInterface<DirectComposition::CAtlasSurfacePool>((volatile signed __int32 **)this + 28);
    ReleaseInterface<DirectComposition::CSurfaceFactory>(&v5);
  }
  *((_QWORD *)this + 28) = a2;
}

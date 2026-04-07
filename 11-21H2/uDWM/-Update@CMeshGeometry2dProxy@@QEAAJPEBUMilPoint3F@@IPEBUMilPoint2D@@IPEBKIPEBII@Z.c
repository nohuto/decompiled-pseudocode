/*
 * XREFs of ?Update@CMeshGeometry2dProxy@@QEAAJPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1800C8820
 * Callers:
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18006A0C6 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800E2904 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeshGeometry2dProxy::Update(
        CMeshGeometry2dProxy *this,
        const struct MilPoint3F *a2,
        unsigned int a3,
        const struct MilPoint2D *a4,
        unsigned int a5,
        const unsigned int *a6,
        unsigned int a7,
        const unsigned int *a8,
        unsigned int a9)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MilPoint3F *, _QWORD, const struct MilPoint2D *, unsigned int, const unsigned int *, unsigned int, const unsigned int *, unsigned int))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 896LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9);
}

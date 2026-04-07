/*
 * XREFs of ?Update@CMeshGeometry2dProxy@@QEAAJHPEBUMilPoint3F@@PEBUMilPoint2D@@IPEBII@Z @ 0x1800CD05C
 * Callers:
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x18006DD26 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800E4134 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeshGeometry2dProxy::Update(
        CMeshGeometry2dProxy *this,
        __int64 a2,
        const struct MilPoint3F *a3,
        const struct MilPoint2D *a4,
        unsigned int a5,
        const unsigned int *a6,
        unsigned int a7)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct MilPoint3F *, const struct MilPoint2D *, unsigned int, const unsigned int *, unsigned int))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 816LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           255LL,
           a3,
           a4,
           a5,
           a6,
           a7);
}

/*
 * XREFs of ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x180015310
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180025B78 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800CA3E0 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800D5120 (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180105D08 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMatrixTransformProxy::Update(CMatrixTransformProxy *this, const struct _MilMatrix3x2D *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _MilMatrix3x2D *))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                  + 912LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}

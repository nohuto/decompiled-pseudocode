/*
 * XREFs of ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x180015A80
 * Callers:
 *     ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x1800159E8 (-UpdateAlignmentTransform@CText@@AEAAJXZ.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017AAC (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x18005F104 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800C5C10 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800CFE8C (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMatrixTransformProxy::Update(CMatrixTransformProxy *this, const struct _MilMatrix3x2D *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _MilMatrix3x2D *))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                  + 984LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}

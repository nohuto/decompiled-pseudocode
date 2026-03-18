/*
 * XREFs of ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A334
 * Callers:
 *     ?PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800105E0 (-PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180013404 (-Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N@Z @ 0x180099090 (-PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatr.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18009AEB4 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 */

__int64 __fastcall RoundWithHalvesDown(float *a1, float *a2)
{
  __int64 result; // rax

  *a2 = (float)(int)CFloatFPU::CeilingSat(*a1 - 0.5);
  a2[1] = (float)(int)CFloatFPU::CeilingSat(a1[1] - 0.5);
  a2[2] = (float)(int)CFloatFPU::CeilingSat(a1[2] - 0.5);
  result = CFloatFPU::CeilingSat(a1[3] - 0.5);
  a2[3] = (float)(int)result;
  return result;
}

/*
 * XREFs of ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x18023D4F4
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18023BBEC (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18023BF90 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x180260860 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x1802608EC (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::PushValueToStack(__int64 a1, float *a2, CExpressionValueStack *a3)
{
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 152);
  if ( v3 == 18 )
    return CExpressionValueStack::PushConstant(a3, *a2);
  if ( v3 == 35 )
    return CExpressionValueStack::PushConstant(a3, (const struct D2DVector2 *)a2);
  if ( v3 != 52 )
    ModuleFailFastForHRESULT(2147500037LL, retaddr);
  return CExpressionValueStack::PushConstant(a3, (const struct D2DVector3 *)a2);
}

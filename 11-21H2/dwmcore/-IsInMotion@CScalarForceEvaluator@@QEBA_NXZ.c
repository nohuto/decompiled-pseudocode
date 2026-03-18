/*
 * XREFs of ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x180266AE0
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180225B8C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsInMotion@CScalarForce@@UEBA_NXZ @ 0x180265DA0 (-IsInMotion@CScalarForce@@UEBA_NXZ.c)
 *     ?IsInMotion@CExpressionForce@@UEBA_NXZ @ 0x180265F60 (-IsInMotion@CExpressionForce@@UEBA_NXZ.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x180267310 (-IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScalarForceEvaluator::IsInMotion(CScalarForceEvaluator *this)
{
  return *((float *)this + 14) <= COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm)
      || *((float *)this + 15) <= COERCE_FLOAT(*((_DWORD *)this + 5) & _xmm);
}

/*
 * XREFs of ?GetScalarForce@CNaturalAnimation@@QEAAJMMPEAPEAUIScalarForce@@@Z @ 0x180232DE0
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1802343A4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18023CB9C (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::GetScalarForce(
        CNaturalAnimation *this,
        float a2,
        float a3,
        struct IScalarForce **a4)
{
  return CNaturalAnimation::GetForceForAxis(this, 0LL);
}

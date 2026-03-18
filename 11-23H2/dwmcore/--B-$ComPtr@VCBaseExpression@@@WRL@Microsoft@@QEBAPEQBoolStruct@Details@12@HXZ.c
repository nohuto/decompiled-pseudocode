/*
 * XREFs of ??B?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x180119D50
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x180233D94 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CBaseExpression>::operator int Microsoft::WRL::Details::BoolStruct::*(
        _QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}

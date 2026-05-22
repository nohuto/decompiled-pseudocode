/*
 * XREFs of ?PushDataTypeIntoValidationStack@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E918
 * Callers:
 *     ?Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z @ 0x18003D728 (-Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z.c)
 *     ?Swizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x18003E784 (-Swizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ?PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003E85C (-PushConstantParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@W4.c)
 *     ?PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJ_N@Z @ 0x180163208 (-PushConstant@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJ_N@Z.c)
 *     ?PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVSubchannelMaskInfo@@@Z @ 0x1801632B4 (-PushReferenceParameter@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::PushDataTypeIntoValidationStack(
        _DWORD *a1,
        int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *a1 >= 0x50u )
    return (unsigned int)-2147024809;
  else
    a1[(*a1)++ + 66] = a2;
  return v2;
}

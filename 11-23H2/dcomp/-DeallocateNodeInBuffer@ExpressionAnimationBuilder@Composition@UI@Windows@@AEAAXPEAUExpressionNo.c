/*
 * XREFs of ?DeallocateNodeInBuffer@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXPEAUExpressionNode@@@Z @ 0x180162AC8
 * Callers:
 *     ?Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z @ 0x18003D728 (-Conditional@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAV1234@0@Z.c)
 *     ?Swizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x18003E784 (-Swizzle@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ?ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeType@@I@Z @ 0x18003EE48 (-ApplySimpleOperation@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAJW4ExpressionNodeTy.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAUExpressionNode@@$0A@@@QEAAHAEBQEAUExpressionNode@@@Z @ 0x180163468 (-Remove@-$DynArray@PEAUExpressionNode@@$0A@@@QEAAHAEBQEAUExpressionNode@@@Z.c)
 */

void __fastcall Windows::UI::Composition::ExpressionAnimationBuilder::DeallocateNodeInBuffer(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        struct ExpressionNode *a2)
{
  struct ExpressionNode *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  DynArray<ExpressionNode *,0>::Remove((char *)this + 16, &v3);
  operator delete(a2);
}

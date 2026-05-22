/*
 * XREFs of ??_GExpressionAnimationBuilder@Composition@UI@Windows@@QEAAPEAXI@Z @ 0x1800931EC
 * Callers:
 *     ??1?$unique_ptr@VExpressionAnimationBuilder@Composition@UI@Windows@@U?$default_delete@VExpressionAnimationBuilder@Composition@UI@Windows@@@wistd@@@wistd@@QEAA@XZ @ 0x180197470 (--1-$unique_ptr@VExpressionAnimationBuilder@Composition@UI@Windows@@U-$default_delete@VExpressio.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@XZ @ 0x180093214 (--1ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::ExpressionAnimationBuilder *__fastcall Windows::UI::Composition::ExpressionAnimationBuilder::`scalar deleting destructor'(
        Windows::UI::Composition::ExpressionAnimationBuilder *this)
{
  Windows::UI::Composition::ExpressionAnimationBuilder::~ExpressionAnimationBuilder(this);
  operator delete(this);
  return this;
}

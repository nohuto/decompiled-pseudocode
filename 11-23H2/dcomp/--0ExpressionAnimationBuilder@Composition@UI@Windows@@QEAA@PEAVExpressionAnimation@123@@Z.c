/*
 * XREFs of ??0ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA@PEAVExpressionAnimation@123@@Z @ 0x18003D484
 * Callers:
 *     ??$make_unique_failfast@VExpressionAnimationBuilder@Composition@UI@Windows@@AEAPEAVExpressionAnimation@234@@wil@@YA?AV?$unique_ptr@VExpressionAnimationBuilder@Composition@UI@Windows@@U?$default_delete@VExpressionAnimationBuilder@Composition@UI@Windows@@@wistd@@@wistd@@AEAPEAVExpressionAnimation@Composition@UI@Windows@@@Z @ 0x18003D434 (--$make_unique_failfast@VExpressionAnimationBuilder@Composition@UI@Windows@@AEAPEAVExpressionAni.c)
 * Callees:
 *     ?Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ @ 0x18005FE80 (-Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ.c)
 */

Windows::UI::Composition::ExpressionAnimationBuilder *__fastcall Windows::UI::Composition::ExpressionAnimationBuilder::ExpressionAnimationBuilder(
        Windows::UI::Composition::ExpressionAnimationBuilder *this,
        struct Windows::UI::Composition::ExpressionAnimation *a2)
{
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = (char *)this + 48;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_DWORD *)this + 8) = 4;
  *(_QWORD *)((char *)this + 36) = 4LL;
  *((_QWORD *)this + 10) = (char *)this + 112;
  *((_QWORD *)this + 11) = (char *)this + 112;
  *((_DWORD *)this + 24) = 1;
  *(_QWORD *)((char *)this + 100) = 1LL;
  *((_QWORD *)this + 15) = (char *)this + 152;
  *((_QWORD *)this + 16) = (char *)this + 152;
  *((_DWORD *)this + 34) = 1;
  *(_QWORD *)((char *)this + 140) = 1LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 60) = 1;
  *(_QWORD *)((char *)this + 244) = 1LL;
  *((_QWORD *)this + 28) = (char *)this + 256;
  *((_QWORD *)this + 29) = (char *)this + 256;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_DWORD *)this + 154) = 0;
  Windows::UI::Composition::ExpressionAnimationBuilder::Reset(this);
  return this;
}

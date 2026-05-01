/*
 * XREFs of ??$?4U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@$0A@@?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18054B218
 * Callers:
 *     _lambda_79a607d44e9569d9530329be2636626a_::operator() @ 0x18054D08C (_lambda_79a607d44e9569d9530329be2636626a_--operator().c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1MinimizeAnimationSystemStateOverride@@QEAA@XZ @ 0x18054C7BC (--1MinimizeAnimationSystemStateOverride@@QEAA@XZ.c)
 */

MinimizeAnimationSystemStateOverride **__fastcall std::unique_ptr<MinimizeAnimationSystemStateOverride>::operator=<std::default_delete<MinimizeAnimationSystemStateOverride>,0>(
        MinimizeAnimationSystemStateOverride **a1,
        MinimizeAnimationSystemStateOverride **a2)
{
  MinimizeAnimationSystemStateOverride *v3; // rax
  MinimizeAnimationSystemStateOverride *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      MinimizeAnimationSystemStateOverride::~MinimizeAnimationSystemStateOverride(v4);
      operator delete(v4);
    }
  }
  return a1;
}

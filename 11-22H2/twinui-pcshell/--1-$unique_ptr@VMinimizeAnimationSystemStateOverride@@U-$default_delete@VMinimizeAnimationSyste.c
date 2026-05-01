/*
 * XREFs of ??1?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAA@XZ @ 0x18054C510
 * Callers:
 *     __lambda_79a607d44e9569d9530329be2636626a_::operator()_::_1_::dtor$0 @ 0x18054D143 (__lambda_79a607d44e9569d9530329be2636626a_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1MinimizeAnimationSystemStateOverride@@QEAA@XZ @ 0x18054C7BC (--1MinimizeAnimationSystemStateOverride@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<MinimizeAnimationSystemStateOverride>::~unique_ptr<MinimizeAnimationSystemStateOverride>(
        MinimizeAnimationSystemStateOverride **a1)
{
  MinimizeAnimationSystemStateOverride *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    MinimizeAnimationSystemStateOverride::~MinimizeAnimationSystemStateOverride(*a1);
    operator delete(v1);
  }
}

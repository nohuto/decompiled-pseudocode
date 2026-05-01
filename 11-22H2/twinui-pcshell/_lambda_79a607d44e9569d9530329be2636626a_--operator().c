/*
 * XREFs of _lambda_79a607d44e9569d9530329be2636626a_::operator() @ 0x18054D08C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_79a607d44e9569d9530329be2636626a__void_bool_::_Do_call @ 0x1805508D0 (std--_Func_impl_no_alloc__lambda_79a607d44e9569d9530329be2636626a__void_bool_--_Do_call.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$?4U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@$0A@@?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18054B218 (--$-4U-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@$0A@@-$unique_ptr@VMinimizeA.c)
 *     ??$make_unique@VMinimizeAnimationSystemStateOverride@@H$0A@@std@@YA?AV?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@0@$$QEAH@Z @ 0x18054BD78 (--$make_unique@VMinimizeAnimationSystemStateOverride@@H$0A@@std@@YA-AV-$unique_ptr@VMinimizeAnim.c)
 *     ??1MinimizeAnimationSystemStateOverride@@QEAA@XZ @ 0x18054C7BC (--1MinimizeAnimationSystemStateOverride@@QEAA@XZ.c)
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x18054D31C (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_79a607d44e9569d9530329be2636626a_::operator()(_QWORD *a1, char a2)
{
  MinimizeAnimationSystemStateOverride **v4; // rax
  MinimizeAnimationSystemStateOverride *v5; // rsi
  MinimizeAnimationSystemStateOverride *v6; // rbx
  MinimizeAnimationSystemStateOverride *v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF
  MinimizeAnimationSystemStateOverride *v9; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( a2 )
  {
    v8 = 0;
    v4 = (MinimizeAnimationSystemStateOverride **)std::make_unique<MinimizeAnimationSystemStateOverride,int,0>(&v9, &v8);
    std::unique_ptr<MinimizeAnimationSystemStateOverride>::operator=<std::default_delete<MinimizeAnimationSystemStateOverride>,0>(
      &v7,
      v4);
    v5 = v9;
    if ( v9 )
    {
      MinimizeAnimationSystemStateOverride::~MinimizeAnimationSystemStateOverride(v9);
      operator delete(v5);
    }
  }
  MultitaskingViewGestureHandler::ActivateGestureAction(*a1, a2 != 0 ? 3 : 0, 0LL);
  if ( !a2 )
    MultitaskingViewGestureHandler::AnimationComplete(*a1, 0LL);
  std::unique_ptr<MinimizeAnimationSystemStateOverride>::operator=<std::default_delete<MinimizeAnimationSystemStateOverride>,0>(
    (MinimizeAnimationSystemStateOverride **)(*a1 + 248LL),
    &v7);
  v6 = v7;
  if ( v7 )
  {
    MinimizeAnimationSystemStateOverride::~MinimizeAnimationSystemStateOverride(v7);
    operator delete(v6);
  }
}

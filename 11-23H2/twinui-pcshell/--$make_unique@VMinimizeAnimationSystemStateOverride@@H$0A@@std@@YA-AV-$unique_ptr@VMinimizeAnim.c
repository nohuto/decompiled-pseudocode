/*
 * XREFs of ??$make_unique@VMinimizeAnimationSystemStateOverride@@H$0A@@std@@YA?AV?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@0@$$QEAH@Z @ 0x18054BD78
 * Callers:
 *     _lambda_79a607d44e9569d9530329be2636626a_::operator() @ 0x18054D08C (_lambda_79a607d44e9569d9530329be2636626a_--operator().c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x18055B734 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0MinimizeAnimationSystemStateOverride@@QEAA@H@Z @ 0x18054C2C0 (--0MinimizeAnimationSystemStateOverride@@QEAA@H@Z.c)
 */

_QWORD *__fastcall std::make_unique<MinimizeAnimationSystemStateOverride,int,0>(_QWORD *a1, int *a2)
{
  MinimizeAnimationSystemStateOverride *v5; // [rsp+40h] [rbp+8h]

  v5 = (MinimizeAnimationSystemStateOverride *)operator new(4uLL);
  *a1 = MinimizeAnimationSystemStateOverride::MinimizeAnimationSystemStateOverride(v5, *a2);
  return a1;
}

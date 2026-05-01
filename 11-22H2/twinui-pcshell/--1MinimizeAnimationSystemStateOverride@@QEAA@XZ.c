/*
 * XREFs of ??1MinimizeAnimationSystemStateOverride@@QEAA@XZ @ 0x18054C7BC
 * Callers:
 *     ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x180066690 (-NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ.c)
 *     ??1MultitaskingViewGestureHandler@@UEAA@XZ @ 0x1801453DC (--1MultitaskingViewGestureHandler@@UEAA@XZ.c)
 *     ??$?4U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@$0A@@?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18054B218 (--$-4U-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@$0A@@-$unique_ptr@VMinimizeA.c)
 *     ??1?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAA@XZ @ 0x18054C510 (--1-$unique_ptr@VMinimizeAnimationSystemStateOverride@@U-$default_delete@VMinimizeAnimationSyste.c)
 *     _lambda_79a607d44e9569d9530329be2636626a_::operator() @ 0x18054D08C (_lambda_79a607d44e9569d9530329be2636626a_--operator().c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x18055B734 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 * Callees:
 *     <none>
 */

void __fastcall MinimizeAnimationSystemStateOverride::~MinimizeAnimationSystemStateOverride(
        MinimizeAnimationSystemStateOverride *this)
{
  int pvParam; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+34h] [rbp+Ch]

  if ( *(_DWORD *)this != -1 )
  {
    v2 = *(_DWORD *)this;
    pvParam = 8;
    SystemParametersInfoW(0x49u, 8u, &pvParam, 0);
  }
}

/*
 * XREFs of ?GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18053ABA4
 * Callers:
 *     ?GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18053A1EC (-GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$UIAFoundBoundingRectForSelectedTextUsing@AEAY0CL@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAY0CL@$$CBG@Z @ 0x180539FCC (--$UIAFoundBoundingRectForSelectedTextUsing@AEAY0CL@$$CBG@TouchKeyboardExperienceTelemetryLogger.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomationElement@@PEAUtagRECT@@@Z @ 0x18053A6E4 (-GetBoundingRectForSelectedTextFromDescendantsOfElement@UIAutomationHelpers@KeyboardHosting@@AEA.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18053AB0C (-GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@TouchKeyboardExperienceTelemetr.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow(
        __int64 **this,
        struct tagRECT *a2)
{
  HWND ForegroundWindow; // rdx
  unsigned int v5; // ebx
  __int64 *v6; // rcx
  __int64 v7; // rax
  int BoundingRectForSelectedTextFromDescendantsOfElement; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUIAutomationElement *v14; // [rsp+40h] [rbp+18h] BYREF

  TouchKeyboardExperienceTelemetryLogger::GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow((__int64)this);
  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    v14 = 0LL;
    v6 = *this;
    v7 = **this;
    v14 = 0LL;
    BoundingRectForSelectedTextFromDescendantsOfElement = (*(__int64 (__fastcall **)(__int64 *, HWND, struct IUIAutomationElement **))(v7 + 48))(
                                                            v6,
                                                            ForegroundWindow,
                                                            &v14);
    v5 = BoundingRectForSelectedTextFromDescendantsOfElement;
    if ( BoundingRectForSelectedTextFromDescendantsOfElement >= 0 )
    {
      if ( !v14 )
      {
        v5 = -2147418113;
        v10 = 2147549183LL;
        v9 = 150LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
          (const char *)v10);
LABEL_12:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
        return v5;
      }
      BoundingRectForSelectedTextFromDescendantsOfElement = KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfElement(
                                                              this,
                                                              v14,
                                                              a2);
      v5 = BoundingRectForSelectedTextFromDescendantsOfElement;
      if ( BoundingRectForSelectedTextFromDescendantsOfElement >= 0 )
      {
        TouchKeyboardExperienceTelemetryLogger::UIAFoundBoundingRectForSelectedTextUsing<unsigned short const (&)[43]>(v11);
        v5 = 0;
        goto LABEL_12;
      }
      v9 = 152LL;
    }
    else
    {
      v9 = 149LL;
    }
    v10 = (unsigned int)BoundingRectForSelectedTextFromDescendantsOfElement;
    goto LABEL_10;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
    (const char *)0x8000FFFFLL);
  return v5;
}

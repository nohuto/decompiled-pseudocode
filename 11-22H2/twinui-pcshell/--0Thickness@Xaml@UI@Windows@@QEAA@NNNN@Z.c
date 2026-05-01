/*
 * XREFs of ??0Thickness@Xaml@UI@Windows@@QEAA@NNNN@Z @ 0x1801BF7A8
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1807733A8 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     <none>
 */

Windows::UI::Xaml::Thickness *__fastcall Windows::UI::Xaml::Thickness::Thickness(
        Windows::UI::Xaml::Thickness *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  Windows::UI::Xaml::Thickness *result; // rax

  result = this;
  *((double *)this + 3) = a5;
  *(double *)this = a2;
  *((double *)this + 1) = a3;
  *((double *)this + 2) = a4;
  return result;
}

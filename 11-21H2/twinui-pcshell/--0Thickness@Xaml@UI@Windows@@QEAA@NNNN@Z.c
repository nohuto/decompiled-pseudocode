/*
 * XREFs of ??0Thickness@Xaml@UI@Windows@@QEAA@NNNN@Z @ 0x1801E93E8
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1806090C4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
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

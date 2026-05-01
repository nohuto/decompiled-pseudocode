/*
 * XREFs of ??0Point@Foundation@Windows@@QEAA@MM@Z @ 0x180181C6C
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1800135A8 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806017E0 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     <none>
 */

Windows::Foundation::Point *__fastcall Windows::Foundation::Point::Point(
        Windows::Foundation::Point *this,
        float a2,
        float a3)
{
  Windows::Foundation::Point *result; // rax

  *(float *)this = a2;
  result = this;
  *((float *)this + 1) = a3;
  return result;
}

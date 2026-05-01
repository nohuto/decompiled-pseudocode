/*
 * XREFs of ?ComputeCloseButtonBehavior@@YA?AW4SwitchItemCloseButtonBehavior@Switcher@Experiences@ComposableShell@WindowsInternal@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1801BF7F0
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ComputeCloseButtonBehavior(char a1)
{
  return (a1 & 1) == 0;
}

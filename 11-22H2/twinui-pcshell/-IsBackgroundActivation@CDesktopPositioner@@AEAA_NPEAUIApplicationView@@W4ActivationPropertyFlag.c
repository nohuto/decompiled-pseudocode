/*
 * XREFs of ?IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlags@PositionerPropertySetHelpers@@@Z @ 0x18003A5D0
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180039D90 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 * Callees:
 *     IsPeoplePane @ 0x180026588 (IsPeoplePane.c)
 */

bool __fastcall CDesktopPositioner::IsBackgroundActivation(__int64 a1, __int64 a2, char a3)
{
  return (a3 & 5) != 0 || IsPeoplePane(a2) != 0;
}

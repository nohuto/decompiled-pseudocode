/*
 * XREFs of ??0Rect@Foundation@Windows@@QEAA@MMMM@Z @ 0x180769EB0
 * Callers:
 *     ?AddRegionToViewModel@SnapAssistState@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@Z @ 0x18078B34C (-AddRegionToViewModel@SnapAssistState@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Compo.c)
 * Callees:
 *     <none>
 */

Windows::Foundation::Rect *__fastcall Windows::Foundation::Rect::Rect(
        Windows::Foundation::Rect *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  Windows::Foundation::Rect *result; // rax

  if ( a4 < 0.0 || a5 < 0.0 )
  {
    __abi_WinRTraiseInvalidArgumentException();
    __debugbreak();
    JUMPOUT(0x180769EF0LL);
  }
  *(float *)this = a2;
  result = this;
  *((float *)this + 1) = a3;
  *((float *)this + 2) = a4;
  *((float *)this + 3) = a5;
  return result;
}

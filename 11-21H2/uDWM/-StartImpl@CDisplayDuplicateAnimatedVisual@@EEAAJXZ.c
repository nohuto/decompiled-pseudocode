/*
 * XREFs of ?StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B60B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x18005BB70 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B5CB8 (-CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::StartImpl(CDisplayDuplicateAnimatedVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CDisplayDuplicateAnimatedVisual::CaptureAndScheduleExitAnimation(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *((_BYTE *)this + 434) = 1;
    v5 = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
    v6 = v5;
    if ( v5 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (int)"clientcore\\windows\\dwm\\udwm\\displayduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"clientcore\\windows\\dwm\\udwm\\displayduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}

/*
 * XREFs of ?StartImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x1800584D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x180047CA4 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplayDisconnectAnimatedVisual::StartImpl(CDisplayDisconnectAnimatedVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 434) = 1;
  v1 = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaydisconnectanimatedvisual.cpp",
    (const char *)(unsigned int)v1,
    v4);
  return v2;
}

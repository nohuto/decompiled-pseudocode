/*
 * XREFs of ?StartImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x18005F980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x18005BB70 (-EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CDisplayDisconnectAnimatedVisual::StartImpl(CDisplayDisconnectAnimatedVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 434) = 1;
  v1 = CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32,
    (int)"clientcore\\windows\\dwm\\udwm\\displaydisconnectanimatedvisual.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}

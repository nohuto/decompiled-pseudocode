/*
 * XREFs of ?PrepareForFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F4938
 * Callers:
 *     ?StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4CE8 (-StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?GetVirtualScreenRect@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEBA?AUtagRECT@@XZ @ 0x1800F416C (-GetVirtualScreenRect@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 *     ?UpdateBackgroundInstructionsAndSize@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBUtagSIZE@@_N@Z @ 0x1800F58C0 (-UpdateBackgroundInstructionsAndSize@ScreenRotationRejuvTransitionHandler@implementation@Private.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x1801007DC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::PrepareForFirstAnimation(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this)
{
  __int64 v1; // r8
  int v3; // ecx
  __int64 v4; // rax
  LONG v5; // eax
  LONG v6; // eax
  struct tagPOINT v7; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v8; // [rsp+28h] [rbp-20h] BYREF

  v1 = *((_QWORD *)this + 6);
  v7 = 0LL;
  v3 = (int)*(double *)(v1 + 168);
  v4 = *(_QWORD *)(v1 + 120);
  *((_BYTE *)this + 116) = 1;
  *(_QWORD *)((char *)this + 124) = v4;
  *((_DWORD *)this + 30) = v3;
  CVisual::SetOffset((struct tagPOINT *)v1, &v7);
  CVisual::SetRotation(*((CVisual **)this + 6), 0.0);
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::GetVirtualScreenRect(
    this,
    &v8);
  v5 = v8.right - v8.left;
  if ( v8.right - v8.left < 0 )
    v5 = 0;
  v7.x = v5;
  v6 = v8.bottom - v8.top;
  if ( v8.bottom - v8.top < 0 )
    v6 = 0;
  v7.y = v6;
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::UpdateBackgroundInstructionsAndSize(
    this,
    (const struct tagSIZE *)&v7,
    0);
}

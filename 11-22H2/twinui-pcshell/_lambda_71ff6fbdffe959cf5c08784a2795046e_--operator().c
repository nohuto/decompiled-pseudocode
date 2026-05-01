/*
 * XREFs of _lambda_71ff6fbdffe959cf5c08784a2795046e_::operator() @ 0x1804DFF84
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_71ff6fbdffe959cf5c08784a2795046e___::Run @ 0x1804E0800 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_71ff6fbdffe959cf5c08784a2795046e___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1804DADC8 (-WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_71ff6fbdffe959cf5c08784a2795046e_::operator()(__int64 *a1)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  const char *v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  *(_BYTE *)(*a1 + 248) = 0;
  try
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 240) + 56LL))(*(_QWORD *)(v2 + 240));
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x230,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v3,
        v13);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 72LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 64));
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x231,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v4,
        v13);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 88LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 72));
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x232,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v5,
        v13);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 104LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 80));
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x233,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v6,
        v13);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 152LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 88));
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x234,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v7,
        v13);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 168LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 96));
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x235,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v8,
        v13);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 240) + 136LL))(
           *(_QWORD *)(*a1 + 240),
           *(_QWORD *)(*a1 + 104));
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x236,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v9,
        v13);
    v10 = *(_QWORD *)(*a1 + 240);
    *(_QWORD *)(*a1 + 240) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *(_BYTE *)(*a1 + 264) = 0;
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected(v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x23B,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                           v11);
  }
  return result;
}

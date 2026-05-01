/*
 * XREFs of ?RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x1800B64D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1800B76AC (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::RegisterForDesktopVisibilityChanges(
        __int64 a1,
        int a2,
        struct IUnknown *a3,
        unsigned int *a4)
{
  int v4; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0;
  if ( a2 == 1 )
  {
    v4 = CGITRegistrationList::Register((CGITRegistrationList *)(a1 + 56), a3, a4);
    if ( v4 >= 0 )
      return 0LL;
    v6 = 89LL;
  }
  else
  {
    v4 = -2147024809;
    v6 = 88LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}

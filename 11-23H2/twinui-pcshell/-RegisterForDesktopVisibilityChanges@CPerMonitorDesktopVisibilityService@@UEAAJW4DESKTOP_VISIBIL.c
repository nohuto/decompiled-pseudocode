/*
 * XREFs of ?RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x180130540
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18013136C (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::RegisterForDesktopVisibilityChanges(
        __int64 a1,
        int a2,
        struct IUnknown *a3,
        unsigned int *a4)
{
  int v4; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
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
    (unsigned int)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
    (const char *)(unsigned int)v4,
    v7);
  return (unsigned int)v4;
}

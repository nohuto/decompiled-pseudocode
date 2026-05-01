/*
 * XREFs of ?OnRemoteDesktopConnected@CVirtualDesktopManager@@AEAAJPEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Z @ 0x1806027F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180391844 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ?FindDesktop@CVirtualDesktopManager@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x180601400 (-FindDesktop@CVirtualDesktopManager@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::OnRemoteDesktopConnected(
        CVirtualDesktopManager *this,
        struct IInspectable *a2,
        struct Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int Desktop; // eax
  __int64 v7; // rdx
  struct IVirtualDesktop *v9; // [rsp+20h] [rbp-28h] BYREF
  struct _GUID v10; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs *, struct _GUID *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = 0LL;
    Desktop = CVirtualDesktopManager::FindDesktop((CVirtualDesktopManager *)((char *)this + 8), &v10, &v9);
    v5 = Desktop;
    if ( Desktop >= 0 )
    {
      Desktop = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 16) + 104LL))(
                  *((_QWORD *)this + 16),
                  v9);
      v5 = Desktop;
      if ( Desktop >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v7 = 1592LL;
    }
    else
    {
      v7 = 1591LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)Desktop);
LABEL_9:
    winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((__int64 *)&v9);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x635,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}

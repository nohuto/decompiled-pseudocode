/*
 * XREFs of ?HideFlyout@CNetworkExperienceManager@@UEAAJXZ @ 0x18046E390
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x180472654 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 */

__int64 __fastcall CNetworkExperienceManager::HideFlyout(CBaseTrayFlyoutExperienceManager **this)
{
  _DWORD *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1808549ED, 0LL, 0LL, 2u, &v6);
  v3 = CBaseTrayFlyoutExperienceManager::HideFlyout(this[6]);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x97,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\networkexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}

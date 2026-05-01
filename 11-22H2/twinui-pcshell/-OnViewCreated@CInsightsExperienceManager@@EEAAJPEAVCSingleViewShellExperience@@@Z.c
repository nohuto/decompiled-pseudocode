/*
 * XREFs of ?OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18045A240
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x18045A678 (-SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnViewCreated(
        CInsightsExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  _DWORD *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1808520D9, 0LL, 0LL, 2u, &v7);
  v4 = CInsightsExperienceManager::SizeViewOnCreation((CInsightsExperienceManager *)((char *)this - 56));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF2,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}

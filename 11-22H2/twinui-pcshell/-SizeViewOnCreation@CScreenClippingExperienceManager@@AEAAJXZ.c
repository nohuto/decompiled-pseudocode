/*
 * XREFs of ?SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180456E38
 * Callers:
 *     ?OnViewCreated@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180456880 (-OnViewCreated@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetRectForAllMonitors @ 0x180455EB8 (_anonymous_namespace_--GetRectForAllMonitors.c)
 *     ?SetViewSizeAndPosition@CScreenClippingExperienceManager@@AEAAJUtagRECT@@@Z @ 0x180456C6C (-SetViewSizeAndPosition@CScreenClippingExperienceManager@@AEAAJUtagRECT@@@Z.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::SizeViewOnCreation(CScreenClippingExperienceManager *this)
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
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_180851309, 0LL, 0LL, 2u, &v6);
  v6 = *(struct _EVENT_DATA_DESCRIPTOR *)anonymous_namespace_::GetRectForAllMonitors((int *)&v6);
  v3 = CScreenClippingExperienceManager::SetViewSizeAndPosition(this, (struct tagRECT *)&v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x26A,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}

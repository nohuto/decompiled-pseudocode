/*
 * XREFs of ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180456D3C
 * Callers:
 *     ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180456350 (-LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@She.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$ScreenClippingInvoked@H@ScreenClippingCommonTelemetry@@SAX$$QEAH@Z @ 0x1804557EC (--$ScreenClippingInvoked@H@ScreenClippingCommonTelemetry@@SAX$$QEAH@Z.c)
 *     ?ShowExperienceWithoutFocus@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180456DF0 (-ShowExperienceWithoutFocus@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::ShowExperience(CScreenClippingExperienceManager *a1, int a2)
{
  _DWORD *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)a1,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_18085127F, 0LL, 0LL, 2u, &v9);
  v8 = a2;
  ScreenClippingCommonTelemetry::ScreenClippingInvoked<int>(&v8);
  v5 = CScreenClippingExperienceManager::ShowExperienceWithoutFocus(a1);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x255,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}

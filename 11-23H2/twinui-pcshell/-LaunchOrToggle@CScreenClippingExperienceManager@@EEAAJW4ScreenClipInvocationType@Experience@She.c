/*
 * XREFs of ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180456350
 * Callers:
 *     ?OnMessage@CScreenClippingExperienceManager@@EEAAJI_K_J@Z @ 0x180067E50 (-OnMessage@CScreenClippingExperienceManager@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18045645C (-LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experie.c)
 *     ?LogSuccessfulLaunch@CScreenClippingExperienceManager@@AEAAXUhstring@winrt@@W4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1804566A8 (-LogSuccessfulLaunch@CScreenClippingExperienceManager@@AEAAXUhstring@winrt@@W4ScreenClipInvocati.c)
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180456D3C (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 *     ?StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180456EE8 (-StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::LaunchOrToggle(
        CScreenClippingExperienceManager *a1,
        unsigned int a2)
{
  _DWORD *v4; // rcx
  const unsigned __int16 *v5; // rdx
  int started; // edi
  __int64 v7; // rdx
  winrt::hstring *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+38h] [rbp-40h] BYREF
  int *v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)a1,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    v15 = 0;
    v13 = (int *)&v11;
    v11 = a2;
    v14 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_18085183E, 0LL, 0LL, 3u, &v12);
  }
  if ( (int)CScreenClippingExperienceManager::LaunchSnippingToolApp(v4, a2) < 0 )
  {
    if ( *((_DWORD *)a1 + 24) == 2 )
    {
      started = CScreenClippingExperienceManager::StartAppClose(a1);
      if ( started < 0 )
      {
        v7 = 313LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)started);
        return (unsigned int)started;
      }
    }
    else
    {
      started = CScreenClippingExperienceManager::ShowExperience(a1, a2);
      if ( started < 0 )
      {
        v7 = 317LL;
        goto LABEL_8;
      }
    }
    v5 = L"ScreenClipping";
    goto LABEL_12;
  }
  v5 = L"SnippingTool";
LABEL_12:
  v9 = winrt::hstring::hstring((winrt::hstring *)&v11, v5);
  CScreenClippingExperienceManager::LogSuccessfulLaunch(v10, v9, a2);
  return 0LL;
}

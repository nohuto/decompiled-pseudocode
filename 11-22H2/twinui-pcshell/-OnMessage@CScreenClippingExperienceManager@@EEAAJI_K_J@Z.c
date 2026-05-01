/*
 * XREFs of ?OnMessage@CScreenClippingExperienceManager@@EEAAJI_K_J@Z @ 0x180067E50
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180456350 (-LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@She.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::OnMessage(CScreenClippingExperienceManager *this, int a2, int a3)
{
  _DWORD *v6; // rcx
  int v8; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-40h] BYREF
  int *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  v6 = *(_DWORD **)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                      this,
                      _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v6 > 5u )
  {
    v8 = a2;
    v10 = &v8;
    v11 = 4;
    v12 = 0;
    tlgWriteTransfer_EventWriteTransfer((int)v6, (int)&dword_1808514CF, 0, 0, 3u, &v9);
  }
  if ( a3 == 88 )
    CScreenClippingExperienceManager::LaunchOrToggle((char *)this - 24, 3LL);
  return 0LL;
}

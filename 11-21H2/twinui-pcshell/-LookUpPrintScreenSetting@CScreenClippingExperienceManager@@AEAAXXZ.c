/*
 * XREFs of ?LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1800B63A4
 * Callers:
 *     ?RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800B5A5C (-RegisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     CAsyncCallbackWithLambda__lambda_a816ff4f620b1516925295d014d058e4___::Invoke @ 0x180381A80 (CAsyncCallbackWithLambda__lambda_a816ff4f620b1516925295d014d058e4___--Invoke.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800B7AB4 (-UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?RequestHotKeys@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1803820F8 (-RequestHotKeys@CScreenClippingExperienceManager@@AEAAXXZ.c)
 */

void __fastcall CScreenClippingExperienceManager::LookUpPrintScreenSetting(CScreenClippingExperienceManager *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  ULONG v5; // [rsp+20h] [rbp-58h]
  unsigned int v6; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-44h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1806A96EB, 0LL, 0LL, 2u, &v8);
  v6 = 0;
  if ( (unsigned int)SHRegGetDWORD(
                       HKEY_CURRENT_USER,
                       L"Control Panel\\Keyboard",
                       L"PrintScreenKeyForSnippingEnabled",
                       &v6) == -2147024894 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x293,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)0x80070002LL,
      v5);
  v4 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   v3,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    v11 = 0;
    v7 = v6;
    v10 = 4;
    v9 = &v7;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_1806A96AF, 0LL, 0LL, 3u, &v8);
  }
  if ( v6 )
    CScreenClippingExperienceManager::RequestHotKeys(this);
  else
    CScreenClippingExperienceManager::UnregisterForHotKeyHandling(this);
}

/*
 * XREFs of ?UnregisterForHotKeyHandling@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800B7AB4
 * Callers:
 *     ?LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1800B63A4 (-LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ.c)
 *     ?Close@CScreenClippingExperienceManager@@EEAAJXZ @ 0x180175110 (-Close@CScreenClippingExperienceManager@@EEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::UnregisterForHotKeyHandling(
        CScreenClippingExperienceManager *this)
{
  _DWORD *v2; // rcx
  int v3; // eax
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v2 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
  {
    v3 = *((_DWORD *)this + 70);
    v9 = 0;
    v5 = v3;
    v8 = 4;
    v7 = &v5;
    tlgWriteTransfer_EventWriteTransfer((__int64)v2, (unsigned __int8 *)dword_1806A97DB, 0LL, 0LL, 3u, &v6);
  }
  if ( *((_DWORD *)this + 70) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 64LL))(*((_QWORD *)this + 34));
    *((_DWORD *)this + 70) = 0;
  }
  return 0LL;
}

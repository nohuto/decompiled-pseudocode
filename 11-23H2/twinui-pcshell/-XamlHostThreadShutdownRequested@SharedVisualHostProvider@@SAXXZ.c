/*
 * XREFs of ?XamlHostThreadShutdownRequested@SharedVisualHostProvider@@SAXXZ @ 0x1806EC50C
 * Callers:
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x1806EC214 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSharedVisualHostProvider@@@details@wil@@QEAAPEAVSharedVisualHostProvider@@P6AXXZ@Z @ 0x1806ED0C8 (-get@-$static_lazy@VSharedVisualHostProvider@@@details@wil@@QEAAPEAVSharedVisualHostProvider@@P6.c)
 */

void __fastcall SharedVisualHostProvider::XamlHostThreadShutdownRequested(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = *(_DWORD **)(wil::details::static_lazy<SharedVisualHostProvider>::get(
                      a1,
                      _lambda_33f7b6abc9dd15539bbd1f422d65a3e7_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 5u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x200000000000LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_180879FC2, 0LL, 0LL, 3u, &v4);
    }
  }
}

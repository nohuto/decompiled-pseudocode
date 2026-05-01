/*
 * XREFs of ??$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z @ 0x1800B94FC
 * Callers:
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x1800B9450 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall SingleViewExperienceTelemetry::SessionIdleState<bool &>(char *a1)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  int v4; // ecx
  char v5; // al
  char v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  char *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  result = wil::details::static_lazy<SingleViewExperienceLogging>::get(
             a1,
             _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(result + 8);
  if ( *v3 > 5u )
  {
    result = tlgKeywordOn(v3, 0x200000000000LL);
    if ( (_BYTE)result )
    {
      v5 = *a1;
      v10 = 0;
      v6 = v5;
      v9 = 1;
      v8 = &v6;
      return tlgWriteTransfer_EventWriteTransfer(v4, (int)&dword_18087CB7D, 0, 0, 3u, &v7);
    }
  }
  return result;
}

/*
 * XREFs of ?WriteOutput@Haptics@InputTraceLogging@@SAXXZ @ 0x1801B8034
 * Callers:
 *     ?SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z @ 0x1801B7D2C (-SendHapticFeedbackInternal@HapticInterface@@AEAAJGMIII@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Haptics::WriteOutput(__int64 a1)
{
  __int64 v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v1 > 4u
    && (*(_DWORD *)(v1 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v1 + 24) & 0x200LL) == *(_QWORD *)(v1 + 24) )
  {
    tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_18023744A, 0LL, 0LL, 2u, &v2);
  }
}

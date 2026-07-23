/*
 * XREFs of RtlpHpTlLogGCTimerFinished @ 0x1801183A4
 * Callers:
 *     RtlpHpGCCallback @ 0x18007DBF0 (RtlpHpGCCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180004EA0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

ULONG __fastcall RtlpHpTlLogGCTimerFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_180174430 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_180174430,
             (unsigned __int8 *)dword_180141E25,
             a3,
             a4,
             2u,
             &v5);
  return result;
}

/*
 * XREFs of RtlpHpTlLogGCTimerFinished @ 0x1801187A0
 * Callers:
 *     RtlpHpGCCallback @ 0x1800773A0 (RtlpHpGCCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007C4B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTlLogGCTimerFinished(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_18017E358 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18017E358, byte_18014AF2E, a3, a4, 2, (__int64)v5);
  return result;
}

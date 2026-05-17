/*
 * XREFs of RtlpHpTlLogGCScheduled @ 0x180118744
 * Callers:
 *     RtlpHpScheduleCompaction @ 0x180034544 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800347C0 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007C4B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTlLogGCScheduled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_18017E358 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18017E358, byte_18014AF09, a3, a4, 2, (__int64)v5);
  return result;
}

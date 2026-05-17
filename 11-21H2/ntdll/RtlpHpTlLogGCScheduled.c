/*
 * XREFs of RtlpHpTlLogGCScheduled @ 0x180118348
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x18001816C (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpScheduleCompaction @ 0x18001B788 (RtlpHpScheduleCompaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180004EA0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTlLogGCScheduled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_180174430 > 5 )
    return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_180174430, byte_180141E00, a3, a4, 2, (__int64)v5);
  return result;
}

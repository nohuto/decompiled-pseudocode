/*
 * XREFs of McTemplateU0xxf_EventWriteTransfer @ 0x1801310B4
 * Callers:
 *     ?TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ @ 0x180049BC0 (-TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 McTemplateU0xxf_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _QWORD v4[10]; // [rsp+30h] [rbp-11h] BYREF
  __int64 v5; // [rsp+B8h] [rbp+77h] BYREF
  va_list va; // [rsp+B8h] [rbp+77h]
  va_list va1; // [rsp+C0h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, _QWORD);
  v4[0] = 1LL;
  v4[4] = v4;
  v4[5] = 8LL;
  va_copy((va_list)&v4[6], va);
  v4[7] = 8LL;
  va_copy((va_list)&v4[8], va1);
  v4[9] = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_PRESENT_STATS_DELTAS);
}

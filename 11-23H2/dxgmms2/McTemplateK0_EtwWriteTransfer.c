/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x1C003DBA0
 * Callers:
 *     VidSchEnableLatencyToleranceTimer @ 0x1C0016CB0 (VidSchEnableLatencyToleranceTimer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019900 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001BD6C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 1u, &v4);
}

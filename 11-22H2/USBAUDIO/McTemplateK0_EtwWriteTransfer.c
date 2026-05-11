/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x1C00098DC
 * Callers:
 *     DeviceStart @ 0x1C002A450 (DeviceStart.c)
 *     DeviceStop @ 0x1C002AA30 (DeviceStop.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0009508 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0009730 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(a1, a2, a3, 1u, &v4);
}

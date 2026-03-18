/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x14055493C
 * Callers:
 *     PiSwIrpStartCreate @ 0x14081ABD8 (PiSwIrpStartCreate.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403C42C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(a1, a2, 0LL, 1u, &v3);
}

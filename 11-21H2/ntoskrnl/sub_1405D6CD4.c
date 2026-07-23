/*
 * XREFs of sub_1405D6CD4 @ 0x1405D6CD4
 * Callers:
 *     sub_140A51F50 @ 0x140A51F50 (sub_140A51F50.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 */

NTSTATUS __fastcall sub_1405D6CD4(void *a1, struct _IO_STATUS_BLOCK *a2)
{
  _QWORD v3[2]; // [rsp+50h] [rbp-28h] BYREF
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  v3[0] = 0LL;
  v3[1] = 0LL;
  v5 = -1;
  v4 = 1;
  return ZwDeviceIoControlFile(a1, 0LL, 0LL, 0LL, a2, 0x53C000u, v3, 0x18u, 0LL, 0);
}

/*
 * XREFs of McTemplateK0qqq_EtwWriteTransfer @ 0x1C000F038
 * Callers:
 *     PmEtwControlComplete @ 0x1C001E574 (PmEtwControlComplete.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0008518 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqq_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v8 = &v14;
  v9 = 4LL;
  v10 = &a5;
  v12 = &a6;
  v11 = 4LL;
  v13 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(a1, &ControlComplete, a3, 4u, &v7);
}

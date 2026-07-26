/*
 * XREFs of McTemplateK0qxq_EtwWriteTransfer @ 0x1C00ABE30
 * Callers:
 *     ndisTracePeriodicReceivesEnd @ 0x1C00ABB44 (ndisTracePeriodicReceivesEnd.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00069F8 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qxq_EtwWriteTransfer(__int64 a1, __int64 a2, const GUID *a3, int a4, char a5, char a6)
{
  _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v11 = 8LL;
  v9 = 4LL;
  v8 = &v14;
  v13 = 4LL;
  v10 = &a5;
  v12 = &a6;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &QueuedReceiveEnd, a3, 4u, &v7);
}

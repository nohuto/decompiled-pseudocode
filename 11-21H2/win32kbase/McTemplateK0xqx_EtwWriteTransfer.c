/*
 * XREFs of McTemplateK0xqx_EtwWriteTransfer @ 0x1C0151B44
 * Callers:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0029830 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0047300 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0xqx_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, _DWORD a3, __int64 a4, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v6; // [rsp+40h] [rbp-40h]
  __int64 v7; // [rsp+48h] [rbp-38h]
  va_list v8; // [rsp+50h] [rbp-30h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  va_list v10; // [rsp+60h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va; // [rsp+B0h] [rbp+30h]
  va_list va1; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v13 = va_arg(va1, _QWORD);
  v12 = a4;
  v7 = 8LL;
  v6 = &v12;
  v11 = 8LL;
  va_copy(v8, va);
  v9 = 4LL;
  va_copy(v10, va1);
  return McGenEventWrite_EtwWriteTransfer(a1, a2, &W32kControlGuid, 4u, &v5);
}

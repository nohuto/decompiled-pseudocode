/*
 * XREFs of sub_1C003275C @ 0x1C003275C
 * Callers:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 *     sub_1C0016374 @ 0x1C0016374 (sub_1C0016374.c)
 *     sub_1C00266DA @ 0x1C00266DA (sub_1C00266DA.c)
 *     sub_1C003746C @ 0x1C003746C (sub_1C003746C.c)
 *     sub_1C0037500 @ 0x1C0037500 (sub_1C0037500.c)
 *     sub_1C00A0950 @ 0x1C00A0950 (sub_1C00A0950.c)
 *     sub_1C00A127C @ 0x1C00A127C (sub_1C00A127C.c)
 *     sub_1C00A2E7C @ 0x1C00A2E7C (sub_1C00A2E7C.c)
 *     sub_1C00A6450 @ 0x1C00A6450 (sub_1C00A6450.c)
 *     sub_1C00A73E4 @ 0x1C00A73E4 (sub_1C00A73E4.c)
 *     sub_1C00A7DD8 @ 0x1C00A7DD8 (sub_1C00A7DD8.c)
 *     sub_1C00A7E78 @ 0x1C00A7E78 (sub_1C00A7E78.c)
 *     sub_1C00A82EC @ 0x1C00A82EC (sub_1C00A82EC.c)
 *     sub_1C00A85AC @ 0x1C00A85AC (sub_1C00A85AC.c)
 *     sub_1C00AA9E0 @ 0x1C00AA9E0 (sub_1C00AA9E0.c)
 *     sub_1C00AB210 @ 0x1C00AB210 (sub_1C00AB210.c)
 *     sub_1C00AB32C @ 0x1C00AB32C (sub_1C00AB32C.c)
 *     sub_1C00AB718 @ 0x1C00AB718 (sub_1C00AB718.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS sub_1C003275C(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return sub_1C001579C(a1, a2, a3, 3u, &v4);
}

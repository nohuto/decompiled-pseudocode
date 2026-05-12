/*
 * XREFs of sub_1C00441C8 @ 0x1C00441C8
 * Callers:
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 *     sub_1C0015240 @ 0x1C0015240 (sub_1C0015240.c)
 *     sub_1C00203B0 @ 0x1C00203B0 (sub_1C00203B0.c)
 *     sub_1C0020470 @ 0x1C0020470 (sub_1C0020470.c)
 *     sub_1C0045184 @ 0x1C0045184 (sub_1C0045184.c)
 *     StorPortPause @ 0x1C0046980 (StorPortPause.c)
 *     sub_1C004E020 @ 0x1C004E020 (sub_1C004E020.c)
 *     sub_1C004E0D0 @ 0x1C004E0D0 (sub_1C004E0D0.c)
 *     sub_1C004E400 @ 0x1C004E400 (sub_1C004E400.c)
 *     sub_1C004E4D0 @ 0x1C004E4D0 (sub_1C004E4D0.c)
 *     sub_1C004E9A0 @ 0x1C004E9A0 (sub_1C004E9A0.c)
 *     sub_1C004ECEC @ 0x1C004ECEC (sub_1C004ECEC.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS sub_1C00441C8(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  v10 = 4LL;
  va_copy(v7, va1);
  va_copy(v9, va2);
  return sub_1C001579C(a1, a2, 0LL, 4u, &v4);
}

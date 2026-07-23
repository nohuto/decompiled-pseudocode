/*
 * XREFs of sub_1405FB5C0 @ 0x1405FB5C0
 * Callers:
 *     sub_1405FA31C @ 0x1405FA31C (sub_1405FA31C.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS sub_1405FB5C0(REGHANDLE *a1, __int64 a2, ...)
{
  REGHANDLE v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+40h] [rbp-38h] BYREF
  va_list v5; // [rsp+50h] [rbp-28h]
  __int64 v6; // [rsp+58h] [rbp-20h]
  __int64 v7; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+18h]
  va_list va1; // [rsp+98h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v7 = va_arg(va1, _QWORD);
  v2 = *a1;
  va_copy((va_list)v4.Ptr, va);
  va_copy(v5, va1);
  *(_QWORD *)&v4.Size = 8LL;
  v6 = 8LL;
  return EtwWriteEx(v2, (PCEVENT_DESCRIPTOR)qword_140039A50, 0LL, 1u, 0LL, 0LL, 2u, &v4);
}

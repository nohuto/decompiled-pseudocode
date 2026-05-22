/*
 * XREFs of McTemplateU0xxx_EventWriteTransfer @ 0x18019BB34
 * Callers:
 *     ?Destroy@ExpressionAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x180028970 (-Destroy@ExpressionAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?ReleaseResources@ExpressionAnimator@Composition@UI@Windows@@AEAAXXZ @ 0x18019BAE0 (-ReleaseResources@ExpressionAnimator@Composition@UI@Windows@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800E5E3C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG McTemplateU0xxx_EventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-50h] BYREF
  va_list v4; // [rsp+40h] [rbp-40h]
  __int64 v5; // [rsp+48h] [rbp-38h]
  va_list v6; // [rsp+50h] [rbp-30h]
  __int64 v7; // [rsp+58h] [rbp-28h]
  va_list v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  va_list va; // [rsp+A0h] [rbp+20h]
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  va_list va1; // [rsp+A8h] [rbp+28h]
  va_list va2; // [rsp+B0h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v5 = 8LL;
  va_copy(v4, va);
  v7 = 8LL;
  va_copy(v6, va1);
  v9 = 8LL;
  va_copy(v8, va2);
  return McGenEventWrite_EventWriteTransfer(a1, (const EVENT_DESCRIPTOR *)"E", v11, 4u, &v3);
}

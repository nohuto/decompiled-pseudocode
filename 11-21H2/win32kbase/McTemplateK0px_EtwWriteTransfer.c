/*
 * XREFs of McTemplateK0px_EtwWriteTransfer @ 0x1C015075C
 * Callers:
 *     EtwDwmSpriteLogicalSurfBindEvent @ 0x1C00B7CF0 (EtwDwmSpriteLogicalSurfBindEvent.c)
 *     EtwDwmSpriteLogicalSurfUnBindEvent @ 0x1C00BA3C0 (EtwDwmSpriteLogicalSurfUnBindEvent.c)
 *     EtwDwmSpriteCreateEvent @ 0x1C00BA8A0 (EtwDwmSpriteCreateEvent.c)
 *     EtwDwmSpriteDestroyEvent @ 0x1C00BBA10 (EtwDwmSpriteDestroyEvent.c)
 *     EtwLogicalSurfPhysSurfBindEvent @ 0x1C00BC950 (EtwLogicalSurfPhysSurfBindEvent.c)
 *     EtwLogicalSurfEnableDirtyNotificationEvent @ 0x1C00BC9F0 (EtwLogicalSurfEnableDirtyNotificationEvent.c)
 *     EtwLogicalSurfPhysSurfUnbindEvent @ 0x1C00BCEA0 (EtwLogicalSurfPhysSurfUnbindEvent.c)
 *     EtwBindSwapChain @ 0x1C00D0570 (EtwBindSwapChain.c)
 *     EtwTraceFlipManagerContentUnbind @ 0x1C014D150 (EtwTraceFlipManagerContentUnbind.c)
 *     EtwTraceTokenManagerDisableScanoutToken @ 0x1C014E780 (EtwTraceTokenManagerDisableScanoutToken.c)
 *     EtwTraceTransformAgeDecay @ 0x1C014EE60 (EtwTraceTransformAgeDecay.c)
 *     EtwBindLogicalSurfaceRHEvent @ 0x1C0178640 (EtwBindLogicalSurfaceRHEvent.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0047300 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0px_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
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
  v9 = 8;
  return McGenEventWrite_EtwWriteTransfer(8LL, a2, &W32kControlGuid, 3u, &v4);
}

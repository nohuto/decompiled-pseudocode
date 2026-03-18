/*
 * XREFs of McTemplateK0px_EtwWriteTransfer @ 0x1C013CEE4
 * Callers:
 *     EtwTraceTransformAgeDecay @ 0x1C000F790 (EtwTraceTransformAgeDecay.c)
 *     EtwDwmSpriteLogicalSurfBindEvent @ 0x1C00B8120 (EtwDwmSpriteLogicalSurfBindEvent.c)
 *     EtwDwmSpriteCreateEvent @ 0x1C00B8CC0 (EtwDwmSpriteCreateEvent.c)
 *     EtwDwmSpriteLogicalSurfUnBindEvent @ 0x1C00B9930 (EtwDwmSpriteLogicalSurfUnBindEvent.c)
 *     EtwDwmSpriteDestroyEvent @ 0x1C00BCAB0 (EtwDwmSpriteDestroyEvent.c)
 *     EtwLogicalSurfPhysSurfBindEvent @ 0x1C00BD160 (EtwLogicalSurfPhysSurfBindEvent.c)
 *     EtwLogicalSurfEnableDirtyNotificationEvent @ 0x1C00BD180 (EtwLogicalSurfEnableDirtyNotificationEvent.c)
 *     EtwLogicalSurfPhysSurfUnbindEvent @ 0x1C00BE7D0 (EtwLogicalSurfPhysSurfUnbindEvent.c)
 *     EtwTraceFlipManagerContentUnbind @ 0x1C01397F0 (EtwTraceFlipManagerContentUnbind.c)
 *     EtwTraceTokenManagerDisableScanoutToken @ 0x1C013B200 (EtwTraceTokenManagerDisableScanoutToken.c)
 *     EtwBindLogicalSurfaceRHEvent @ 0x1C016B560 (EtwBindLogicalSurfaceRHEvent.c)
 *     EtwBindSwapChain @ 0x1C016B590 (EtwBindSwapChain.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0073658 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
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

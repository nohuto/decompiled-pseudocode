/*
 * XREFs of WPP_SF_qL @ 0x180309FCC
 * Callers:
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180037748 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?SendConsolidated@CTaskWindow@@UEAAXW4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x18003D9A0 (-SendConsolidated@CTaskWindow@@UEAAXW4WINDOW_CONSOLIDATED_FLAGS@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_qL(TRACEHANDLE a1, USHORT a2, const GUID *a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return TraceMessage(a1, 0x2Bu, a3, a2, va, 8LL, va1, 4LL, 0LL);
}

/*
 * XREFs of USBHwGetCurrentFrame @ 0x1C0002ED4
 * Callers:
 *     UsbHwFrameCountTimestamp @ 0x1C0003148 (UsbHwFrameCountTimestamp.c)
 *     USBType1ProcessStreamPointer @ 0x1C0005024 (USBType1ProcessStreamPointer.c)
 *     USBType1RenderBytePosition @ 0x1C00051A0 (USBType1RenderBytePosition.c)
 *     USBCaptureBytePosition @ 0x1C0005F20 (USBCaptureBytePosition.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall USBHwGetCurrentFrame(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 56LL);
  if ( !v3 )
    return 3221225659LL;
  result = (*(__int64 (__fastcall **)(_QWORD, int *))(v3 + 40))(*(_QWORD *)(v3 + 8), &v5);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v5;
  }
  return result;
}

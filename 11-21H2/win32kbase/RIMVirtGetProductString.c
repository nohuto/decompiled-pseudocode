/*
 * XREFs of RIMVirtGetProductString @ 0x1C01970CC
 * Callers:
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     wcscmp_0 @ 0x1C00DD7E3 (wcscmp_0.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall RIMVirtGetProductString(__int64 a1, const UNICODE_STRING *a2)
{
  PVOID v2; // rsi
  unsigned __int64 MaximumLength; // rdx
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 Pool2; // rbx
  char v10; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = gpLeakTrackingAllocator;
  MaximumLength = a2[38].MaximumLength;
  v6 = -1073741811;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x77647352) != 0x77647352
    || (v7 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, MaximumLength);
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 2003071826 )
  {
    if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_5;
  }
  v10 = 0;
  if ( MaximumLength < 0x1000 || (MaximumLength & 0xFFF) != 0 )
  {
    v10 = 1;
    MaximumLength += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, MaximumLength);
  if ( !Pool2 )
    goto LABEL_15;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v2,
           (const void *)Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_6;
    }
LABEL_21:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_15:
    Pool2 = 0LL;
    goto LABEL_6;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v2,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_21;
LABEL_6:
  *(_QWORD *)(a1 + 376) = Pool2;
  if ( Pool2 )
  {
    *(_WORD *)(a1 + 370) = a2[38].MaximumLength;
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 368), a2 + 38);
    if ( !wcscmp_0(*(const wchar_t **)(a1 + 376), L"VHidPen") )
      *(_DWORD *)(a1 + 360) |= 0x4000u;
    return 0;
  }
  return v6;
}

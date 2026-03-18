/*
 * XREFs of ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0009F64
 * Callers:
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C005ADDC (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1C000CCC0 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000E0C8 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::Create(
        struct DirectComposition::CConnection *a1,
        struct DirectComposition::CSystemChannel **a2)
{
  PVOID v2; // rdi
  int v5; // edi
  __int64 v7; // rax
  __int64 Pool2; // rbx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63734344) != 0x63734344
    || (v7 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_11:
    Pool2 = ExAllocatePool2(260LL, 1824LL);
LABEL_3:
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1668498244 )
  {
    if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_11;
  }
  Pool2 = ExAllocatePool2(260LL, 1840LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v2,
                             Pool2,
                             BackTrace) )
      goto LABEL_15;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v2,
                           Pool2,
                           BackTrace) )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)-1073741801;
  }
LABEL_4:
  DirectComposition::CApplicationChannel::CApplicationChannel((DirectComposition::CApplicationChannel *)Pool2, a1, 0, 0);
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)Pool2 = &DirectComposition::CSystemChannel::`vftable';
  v5 = DirectComposition::CApplicationChannel::Initialize((DirectComposition::CApplicationChannel *)Pool2, 0LL, 0LL);
  if ( v5 < 0 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)Pool2 + 32LL))(Pool2, 1LL);
  else
    *a2 = (struct DirectComposition::CSystemChannel *)Pool2;
  return (unsigned int)v5;
}

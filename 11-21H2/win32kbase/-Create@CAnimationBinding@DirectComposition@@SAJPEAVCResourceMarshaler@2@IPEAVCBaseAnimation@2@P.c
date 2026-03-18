/*
 * XREFs of ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C0084320
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C008418C (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C00843B0 (-Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimati.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CAnimationBinding::Create(
        struct DirectComposition::CResourceMarshaler *a1,
        unsigned int a2,
        struct DirectComposition::CBaseAnimation *a3,
        struct DirectComposition::CAnimationBinding **a4)
{
  PVOID v4; // rdi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 Pool2; // rbx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x62614344) == 0x62614344
    && (v10 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1650541380 )
    {
      if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_9;
    }
    Pool2 = ExAllocatePool2(261LL, 64LL);
    if ( !Pool2 )
      return 3221225495LL;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v4,
                               Pool2,
                               BackTrace) )
        goto LABEL_13;
      Pool2 += 16LL;
    }
    else if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v4,
                                  Pool2,
                                  BackTrace) )
    {
LABEL_13:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return 3221225495LL;
    }
  }
  else
  {
LABEL_9:
    Pool2 = ExAllocatePool2(261LL, 48LL);
  }
  if ( Pool2 )
  {
    DirectComposition::CAnimationBinding::Initialize((DirectComposition::CAnimationBinding *)Pool2, a1, a2, a3);
    result = 0LL;
    *a4 = (struct DirectComposition::CAnimationBinding *)Pool2;
    return result;
  }
  return 3221225495LL;
}

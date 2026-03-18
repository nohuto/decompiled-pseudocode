/*
 * XREFs of ?Add@?$CStructDynamicArray@UInjectManipulationArgs@@@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1C021A35C
 * Callers:
 *     ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C021A9E0 (-SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?Grow@?$CDynamicArray@PEAUtagHPD_ACTIVE_DEVICE@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C018ED5C (-Grow@-$CDynamicArray@PEAUtagHPD_ACTIVE_DEVICE@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall CStructDynamicArray<InjectManipulationArgs>::Add(__int64 a1, _OWORD *a2)
{
  int v2; // edi
  PVOID v5; // rbp
  __int64 v6; // rax
  __int64 Pool2; // rbx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 12)
    || (v2 = CDynamicArray<tagHPD_ACTIVE_DEVICE *,2003858261>::Grow(a1), v2 >= 0) )
  {
    if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
      return (unsigned int)-1073741823;
    v5 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x32644344) == 0x32644344
      && (v6 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 845431620 )
      {
        if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_9;
      }
      Pool2 = ExAllocatePool2(260LL, 144LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v5,
               Pool2,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_15;
        }
        goto LABEL_19;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v5,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_19:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return (unsigned int)-1073741801;
      }
      Pool2 += 16LL;
    }
    else
    {
LABEL_9:
      Pool2 = ExAllocatePool2(260LL, 128LL);
    }
    if ( Pool2 )
    {
LABEL_15:
      *(_OWORD *)Pool2 = *a2;
      *(_OWORD *)(Pool2 + 16) = a2[1];
      *(_OWORD *)(Pool2 + 32) = a2[2];
      *(_OWORD *)(Pool2 + 48) = a2[3];
      *(_OWORD *)(Pool2 + 64) = a2[4];
      *(_OWORD *)(Pool2 + 80) = a2[5];
      *(_OWORD *)(Pool2 + 96) = a2[6];
      *(_OWORD *)(Pool2 + 112) = a2[7];
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 8))++) = Pool2;
      return (unsigned int)v2;
    }
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v2;
}

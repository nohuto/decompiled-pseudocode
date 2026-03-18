/*
 * XREFs of AllocThreadBufferWithTag @ 0x1C0081F60
 * Callers:
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00CD710 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C00CDD80 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall AllocThreadBufferWithTag(unsigned int a1, int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // ecx
  PVOID v6; // rbp
  __int64 v7; // r9
  __int64 Pool2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  unsigned int v13; // ecx
  __int64 v14; // rax
  char v15; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( a1 < 0xFFFFEFDF )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v13 = a1 + 32;
      if ( v13 > 0x400 && v13 + 4096 >= v13 )
        v13 = (v13 + 4095) & 0xFFFFF000;
      a1 = v13 - 32;
    }
    v5 = a1 + 32;
    if ( v5 )
    {
      v6 = gpLeakTrackingAllocator;
      v7 = v5;
      if ( (a2 & *((_DWORD *)gpLeakTrackingAllocator + 10)) != a2
        || (v14 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
LABEL_5:
        Pool2 = ExAllocatePool2(262LL, v5);
        goto LABEL_6;
      }
      while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != a2 )
      {
        if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_5;
      }
      v15 = 0;
      if ( v5 < 0x1000uLL || (v5 & 0xFFF) != 0 )
      {
        v15 = 1;
        v7 = v5 + 16LL;
      }
      Pool2 = ExAllocatePool2(262LL, v7);
      if ( Pool2 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v6,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_6;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v6,
                                     Pool2,
                                     BackTrace) )
        {
LABEL_6:
          if ( Pool2 )
          {
            v4 = Pool2 + 32;
            KeEnterCriticalRegion();
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( ThreadWin32Thread )
              v3 = *ThreadWin32Thread;
            *(_QWORD *)(Pool2 + 16) = v4;
            *(_QWORD *)(Pool2 + 24) = FreeThreadBufferWithTag;
            if ( v3 )
            {
              v10 = *(_QWORD *)(v3 + 88);
              v11 = (__int64 *)(v3 + 88);
              if ( *(_QWORD *)(v10 + 8) != v3 + 88 )
                __fastfail(3u);
              *(_QWORD *)Pool2 = v10;
              *(_QWORD *)(Pool2 + 8) = v11;
              *(_QWORD *)(v10 + 8) = Pool2;
              *v11 = Pool2;
            }
            else
            {
              *(_QWORD *)(Pool2 + 8) = Pool2;
              *(_QWORD *)Pool2 = Pool2;
            }
            KeLeaveCriticalRegion();
          }
          return v4;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
    }
  }
  return v4;
}

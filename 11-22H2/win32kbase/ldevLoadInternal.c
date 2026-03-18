/*
 * XREFs of ldevLoadInternal @ 0x1C0016680
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00176EC (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, __int128 *), int a2)
{
  __int64 v4; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  int v6; // eax
  __int64 Pool2; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  struct _ERESOURCE *v11; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r10
  __int64 v15; // [rsp+20h] [rbp-99h] BYREF
  __int128 v16; // [rsp+30h] [rbp-89h] BYREF
  __int64 v17; // [rsp+40h] [rbp-79h] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v19; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v20; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)(SGDGetSessionState() + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16LL);
  v5 = gpLeakTrackingAllocator;
  v19 = 1986292807;
  v15 = 260LL;
  v17 = 904LL;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 904LL, 1986292807LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
    goto LABEL_4;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      v20 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76646C47u, &v20) )
      {
        *(_QWORD *)&v16 = &v15;
        *((_QWORD *)&v16 + 1) = &v19;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v5,
                  &v16,
                  &v17);
        goto LABEL_4;
      }
      Pool2 = ExAllocatePool2(v14, 920LL, 1986292807LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v5,
                                  Pool2,
                                  v20,
                                  BackTrace) )
          {
            v8 = Pool2;
            goto LABEL_5;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v5,
                                     Pool2,
                                     v20,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_29:
    v8 = 0LL;
    goto LABEL_10;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76646C47u) )
    goto LABEL_29;
  v13 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, 920LL, v19);
  Pool2 = (__int64)v13;
  if ( !v13
    || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
        *v13 = 1986292807LL,
        Pool2 = (__int64)(v13 + 2),
        v13 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v5 + 1),
      (const void *)0x76646C47);
  }
LABEL_4:
  v8 = Pool2;
  if ( !Pool2 )
    goto LABEL_10;
LABEL_5:
  *(_DWORD *)(Pool2 + 60) = 0;
  *(_QWORD *)(Pool2 + 896) = Pool2 + 64;
  v16 = 0LL;
  if ( !a1(196865LL, 16LL, &v16) || !(unsigned int)ldevFillTable(Pool2, &v16) )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
    goto LABEL_29;
  }
  *(_DWORD *)(Pool2 + 24) = a2;
  *(_DWORD *)(Pool2 + 28) = 1;
  v9 = *(_QWORD *)(v4 + 1888);
  if ( v9 )
    *(_QWORD *)(v9 + 8) = Pool2;
  v10 = *(_QWORD *)(v4 + 1888);
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)Pool2 = v10;
  *(_QWORD *)(v4 + 1888) = Pool2;
  *(_QWORD *)(Pool2 + 16) = 0LL;
LABEL_10:
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
  v11 = *(struct _ERESOURCE **)(v4 + 8);
  if ( v11 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v11);
    PsLeavePriorityRegion();
  }
  return v8;
}

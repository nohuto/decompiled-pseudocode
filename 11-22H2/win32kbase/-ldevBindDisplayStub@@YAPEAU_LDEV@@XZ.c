/*
 * XREFs of ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C00175BC
 * Callers:
 *     ldevLoadDriver @ 0x1C0017300 (ldevLoadDriver.c)
 * Callees:
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00176EC (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

struct _LDEV *ldevBindDisplayStub(void)
{
  __int64 v0; // rsi
  __int64 i; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  int v3; // eax
  __int64 Pool2; // rbx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // [rsp+20h] [rbp-79h] BYREF
  unsigned int *v12; // [rsp+28h] [rbp-71h]
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v14; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v15; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+110h] [rbp+77h] BYREF
  __int64 v17; // [rsp+118h] [rbp+7Fh] BYREF

  v0 = *(_QWORD *)(SGDGetSessionState() + 24);
  for ( i = *(_QWORD *)(v0 + 1888); i; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 32) & 8) != 0 )
    {
      ++*(_DWORD *)(i + 28);
      return (struct _LDEV *)i;
    }
  }
  v2 = gpLeakTrackingAllocator;
  v14 = 1986292807;
  v16 = 260LL;
  v17 = 904LL;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 904LL, 1986292807LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    goto LABEL_8;
  }
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76646C47u, &v15) )
      {
        v11 = (__int64)&v16;
        v12 = &v14;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v2,
                  &v11,
                  &v17);
        goto LABEL_8;
      }
      Pool2 = ExAllocatePool2(v10, 920LL, 1986292807LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v2,
                                  Pool2,
                                  v15,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_8;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v2,
                                     Pool2,
                                     v15,
                                     BackTrace) )
        {
          i = Pool2;
          goto LABEL_9;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76646C47u) )
    return 0LL;
  v9 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, 920LL, v14);
  Pool2 = (__int64)v9;
  if ( !v9
    || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
        *v9 = 1986292807LL,
        Pool2 = (__int64)(v9 + 2),
        v9 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      (const void *)0x76646C47);
  }
LABEL_8:
  i = Pool2;
  if ( !Pool2 )
    return (struct _LDEV *)i;
LABEL_9:
  v5 = *(_DWORD *)(Pool2 + 32);
  *(_DWORD *)(Pool2 + 60) = 0;
  *(_DWORD *)(Pool2 + 24) = 1;
  *(_DWORD *)(Pool2 + 32) = v5 | 0xA;
  *(_DWORD *)(Pool2 + 28) = 1;
  *(_QWORD *)(Pool2 + 896) = Pool2 + 64;
  v12 = (unsigned int *)&unk_1C0242D50;
  v11 = 0x1000030100LL;
  if ( !(unsigned int)ldevFillTable(Pool2, &v11) )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
    return 0LL;
  }
  v6 = *(_QWORD *)(v0 + 1888);
  if ( v6 )
    *(_QWORD *)(v6 + 8) = Pool2;
  v7 = *(_QWORD *)(v0 + 1888);
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)Pool2 = v7;
  *(_QWORD *)(v0 + 1888) = Pool2;
  return (struct _LDEV *)i;
}

/*
 * XREFs of ProcessorAddInstance @ 0x1C009DCC0
 * Callers:
 *     ProcessorpAddInstanceCallback @ 0x1C006CA20 (ProcessorpAddInstanceCallback.c)
 *     IrqLibpParseMadt @ 0x1C00BE180 (IrqLibpParseMadt.c)
 * Callees:
 *     ProcessorpIndexInstance @ 0x1C009DE1C (ProcessorpIndexInstance.c)
 *     ProcessorpReserveUnownedRanges @ 0x1C009DFC0 (ProcessorpReserveUnownedRanges.c)
 */

__int64 __fastcall ProcessorAddInstance(unsigned int a1, int a2)
{
  unsigned int v3; // r14d
  ULONG ProcessorIndexFromNumber; // eax
  ULONG v5; // edi
  __int64 v6; // rbp
  __int64 Pool2; // rbx
  int v8; // esi
  unsigned int v9; // edi
  bool v10; // cc
  void *v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v3 = a1;
  if ( IrqLibInterruptModel == 1 )
  {
    if ( (int)HalGetInterruptTargetInformation(0LL, a1, &v13) < 0 )
      return 0LL;
    ProcNumber = (struct _PROCESSOR_NUMBER)DWORD1(v13);
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
    v5 = ProcessorIndexFromNumber;
    if ( a2 != -1 && ProcessorIndexFromNumber != a2 )
      return 3221225496LL;
  }
  else
  {
    v3 = 0;
    v5 = 0;
    ProcNumber = 0;
  }
  v6 = v5;
  if ( *((_QWORD *)ProcessorByNtNumber + v5) )
    return 0LL;
  Pool2 = ExAllocatePool2(256LL, 112LL, 1232102209LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(struct _PROCESSOR_NUMBER *)(Pool2 + 104) = ProcNumber;
  RtlInitializeRangeList((PRTL_RANGE_LIST)Pool2);
  RtlInitializeRangeList((PRTL_RANGE_LIST)(Pool2 + 32));
  v8 = ProcessorpReserveUnownedRanges((PRTL_RANGE_LIST)Pool2);
  if ( v8 < 0 )
    goto LABEL_19;
  if ( IrqLibInterruptModel == 1 )
  {
    *(_DWORD *)(Pool2 + 64) = v3;
    *(_OWORD *)(Pool2 + 68) = v13;
    *(_QWORD *)(Pool2 + 84) = v14;
  }
  v8 = ProcessorpIndexInstance(v5, &v13);
  if ( v8 < 0 )
  {
LABEL_19:
    v12 = (void *)*((_QWORD *)ProcessorByNtNumber + v5);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)ProcessorByNtNumber + v5) = 0LL;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  else
  {
    v9 = v5 + 1;
    v10 = ProcessorInstanceCount <= v9;
    *((_QWORD *)ProcessorByNtNumber + v6) = Pool2;
    if ( v10 )
      ProcessorInstanceCount = v9;
    return 0;
  }
  return (unsigned int)v8;
}

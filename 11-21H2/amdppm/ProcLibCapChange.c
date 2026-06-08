/*
 * XREFs of ProcLibCapChange @ 0x1C002B85C
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0004390 (EvtDeviceD0Entry.c)
 *     PccCapWorker @ 0x1C000B1E0 (PccCapWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C00230F0 (CpcGuaranteedNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C0028380 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C0029480 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C003A100 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     QueueCapTrace @ 0x1C002CF58 (QueueCapTrace.c)
 */

__int64 __fastcall ProcLibCapChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  bool v10; // zf

  result = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(a1 + 744);
  if ( v9 )
  {
    if ( !a2 && !a3 && a4 == 100 )
    {
      result = MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 752) += MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 744) = 0LL;
    }
  }
  else if ( a2 || a3 || a4 < 0x64 )
  {
    v10 = *(_BYTE *)(a1 + 924) == 0;
    *(_QWORD *)(a1 + 744) = MEMORY[0xFFFFF78000000014];
    if ( v10 )
      result = QueueCapTrace(a1 + 776, 300LL);
    if ( !*(_BYTE *)(a1 + 1076) )
      result = QueueCapTrace(a1 + 928, 86400LL);
  }
  if ( a2 != *(_DWORD *)(a1 + 464) )
  {
    ++*(_DWORD *)(a1 + 760);
    *(_DWORD *)(a1 + 464) = a2;
  }
  if ( a3 != *(_DWORD *)(a1 + 512) )
  {
    ++*(_DWORD *)(a1 + 764);
    *(_DWORD *)(a1 + 512) = a3;
  }
  if ( a4 != *(_DWORD *)(a1 + 740) )
  {
    ++*(_DWORD *)(a1 + 768);
    *(_DWORD *)(a1 + 740) = a4;
  }
  return result;
}

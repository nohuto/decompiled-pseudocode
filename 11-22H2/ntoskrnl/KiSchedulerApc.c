/*
 * XREFs of KiSchedulerApc @ 0x14030A830
 * Callers:
 *     <none>
 * Callees:
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KiHandleDeferredPreemption @ 0x140309098 (KiHandleDeferredPreemption.c)
 *     KiIsProcessTerminationRequested @ 0x140309878 (KiIsProcessTerminationRequested.c)
 *     KiInsertQueueApc @ 0x14030A03C (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14030B1D8 (KiSignalThreadForApc.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveQueueApc @ 0x140361DDC (KiRemoveQueueApc.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     DbgkForwardException @ 0x140939614 (DbgkForwardException.c)
 */

unsigned int __fastcall KiSchedulerApc(ULONG_PTR a1)
{
  unsigned int result; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r13d
  int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  unsigned __int8 v12; // si
  struct _KPRCB *v13; // r14
  bool v14; // zf
  __int64 v15; // r8
  _DWORD *v16; // r8
  KPROCESSOR_MODE v17; // si
  __int64 v18; // rcx
  KPROCESSOR_MODE v19; // di
  bool v20; // di
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // rdx
  char v24; // di
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v27; // r9
  int v28; // eax
  unsigned __int8 v29; // di
  _DWORD *v30; // r9
  __int64 v31; // rdx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  __int64 v36; // r8
  int v37; // [rsp+38h] [rbp-89h] BYREF
  int v38; // [rsp+3Ch] [rbp-85h] BYREF
  int v39; // [rsp+40h] [rbp-81h] BYREF
  int v40; // [rsp+44h] [rbp-7Dh] BYREF
  _DWORD v41[40]; // [rsp+48h] [rbp-79h] BYREF

  result = (unsigned int)memset(v41, 0, 0x98uLL);
  v6 = *(_DWORD *)(a1 + 120);
  v37 = 0;
  v7 = v6 & 0x8000;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v7 )
    result = KiHandleDeferredPreemption(a1);
  LODWORD(v8) = 4;
  if ( !*(_DWORD *)(a1 + 740) && !v7 )
  {
    v17 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v18 = *(_QWORD *)(a1 + 144);
      if ( v18 )
      {
        --*(_WORD *)(a1 + 486);
        v19 = *(_BYTE *)(v18 + 368) & 1;
        v14 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
        v17 = v19;
        if ( v14 && *(_QWORD *)(a1 + 152) != a1 + 152 )
          KiCheckForKernelApcDelivery(v18, v3, v4, v5);
      }
    }
    v20 = (*(_BYTE *)(a1 + 194) & 2) != 0;
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v23) = 4;
        else
          v23 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v23;
      }
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v38);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v24 = *(_BYTE *)(a1 + 194);
      *(_BYTE *)(a1 + 194) = v24 & 0xFD;
      v20 = (v24 & 2) != 0;
      *(_QWORD *)(a1 + 64) = 0LL;
      if ( (_DWORD)KiIrqlFlags )
      {
        v25 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v27 = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    result = KeWaitForSingleObject((PVOID)(a1 + 736), Suspended, v17, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v20 )
    {
      v29 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v29 <= 0xFu )
      {
        v30 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v29 == 2 )
          LODWORD(v31) = 4;
        else
          v31 = (-1LL << (v29 + 1)) & 4;
        v30[5] |= v31;
      }
      v39 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v39);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) |= 2u;
      *(_QWORD *)(a1 + 64) = 0LL;
      if ( (_DWORD)KiIrqlFlags )
      {
        v32 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v32 <= 0xFu && v29 <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (v29 + 1));
          v14 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
      result = v29;
      __writecr8(v29);
    }
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v7 )
  {
    if ( KiIsProcessTerminationRequested(a1, &v37) )
    {
      LOBYTE(v10) = 1;
      v41[0] = v37;
      LOBYTE(v9) = 1;
      v41[1] = 1;
      DbgkForwardException(v41, v9, v10);
      LOBYTE(v36) = 1;
      DbgkForwardException(v41, 0LL, v36);
    }
    v11 = a1 + 648;
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
    {
      v16 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v12 != 2 )
        v8 = (-1LL << (v12 + 1)) & 4;
      v16[5] |= v8;
    }
    v13 = KeGetCurrentPrcb();
    v40 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v40);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v14 = *(_BYTE *)(a1 + 730) == 0;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      *(_BYTE *)(a1 + 729) = 1;
      if ( !v14 )
        KiRemoveQueueApc(v11);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(v11);
      LOBYTE(v15) = v12;
      KiSignalThreadForApc(v13, a1 + 648, v15);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    return KiExitDispatcher((__int64)v13, 0, (_PROCESSOR_NUMBER)1, 0, v12);
  }
  return result;
}

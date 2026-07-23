/*
 * XREFs of sub_1403C7678 @ 0x1403C7678
 * Callers:
 *     IoRegisterPriorityCallback @ 0x1403C75D0 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140557E20 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14056A090 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x14056A800 (KeRegisterBoundCallback.c)
 *     DbgkLkmdRegisterCallback @ 0x1408324C0 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x140832590 (PsEstablishWin32Callouts.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140832640 (PsSetLoadImageNotifyRoutineEx.c)
 *     PoRegisterCoalescingCallback @ 0x140832790 (PoRegisterCoalescingCallback.c)
 *     sub_140832884 @ 0x140832884 (sub_140832884.c)
 *     sub_140832928 @ 0x140832928 (sub_140832928.c)
 *     DbgkLkmdUnregisterCallback @ 0x14092B080 (DbgkLkmdUnregisterCallback.c)
 *     PoUnregisterCoalescingCallback @ 0x14098EFE0 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1409B2A60 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409B2B50 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAcquireRundownProtectionEx @ 0x1402F6A40 (ExAcquireRundownProtectionEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1403C7678(signed __int64 *a1, struct _EX_RUNDOWN_REF *a2, __int64 a3)
{
  signed __int64 i; // rbx
  signed __int64 *v7; // rsi
  signed __int64 Count; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // ebx
  signed __int64 v19; // rdx
  signed __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax

  if ( a2 && !ExAcquireRundownProtectionEx(a2, 0x10u) )
    return 0;
  _m_prefetchw(a1);
  for ( i = *a1; (a3 ^ (unsigned __int64)i) <= 0xF; i = v11 )
  {
    v11 = _InterlockedCompareExchange64(a1, ((unsigned __int64)a2 | 0xF) & -(__int64)(a2 != 0LL), i);
    if ( i == v11 )
      break;
  }
  v7 = (signed __int64 *)(i & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (i & 0xFFFFFFFFFFFFFFF0uLL) != a3 )
  {
    if ( a2 )
    {
      _m_prefetchw(a2);
      Count = a2->Count;
      while ( (Count & 1) == 0 )
      {
        v9 = Count;
        Count = _InterlockedCompareExchange64((volatile signed __int64 *)a2, Count - 32, Count);
        if ( v9 == Count )
          return 0;
      }
      v22 = Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFF0uLL) == 16
        && !_interlockedbittestandreset((volatile signed __int32 *)(v22 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v22 + 8), 0, 0);
      }
    }
    return 0;
  }
  if ( v7 )
  {
    v12 = ExAcquireSpinLockExclusive(&dword_140C15878);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C15878);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
    v18 = (i & 0xF) + 1;
    _m_prefetchw(v7);
    v19 = *v7;
    if ( (*v7 & 1) != 0 )
    {
LABEL_25:
      v21 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v21, -(__int64)v18) == v18
        && !_interlockedbittestandreset((volatile signed __int32 *)(v21 + 32), 0) )
      {
        KeSetEvent((PRKEVENT)(v21 + 8), 0, 0);
      }
    }
    else
    {
      while ( 1 )
      {
        v20 = _InterlockedCompareExchange64(v7, v19 - 2 * v18, v19);
        v17 = v19 == v20;
        v19 = v20;
        if ( v17 )
          break;
        if ( (v20 & 1) != 0 )
          goto LABEL_25;
      }
    }
  }
  return 1;
}

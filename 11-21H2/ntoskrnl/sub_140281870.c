/*
 * XREFs of sub_140281870 @ 0x140281870
 * Callers:
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     sub_1403892D0 @ 0x1403892D0 (sub_1403892D0.c)
 *     IoUnregisterPriorityCallback @ 0x140557E20 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14056A090 (KeDeregisterBoundCallback.c)
 *     sub_14056AB60 @ 0x14056AB60 (sub_14056AB60.c)
 *     sub_1405CFA04 @ 0x1405CFA04 (sub_1405CFA04.c)
 *     sub_1406A8F48 @ 0x1406A8F48 (sub_1406A8F48.c)
 *     sub_1406F8074 @ 0x1406F8074 (sub_1406F8074.c)
 *     sub_1406F80E4 @ 0x1406F80E4 (sub_1406F80E4.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_1406F84B0 @ 0x1406F84B0 (sub_1406F84B0.c)
 *     sub_1406F8640 @ 0x1406F8640 (sub_1406F8640.c)
 *     DbgkLkmdRegisterCallback @ 0x1408324C0 (DbgkLkmdRegisterCallback.c)
 *     sub_140832928 @ 0x140832928 (sub_140832928.c)
 *     DbgkLkmdUnregisterCallback @ 0x14092B080 (DbgkLkmdUnregisterCallback.c)
 *     sub_14092B124 @ 0x14092B124 (sub_14092B124.c)
 *     PoUnregisterCoalescingCallback @ 0x14098EFE0 (PoUnregisterCoalescingCallback.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1409B2A60 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409B2B50 (PsRemoveLoadImageNotifyRoutine.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAcquireRundownProtectionEx @ 0x1402F6A40 (ExAcquireRundownProtectionEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

struct _EX_RUNDOWN_REF *__fastcall sub_140281870(signed __int64 *a1)
{
  signed __int64 v2; // rbx
  signed __int64 v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 Count; // rdx
  bool v10; // zf
  signed __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v6 )
        break;
      v2 = v6;
    }
    while ( (v6 & 0xF) != 0 );
  }
  if ( !v2 )
    return 0LL;
  v4 = v2 & 0xF;
  if ( (v2 & 0xF) != 0 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v4 == 1 && ExAcquireRundownProtectionEx(v5, 0xFu) )
    {
      _m_prefetchw(a1);
      v7 = *a1;
      while ( (v7 & 0xF) == 0 )
      {
        if ( v5 != (struct _EX_RUNDOWN_REF *)(v7 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v8 = v7;
        v7 = _InterlockedCompareExchange64(a1, v7 + 15, v7);
        if ( v8 == v7 )
          return v5;
      }
      _m_prefetchw(v5);
      Count = v5->Count;
      if ( (v5->Count & 1) != 0 )
      {
LABEL_18:
        v12 = Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v12 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v12 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, Count - 30, Count);
          v10 = Count == v11;
          Count = v11;
          if ( v10 )
            break;
          if ( (v11 & 1) != 0 )
            goto LABEL_18;
        }
      }
    }
  }
  else
  {
    v13 = ExAcquireSpinLockShared(&dword_140C15878);
    v5 = (struct _EX_RUNDOWN_REF *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v5 && !(unsigned __int8)sub_140347810(*a1 & 0xFFFFFFFFFFFFFFF0uLL) )
      v5 = 0LL;
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C15878);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v10 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v10 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    if ( !v5 )
      return 0LL;
  }
  return v5;
}

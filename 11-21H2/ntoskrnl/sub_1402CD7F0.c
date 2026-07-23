/*
 * XREFs of sub_1402CD7F0 @ 0x1402CD7F0
 * Callers:
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     sub_140333AC0 @ 0x140333AC0 (sub_140333AC0.c)
 *     sub_140365C94 @ 0x140365C94 (sub_140365C94.c)
 *     sub_1407D7B88 @ 0x1407D7B88 (sub_1407D7B88.c)
 *     sub_1407D936C @ 0x1407D936C (sub_1407D936C.c)
 *     sub_1407E5390 @ 0x1407E5390 (sub_1407E5390.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAcquireRundownProtectionEx @ 0x1402F6A40 (ExAcquireRundownProtectionEx.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

struct _EX_RUNDOWN_REF *__fastcall sub_1402CD7F0(__int64 a1)
{
  signed __int64 v2; // r8
  struct _EX_RUNDOWN_REF *v3; // rbx
  unsigned int v5; // r8d
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  signed __int64 v8; // rax
  char v9; // bp
  unsigned __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  signed __int64 Count; // rdx
  signed __int64 v17; // rax
  unsigned __int64 v18; // rdx

  _m_prefetchw((const void *)(a1 + 1536));
  v2 = *(_QWORD *)(a1 + 1536);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1536), v2 - 1, v2);
      if ( v2 == v8 )
        break;
      v2 = v8;
    }
    while ( (v8 & 0xF) != 0 );
  }
  v3 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    return v3;
  v5 = v2 & 0xF;
  if ( v5 > 1 )
    return v3;
  if ( v5 )
  {
    if ( ExAcquireRundownProtectionEx(v3 + 45, 0xFu) )
    {
      _m_prefetchw((const void *)(a1 + 1536));
      v6 = *(_QWORD *)(a1 + 1536);
      while ( (v6 & 0xF) == 0 )
      {
        if ( v3 != (struct _EX_RUNDOWN_REF *)(v6 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1536), v6 + 15, v6);
        if ( v7 == v6 )
          return v3;
      }
      _m_prefetchw(&v3[45]);
      Count = v3[45].Count;
      if ( (Count & 1) != 0 )
      {
LABEL_30:
        v18 = Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v18 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v18 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)&v3[45], Count - 30, Count);
          v15 = Count == v17;
          Count = v17;
          if ( v15 )
            break;
          if ( (v17 & 1) != 0 )
            goto LABEL_30;
        }
      }
    }
  }
  else
  {
    v9 = 1;
    v10 = KeAcquireSpinLockRaiseToDpc(&qword_140C54690);
    v3 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 1536) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v3 )
      v9 = sub_140347810(&v3[45]);
    KeReleaseSpinLockFromDpcLevel(&qword_140C54690);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    if ( !v9 )
      return 0LL;
  }
  return v3;
}

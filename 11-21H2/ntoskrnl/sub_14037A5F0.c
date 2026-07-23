/*
 * XREFs of sub_14037A5F0 @ 0x14037A5F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14037907C @ 0x14037907C (sub_14037907C.c)
 *     sub_14037A8BC @ 0x14037A8BC (sub_14037A8BC.c)
 *     sub_14037C6BC @ 0x14037C6BC (sub_14037C6BC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14037A5F0(PRKEVENT *StartContext)
{
  PRKEVENT v1; // rbx
  KIRQL v3; // al
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 v5; // rdi
  LARGE_INTEGER *Timeout; // rax
  struct _LIST_ENTRY **p_Blink; // rsi
  unsigned __int64 v8; // rdi
  LIST_ENTRY *p_WaitListHead; // rcx
  LIST_ENTRY *Blink; // rdx
  LIST_ENTRY *v11; // rsi
  __int64 v12; // r8
  PRKEVENT v13; // rdx
  KIRQL v14; // al
  unsigned __int64 Blink_high; // rdx
  PRKEVENT v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  __int64 v25; // r9
  int v26; // eax
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  __int64 v29; // r9
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  __int64 v33; // r8
  int v34; // eax
  PRKEVENT v35; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v36; // [rsp+38h] [rbp-18h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-10h]
  __int64 v38; // [rsp+80h] [rbp+30h] BYREF

  v1 = *StartContext;
  v38 = -50000000LL;
  BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
  v3 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
  ++HIDWORD(v1[3].Header.WaitListHead.Blink);
  Flink = v1[3].Header.WaitListHead.Flink;
  v5 = v3;
  if ( (PRKEVENT)Flink->Flink != &v1[3] )
    goto LABEL_60;
  v36 = v1[3].Header.WaitListHead.Flink;
  v35 = v1 + 3;
  Flink->Flink = (struct _LIST_ENTRY *)&v35;
  v1[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v35;
  KeSetActualBasePriorityThread(BugCheckParameter1, (unsigned int)v1[5].Header.WaitListHead.Flink);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  KeSetEvent(StartContext[2], 0, 0);
  while ( 1 )
  {
    while ( 1 )
    {
      Timeout = (LARGE_INTEGER *)&v38;
      if ( HIDWORD(v1[3].Header.WaitListHead.Blink) <= 1 )
        Timeout = 0LL;
      if ( KeWaitForSingleObject(&v1[1], WrKernel, 0, 0, Timeout) == 258 )
        break;
      p_Blink = 0LL;
      LOBYTE(v8) = ExAcquireSpinLockExclusive(&v1->Header.Lock);
      while ( 1 )
      {
        if ( HIDWORD(v1[3].Header.WaitListHead.Blink) > LODWORD(v1[3].Header.WaitListHead.Blink) )
        {
          if ( !p_Blink )
            goto LABEL_24;
          v11 = 0LL;
        }
        else
        {
          p_WaitListHead = &v1->Header.WaitListHead;
          Blink = v1->Header.WaitListHead.Blink;
          if ( Blink == &v1->Header.WaitListHead )
          {
            v11 = 0LL;
            KeResetEvent(v1 + 1);
          }
          else
          {
            v11 = p_WaitListHead->Flink;
            p_WaitListHead->Flink = p_WaitListHead->Flink->Flink;
            if ( v11 == Blink )
            {
              v1->Header.WaitListHead.Blink = &v1->Header.WaitListHead;
              p_WaitListHead->Flink = 0LL;
            }
            else
            {
              --Blink->Flink;
            }
          }
        }
        if ( !v1[1].Header.SignalState && v1->Header.WaitListHead.Blink->Flink >= (struct _LIST_ENTRY *)3 )
          KeSetEvent(v1 + 1, 0, 0);
        ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v27 = KeGetCurrentIrql();
            if ( v27 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v27 >= 2u )
            {
              v28 = KeGetCurrentPrcb();
              v29 = *((_QWORD *)v28 + 4375);
              v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              v22 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
              v12 = (unsigned int)v30 & *(_DWORD *)(v29 + 20);
              *(_DWORD *)(v29 + 20) = v12;
              if ( v22 )
                sub_140418E4C(v28);
            }
          }
        }
        __writecr8((unsigned __int8)v8);
        v13 = StartContext[1];
        if ( !v11 )
          break;
        p_Blink = &v11[-5].Blink;
        sub_14037A8BC(v1, v13, StartContext[3], StartContext[4], p_Blink);
        v14 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
        Blink_high = HIDWORD(v1[3].Header.WaitListHead.Blink);
        LOBYTE(v8) = v14;
        if ( LODWORD(v1[3].Header.WaitListHead.Blink) > (unsigned int)Blink_high
          && (unsigned __int64)v1->Header.WaitListHead.Blink->Flink >> 1 > Blink_high )
        {
          KeSetEvent(v1 + 2, 0, 0);
        }
      }
      LOBYTE(v12) = -1;
      sub_14037C6BC(v1, v13, v12, 1LL);
    }
    v8 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
    if ( HIDWORD(v1[3].Header.WaitListHead.Blink) > 1 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = *((_QWORD *)v24 + 4375);
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v22 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v26;
          if ( v22 )
            sub_140418E4C(v24);
        }
      }
    }
    __writecr8(v8);
  }
LABEL_24:
  if ( !v1[1].Header.SignalState
    && (v1->Header.WaitListHead.Blink != &v1->Header.WaitListHead || !LODWORD(v1[3].Header.WaitListHead.Blink)) )
  {
    KeSetEvent(v1 + 1, 0, 0);
  }
  v16 = v35;
  v17 = v36;
  if ( (PRKEVENT *)v35->Header.WaitListHead.Flink != &v35 || (PRKEVENT *)v36->Flink != &v35 )
LABEL_60:
    __fastfail(3u);
  v36->Flink = (struct _LIST_ENTRY *)v35;
  v16->Header.WaitListHead.Flink = v17;
  --HIDWORD(v1[3].Header.WaitListHead.Blink);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = *((_QWORD *)v32 + 4375);
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v22 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
        *(_DWORD *)(v33 + 20) &= v34;
        if ( v22 )
          sub_140418E4C(v32);
      }
    }
  }
  __writecr8((unsigned __int8)v8);
  sub_14037907C((struct _EX_RUNDOWN_REF **)StartContext);
}

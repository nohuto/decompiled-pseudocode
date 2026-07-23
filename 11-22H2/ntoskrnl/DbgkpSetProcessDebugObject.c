/*
 * XREFs of DbgkpSetProcessDebugObject @ 0x1409381F8
 * Callers:
 *     NtDebugActiveProcess @ 0x140938770 (NtDebugActiveProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     PsGetNextProcessThread @ 0x140742FC0 (PsGetNextProcessThread.c)
 *     DbgkpMarkProcessPeb @ 0x1409374BC (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeThreadMessages @ 0x140937834 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x1409384E8 (DbgkpWakeTarget.c)
 */

__int64 DbgkpSetProcessDebugObject(ULONG_PTR BugCheckParameter1, PRKEVENT Event, int a3, ...)
{
  struct _KTHREAD *CurrentThread; // r13
  int v4; // edi
  _QWORD *v7; // rbx
  _QWORD *NextProcessThread; // r14
  struct _KEVENT *Flink; // r14
  struct _KEVENT *v10; // rbx
  LONG SignalState; // eax
  struct _LIST_ENTRY *Blink; // r13
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rax
  struct _KEVENT **v15; // rax
  PVOID *v16; // rax
  LONG v17; // eax
  PVOID v18; // rcx
  __int64 v19; // rax
  PVOID v21; // [rsp+30h] [rbp-30h] BYREF
  struct _KTHREAD *v22; // [rsp+38h] [rbp-28h]
  PFAST_MUTEX FastMutex; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID *p_P; // [rsp+50h] [rbp-10h]
  char v26; // [rsp+A8h] [rbp+48h]
  char v27; // [rsp+B0h] [rbp+50h]
  PVOID Object; // [rsp+B8h] [rbp+58h] BYREF
  va_list Objecta; // [rsp+B8h] [rbp+58h]
  va_list va1; // [rsp+C0h] [rbp+60h] BYREF

  va_start(va1, a3);
  va_start(Objecta, a3);
  Object = va_arg(va1, PVOID);
  CurrentThread = KeGetCurrentThread();
  p_P = &P;
  v21 = 0LL;
  P = &P;
  v22 = CurrentThread;
  v4 = a3;
  v26 = 1;
  v27 = 0;
  if ( a3 >= 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      v27 = 1;
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      v7 = Object;
      if ( *(_QWORD *)(BugCheckParameter1 + 1400) )
        break;
      *(_QWORD *)(BugCheckParameter1 + 1400) = Event;
      ObfReferenceObjectWithTag(v7, 0x4F676244u);
      NextProcessThread = PsGetNextProcessThread(BugCheckParameter1, v7);
      if ( !NextProcessThread )
        goto LABEL_9;
      *(_QWORD *)(BugCheckParameter1 + 1400) = 0LL;
      ExReleaseFastMutex(&DbgkpProcessDebugPortMutex);
      v27 = 0;
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
      v4 = DbgkpPostFakeThreadMessages(BugCheckParameter1, Event, (__int64)NextProcessThread, &v21, (PVOID *)Objecta);
      if ( v4 < 0 )
      {
        v7 = 0LL;
        Object = 0LL;
        goto LABEL_9;
      }
      ObfDereferenceObjectWithTag(v21, 0x4F676244u);
    }
    v4 = -1073741752;
  }
  else
  {
    v7 = 0LL;
    Object = 0LL;
  }
LABEL_9:
  FastMutex = (PFAST_MUTEX)&Event[1];
  ExAcquireFastMutex((PFAST_MUTEX)&Event[1]);
  if ( v4 >= 0 )
  {
    if ( (Event[4].Header.LockNV & 1) != 0 )
    {
      *(_QWORD *)(BugCheckParameter1 + 1400) = 0LL;
      v4 = -1073740972;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 3u);
      ObfReferenceObject(Event);
      v7 = Object;
    }
  }
  Flink = (struct _KEVENT *)Event[3].Header.WaitListHead.Flink;
  if ( Flink == (struct _KEVENT *)&Event[3].Header.WaitListHead )
    goto LABEL_35;
  do
  {
    v10 = Flink;
    Flink = *(struct _KEVENT **)&Flink->Header.Lock;
    SignalState = v10[3].Header.SignalState;
    if ( (SignalState & 4) == 0 || (struct _KTHREAD *)v10[3].Header.WaitListHead.Flink != CurrentThread )
      continue;
    Blink = v10[2].Header.WaitListHead.Blink;
    if ( v4 < 0 )
    {
      if ( (struct _KEVENT *)Flink->Header.WaitListHead.Flink != v10
        || (v15 = (struct _KEVENT **)v10->Header.WaitListHead.Flink, *v15 != v10) )
      {
LABEL_43:
        __fastfail(3u);
      }
      *v15 = Flink;
      Flink->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v15;
      goto LABEL_28;
    }
    if ( (SignalState & 0x10) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&Blink[86], 0x80u);
      v13 = *(struct _LIST_ENTRY **)&v10->Header.Lock;
      if ( *(struct _KEVENT **)(*(_QWORD *)&v10->Header.Lock + 8LL) != v10 )
        goto LABEL_43;
      v14 = v10->Header.WaitListHead.Flink;
      if ( (struct _KEVENT *)v14->Flink != v10 )
        goto LABEL_43;
      v14->Flink = v13;
      v13->Blink = v14;
LABEL_28:
      v16 = p_P;
      if ( *p_P != &P )
        goto LABEL_43;
      *(_QWORD *)&v10->Header.Lock = &P;
      v10->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v16;
      *v16 = v10;
      p_P = (PVOID *)v10;
      goto LABEL_30;
    }
    if ( v26 )
    {
      v10[3].Header.SignalState = SignalState & 0xFFFFFFFB;
      KeSetEvent(Event, 0, 0);
      v26 = 0;
    }
    v10[3].Header.WaitListHead.Flink = 0LL;
    _InterlockedOr((volatile signed __int32 *)&Blink[86], 0x40u);
LABEL_30:
    v17 = v10[3].Header.SignalState;
    if ( (v17 & 8) != 0 )
    {
      v10[3].Header.SignalState = v17 & 0xFFFFFFF7;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Blink[84].Blink);
    }
    CurrentThread = v22;
  }
  while ( Flink != (struct _KEVENT *)&Event[3].Header.WaitListHead );
  v7 = Object;
LABEL_35:
  ExReleaseFastMutex(FastMutex);
  if ( v27 )
    ExReleaseFastMutex(&DbgkpProcessDebugPortMutex);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x4F676244u);
  while ( 1 )
  {
    v18 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_43;
    v19 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_43;
    P = *(PVOID *)P;
    *(_QWORD *)(v19 + 8) = &P;
    DbgkpWakeTarget(v18);
  }
  if ( v4 >= 0 )
    DbgkpMarkProcessPeb(BugCheckParameter1);
  return (unsigned int)v4;
}

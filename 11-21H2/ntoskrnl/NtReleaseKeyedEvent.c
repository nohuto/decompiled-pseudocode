/*
 * XREFs of NtReleaseKeyedEvent @ 0x140A06FF0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtReleaseKeyedEvent(HANDLE Handle, struct _LIST_ENTRY *a2, BOOLEAN a3, LARGE_INTEGER *a4)
{
  unsigned __int64 v4; // r13
  NTSTATUS v5; // r12d
  char v6; // r15
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *v10; // rcx
  unsigned __int64 *v11; // rsi
  struct _LIST_ENTRY *v12; // r14
  __int64 v13; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY **p_Blink; // r13
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v20; // rax
  __int64 v21; // r14
  LIST_ENTRY *v22; // rax
  struct _KTHREAD *v23; // rcx
  struct _LIST_ENTRY *v24; // rdx
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  LARGE_INTEGER v26; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  void *InitialStack; // [rsp+48h] [rbp-60h]
  PVOID v29; // [rsp+50h] [rbp-58h]
  __int64 v30; // [rsp+60h] [rbp-48h]
  _KPROCESS *Process; // [rsp+68h] [rbp-40h]
  LARGE_INTEGER *Timeout; // [rsp+C8h] [rbp+20h]

  Timeout = a4;
  v4 = (unsigned __int64)a2;
  v5 = 0;
  v26.QuadPart = 0LL;
  InitialStack = 0LL;
  v6 = 1;
  if ( ((unsigned __int8)a2 & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  if ( a4 )
  {
    if ( PreviousMode && ((unsigned __int64)&a4[1] > 0x7FFFFFFF0000LL || &a4[1] < a4) )
      MEMORY[0x7FFFFFFF0000] = 0;
    v26 = *a4;
    Timeout = &v26;
  }
  if ( Handle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 2u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v5 = result;
    v10 = (char *)Object;
    v29 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v10 = (char *)ExpCritSecOutOfMemoryEvent;
    v29 = (PVOID)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v11 = (unsigned __int64 *)&v10[24 * ((v4 >> 5) & 0x3F)];
  v12 = (struct _LIST_ENTRY *)(v11 + 1);
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire((__int64)v11, 0LL);
  v30 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
  {
    ExfAcquirePushLockExclusiveEx(v11, v13, (__int64)v11);
    v13 = v30;
  }
  if ( v13 )
    *(_BYTE *)(v13 + 18) = 1;
  Flink = v12->Flink;
  if ( v12->Flink == v12 )
  {
LABEL_22:
    InitialStack = CurrentThread[1].InitialStack;
    CurrentThread[1].InitialStack = (void *)(v4 | 1);
    p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
    v17 = v12->Flink;
    if ( v12->Flink->Blink != v12 )
      goto LABEL_48;
    p_WaitListHead->Flink = v17;
    CurrentThread[1].Header.WaitListHead.Blink = v12;
    v17->Blink = p_WaitListHead;
    v12->Flink = p_WaitListHead;
    p_Blink = 0LL;
  }
  else
  {
    while ( 1 )
    {
      p_Blink = &Flink[-73].Blink;
      if ( Flink[2].Flink == a2 && p_Blink[68] == (struct _LIST_ENTRY *)Process )
        break;
      Flink = Flink->Flink;
      if ( Flink == v12 )
      {
        v4 = (unsigned __int64)a2;
        goto LABEL_22;
      }
    }
    v18 = Flink->Flink;
    Blink = Flink->Blink;
    if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
      goto LABEL_48;
    Blink->Flink = v18;
    v18->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  if ( !p_Blink )
  {
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    v5 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, a3, Timeout);
    if ( !v5 )
    {
LABEL_44:
      CurrentThread[1].InitialStack = InitialStack;
      goto LABEL_45;
    }
    --CurrentThread->KernelApcDisable;
    v20 = KeAbPreAcquire((__int64)v11, 0LL);
    v21 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v20, (__int64)v11);
    if ( v21 )
      *(_BYTE *)(v21 + 18) = 1;
    v22 = &CurrentThread[1].Header.WaitListHead;
    v23 = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
    if ( v23 == (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
    {
LABEL_40:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      if ( v6 )
        v5 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
      goto LABEL_44;
    }
    v24 = CurrentThread[1].Header.WaitListHead.Blink;
    if ( v23->Header.WaitListHead.Flink == v22 && v24->Flink == v22 )
    {
      v24->Flink = (struct _LIST_ENTRY *)v23;
      v23->Header.WaitListHead.Flink = v24;
      CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
      v22->Flink = v22;
      v6 = 0;
      goto LABEL_40;
    }
LABEL_48:
    __fastfail(3u);
  }
  KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 155), 1, 1, 0);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
LABEL_45:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( Handle )
    ObfDereferenceObject(v29);
  return v5;
}

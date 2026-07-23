/*
 * XREFs of sub_140203950 @ 0x140203950
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     sub_1402037E8 @ 0x1402037E8 (sub_1402037E8.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     NtWaitForSingleObject @ 0x1407E0180 (NtWaitForSingleObject.c)
 *     sub_140844C0C @ 0x140844C0C (sub_140844C0C.c)
 *     sub_14084CC44 @ 0x14084CC44 (sub_14084CC44.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140203950(__int64 a1)
{
  char v1; // r15
  int v3; // r14d
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  signed __int32 v10; // r14d
  void *v11; // rcx
  __int64 result; // rax
  struct _KTHREAD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  NTSTATUS v17; // ebx
  struct _KEVENT *v18; // rcx
  _QWORD *v19; // rdx
  __int64 *v20; // rcx
  struct _KEVENT *v21; // rcx
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  Handle = 0LL;
  v1 = dword_140C1B314;
  memset(&ApcState, 0, sizeof(ApcState));
  v3 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !byte_140D3CA36 )
  {
    result = sub_14084CC44(&Handle);
    if ( (int)result < 0 )
      return result;
    v17 = NtWaitForSingleObject(Handle, 1u, 0LL);
    NtClose(Handle);
    if ( v17 < 0 )
      return (unsigned int)v17;
  }
  if ( v1 )
    KeStackAttachProcess(PROCESS, &ApcState);
  do
  {
    v4 = 0LL;
    if ( (*(_BYTE *)(a1 + 224) & 1) == 0 )
      goto LABEL_46;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 32), 1u);
    v6 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 == a1 )
    {
      v18 = *(struct _KEVENT **)(a1 + 192);
      if ( v18 )
        KeSetEvent(v18, 0, 0);
    }
    else if ( *(_DWORD *)(v6 + 52) == *(_DWORD *)(a1 + 184) + 1 )
    {
      v4 = *(_QWORD *)a1;
      if ( *(_QWORD *)(v6 + 8) != a1 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
LABEL_43:
        __fastfail(3u);
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(v7 + 8) = a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 32));
    KeLeaveCriticalRegion();
    if ( !v4 )
    {
LABEL_46:
      if ( (*(_BYTE *)(a1 + 224) & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
      v19 = (_QWORD *)(a1 + 16);
      v20 = *(__int64 **)(a1 + 16);
      if ( v20 == (__int64 *)(a1 + 16) )
      {
        v21 = *(struct _KEVENT **)(a1 + 200);
        if ( v21 )
          KeSetEvent(v21, 0, 0);
      }
      else if ( *((_DWORD *)v20 + 13) == *(_DWORD *)(a1 + 184) + 1 )
      {
        v4 = *(_QWORD *)(a1 + 16);
        if ( (_QWORD *)v20[1] != v19 )
          goto LABEL_43;
        v22 = *v20;
        if ( *(__int64 **)(*v20 + 8) != v20 )
          goto LABEL_43;
        *v19 = v22;
        *(_QWORD *)(v22 + 8) = v19;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v4 )
        continue;
    }
    if ( *(_DWORD *)(v4 + 32) != 1 || (*(_DWORD *)(*(_QWORD *)(v4 + 24) + 20LL) & 2) != 0 )
    {
      if ( v1 )
        sub_1402037E8(v4);
    }
    else
    {
      v13 = KeGetCurrentThread();
      v14 = *(_QWORD *)(v4 + 56);
      v23[0] = 0;
      v15 = *((_QWORD *)v13 + 203);
      *((_QWORD *)v13 + 203) = v14;
      v16 = sub_140844C0C(*(_QWORD *)(v4 + 24), v23);
      *((_QWORD *)KeGetCurrentThread() + 203) = v15;
      if ( v16 < 0 )
      {
        dword_140C0D8A8 = v16;
        _InterlockedIncrement(&dword_140D0153C);
        if ( !v23[0] )
          sub_1409CF1A0((unsigned int)v16);
      }
      if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 4) <= 1 )
        ExFreePoolWithTag(*(PVOID *)(v4 + 24), 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
    v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 0xFFFFFFFF);
    v11 = *(void **)(v4 + 56);
    v3 = v10 - 1;
    if ( v11 )
    {
      ObfDereferenceObjectWithTag(v11, 0x69416553u);
      *(_QWORD *)(v4 + 56) = 0LL;
    }
    sub_14042A5E0(v4, v8, v9);
  }
  while ( v3 );
  if ( v1 )
    KeUnstackDetachProcess(&ApcState);
  return 0LL;
}

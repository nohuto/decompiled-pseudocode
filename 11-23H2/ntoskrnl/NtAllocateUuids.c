/*
 * XREFs of NtAllocateUuids @ 0x140681EE0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140687ED0 (ExpUuidSaveSequenceNumberIf.c)
 *     ExpAllocateUuids @ 0x1407E2308 (ExpAllocateUuids.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PCHAR Seed)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  NTSTATUS v15; // edi
  char v16; // di
  char v17; // bl
  ULONG v19; // [rsp+24h] [rbp-44h] BYREF
  ULONG v20; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v21[3]; // [rsp+30h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-20h]

  v21[0] = 0LL;
  v19 = 0;
  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    if ( ((unsigned __int8)Time & 3) != 0 )
      goto LABEL_14;
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Time < 0x7FFFFFFF0000LL )
      v9 = (__int64)Time;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 7) = *(_BYTE *)(v9 + 7);
    if ( ((unsigned __int8)Range & 3) != 0 )
      goto LABEL_14;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Range < 0x7FFFFFFF0000LL )
      v10 = (__int64)Range;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( ((unsigned __int8)Sequence & 3) != 0 )
LABEL_14:
      ExRaiseDatatypeMisalignment();
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Sequence < 0x7FFFFFFF0000LL )
      v11 = (__int64)Sequence;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( (unsigned __int64)Seed < 0x7FFFFFFF0000LL )
      v8 = (__int64)Seed;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 5) = *(_BYTE *)(v8 + 5);
  }
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  v13 = KeAbPreAcquire((__int64)&ExpUuidLock, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v13, (__int64)&ExpUuidLock);
  if ( v14 )
    *(_BYTE *)(v14 + 18) = 1;
  v15 = ExpAllocateUuids(v21, &v19, &v20);
  if ( v15 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)v12);
    return v15;
  }
  else
  {
    ExpUuidSaveSequenceNumberIf();
    v16 = ExpUuidCacheValid;
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)v12);
    *Time = (ULARGE_INTEGER)v21[0];
    *Range = v19;
    *Sequence = v20;
    *(_DWORD *)Seed = *(int *)((char *)&dword_140D5327C + 2);
    *((_WORD *)Seed + 2) = word_140D53282;
    return v16 == 0 ? 0x40020056 : 0;
  }
}

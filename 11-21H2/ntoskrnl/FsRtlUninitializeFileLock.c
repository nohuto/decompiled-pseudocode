/*
 * XREFs of FsRtlUninitializeFileLock @ 0x140259FA0
 * Callers:
 *     FsRtlFreeFileLock @ 0x140259F70 (FsRtlFreeFileLock.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     RtlDeleteNoSplay @ 0x14021D900 (RtlDeleteNoSplay.c)
 *     sub_14021F5E4 @ 0x14021F5E4 (sub_14021F5E4.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __stdcall FsRtlUninitializeFileLock(PFILE_LOCK FileLock)
{
  char *LockInformation; // rbx
  KIRQL v3; // bp
  __int64 v4; // r8
  _RTL_SPLAY_LINKS **v5; // r14
  _RTL_SPLAY_LINKS *v6; // rdi
  PRTL_SPLAY_LINKS *v7; // rsi
  PRTL_SPLAY_LINKS v8; // rdi
  __int64 v9; // rdi
  KSPIN_LOCK *v10; // rcx
  __int64 v11; // r8
  _SLIST_ENTRY **v12; // rsi
  _SLIST_ENTRY *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rsi
  KIRQL v17; // dl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v20; // r10
  int v21; // eax
  bool v22; // zf
  __int64 v23; // r8
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // rdx
  __int64 v26; // r9
  int v27; // eax
  NTSTATUS v28; // [rsp+60h] [rbp+8h] BYREF

  v28 = 0;
  LockInformation = (char *)FileLock->LockInformation;
  if ( LockInformation )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C48B98);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)LockInformation + 3);
    v5 = (_RTL_SPLAY_LINKS **)(LockInformation + 32);
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        break;
      v12 = (_SLIST_ENTRY **)&v6[-1];
      while ( 1 )
      {
        v13 = *v12;
        if ( !*v12 )
          break;
        *v12 = v13->Next;
        sub_140203D88((__int64)&stru_140CE2880, v13, v4);
      }
      RtlDeleteNoSplay(v6, (PRTL_SPLAY_LINKS *)LockInformation + 4);
      sub_140203D88((__int64)&stru_140CE2600, (_SLIST_ENTRY *)&v6[-1], v14);
    }
    v7 = (PRTL_SPLAY_LINKS *)(LockInformation + 40);
    while ( 1 )
    {
      v8 = *v7;
      if ( !*v7 )
        break;
      RtlDeleteNoSplay(*v7, (PRTL_SPLAY_LINKS *)LockInformation + 5);
      sub_140203D88((__int64)&stru_140CE2800, (_SLIST_ENTRY *)v8, v15);
    }
    while ( 1 )
    {
      v9 = *((_QWORD *)LockInformation + 6);
      v10 = (KSPIN_LOCK *)(LockInformation + 24);
      if ( !v9 )
        break;
      *((_QWORD *)LockInformation + 6) = *(_QWORD *)v9;
      v16 = *(_QWORD *)(v9 + 24);
      KeReleaseSpinLockFromDpcLevel(v10);
      *(_BYTE *)(v16 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v16 + 104), 0LL);
      v17 = *(_BYTE *)(v16 + 69);
      if ( *(_BYTE *)(v16 + 68) )
      {
        KeReleaseQueuedSpinLock(7uLL, v17);
        *(_QWORD *)v9 = qword_140C48BA0;
        qword_140C48BA0 = v9;
      }
      else
      {
        KeReleaseQueuedSpinLock(7uLL, v17);
        KeReleaseSpinLockFromDpcLevel(&qword_140C48B98);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v20 = *((_QWORD *)CurrentPrcb + 4375);
              v21 = ~(unsigned __int16)(-1LL << (v3 + 1));
              v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
              *(_DWORD *)(v20 + 20) &= v21;
              if ( v22 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v3);
        *(_QWORD *)(v16 + 56) = 0LL;
        sub_14021F5E4(*((_QWORD *)LockInformation + 1), *(_QWORD *)(v9 + 16), (IRP *)v16, -1073741698, &v28, 0LL);
        sub_140203D88((__int64)&stru_140CE2680, (_SLIST_ENTRY *)v9, v23);
        v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C48B98);
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)LockInformation + 3);
    }
    KeReleaseSpinLockFromDpcLevel(v10);
    KeReleaseSpinLockFromDpcLevel(&qword_140C48B98);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && v3 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = *((_QWORD *)v25 + 4375);
          v27 = ~(unsigned __int16)(-1LL << (v3 + 1));
          v22 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
          v11 = (unsigned int)v27 & *(_DWORD *)(v26 + 20);
          *(_DWORD *)(v26 + 20) = v11;
          if ( v22 )
            sub_140418E4C(v25);
        }
      }
    }
    __writecr8(v3);
    sub_140203D88((__int64)&stru_140CE2780, (_SLIST_ENTRY *)LockInformation, v11);
    FileLock->LockInformation = 0LL;
  }
}

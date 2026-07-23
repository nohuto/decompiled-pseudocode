/*
 * XREFs of FsRtlFastCheckLockForRead @ 0x14021DAF0
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x14021DA60 (FsRtlCheckLockForReadAccess.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14021DC48 @ 0x14021DC48 (sub_14021DC48.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rsi
  LONGLONG QuadPart; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  BOOLEAN v12; // bl
  unsigned __int64 v13; // rdi
  unsigned __int64 *LastLock; // rax
  BOOLEAN v15; // al
  KSPIN_LOCK *v16; // rcx
  BOOLEAN v17; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r10
  __int64 v25; // r8
  int v26; // eax
  unsigned __int64 v27; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp+8h] BYREF

  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( !LockInformation )
    return 1;
  if ( !LockInformation[5] )
    return 1;
  QuadPart = Length->QuadPart;
  if ( !Length->QuadPart )
    return 1;
  v10 = StartingByte->QuadPart;
  v27 = v10;
  v11 = v10 + QuadPart - 1;
  v28 = v11;
  v12 = 1;
  v13 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  if ( v11 < *LockInformation
    || (LastLock = (unsigned __int64 *)FileObject->LastLock) != 0LL
    && v10 >= *LastLock
    && v11 <= LastLock[5]
    && *((_DWORD *)LastLock + 5) == Key
    && (PVOID)LastLock[4] == ProcessId )
  {
    KeReleaseSpinLockFromDpcLevel(LockInformation + 3);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = *((_QWORD *)CurrentPrcb + 4375);
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v22 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
  }
  else
  {
    v15 = sub_14021DC48(
            (int)LockInformation + 24,
            (unsigned int)&v27,
            (unsigned int)&v28,
            Key,
            (__int64)FileObject,
            (__int64)ProcessId);
    v16 = LockInformation + 3;
    v17 = v15;
    KeReleaseSpinLockFromDpcLevel(v16);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = *((_QWORD *)v24 + 4375);
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v22 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v26;
          if ( v22 )
            sub_140418E4C(v24);
        }
      }
    }
    v12 = v17;
  }
  __writecr8(v13);
  return v12;
}

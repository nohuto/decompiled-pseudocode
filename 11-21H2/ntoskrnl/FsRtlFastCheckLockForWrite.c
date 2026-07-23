/*
 * XREFs of FsRtlFastCheckLockForWrite @ 0x14021D280
 * Callers:
 *     FsRtlCheckLockForWriteAccess @ 0x14021D1E0 (FsRtlCheckLockForWriteAccess.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14021DC48 @ 0x14021DC48 (sub_14021DC48.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403750E4 @ 0x1403750E4 (sub_1403750E4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

BOOLEAN __stdcall FsRtlFastCheckLockForWrite(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PVOID FileObject,
        PVOID ProcessId)
{
  unsigned __int64 *LockInformation; // rsi
  LONGLONG QuadPart; // rax
  unsigned __int64 v8; // r14
  KSPIN_LOCK *v9; // rbp
  unsigned __int64 v10; // r15
  BOOLEAN v11; // bl
  unsigned __int64 v12; // rdi
  PVOID v14; // r13
  PVOID v15; // r12
  __int64 v16; // rax
  bool v17; // cf
  ULONG v18; // r14d
  BOOLEAN v19; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  __int64 v27; // r8
  int v28; // eax
  _QWORD v29[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp+8h] BYREF
  ULONG v31; // [rsp+98h] [rbp+20h]

  v31 = Key;
  LockInformation = (unsigned __int64 *)FileLock->LockInformation;
  if ( LockInformation && (LockInformation[4] || LockInformation[5]) )
  {
    QuadPart = Length->QuadPart;
    if ( Length->QuadPart )
    {
      v8 = StartingByte->QuadPart;
      v9 = LockInformation + 3;
      v29[0] = v8;
      v10 = v8 + QuadPart - 1;
      v30 = v10;
      v11 = 1;
      v12 = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
      if ( v10 < *LockInformation )
        goto LABEL_6;
      v14 = FileObject;
      v15 = ProcessId;
      v16 = *((_QWORD *)FileObject + 15);
      if ( v16 )
      {
        v17 = v8 < *(_QWORD *)v16;
        v18 = v31;
        if ( !v17
          && v10 <= *(_QWORD *)(v16 + 40)
          && *(_DWORD *)(v16 + 20) == v31
          && *(PVOID *)(v16 + 32) == ProcessId
          && *(_BYTE *)(v16 + 16) )
        {
LABEL_6:
          KeReleaseSpinLockFromDpcLevel(LockInformation + 3);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v22 = *((_QWORD *)CurrentPrcb + 4375);
                v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
                v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
                *(_DWORD *)(v22 + 20) &= v23;
                if ( v24 )
                  sub_140418E4C(CurrentPrcb);
              }
            }
          }
LABEL_7:
          __writecr8(v12);
          return v11;
        }
      }
      else
      {
        v18 = v31;
      }
      v19 = sub_1403750E4(LockInformation + 3, v29, &v30);
      if ( v19 == 1 )
        v19 = sub_14021DC48((_DWORD)v9, (unsigned int)v29, (unsigned int)&v30, v18, (__int64)v14, (__int64)v15);
      KeReleaseSpinLockFromDpcLevel(v9);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = *((_QWORD *)v26 + 4375);
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
            v24 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
            *(_DWORD *)(v27 + 20) &= v28;
            if ( v24 )
              sub_140418E4C(v26);
          }
        }
      }
      v11 = v19;
      goto LABEL_7;
    }
  }
  return 1;
}

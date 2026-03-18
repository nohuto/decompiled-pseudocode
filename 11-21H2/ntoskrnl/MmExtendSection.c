/*
 * XREFs of MmExtendSection @ 0x1406A377C
 * Callers:
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     NtExtendSection @ 0x1406A36D0 (NtExtendSection.c)
 *     MiCreateSection @ 0x1406FD4A0 (MiCreateSection.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockControlAreaSectionExtend @ 0x14022C984 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x14022CA54 (MiLockControlAreaSectionExtend.c)
 *     MiFindLastSubsection @ 0x14022CB60 (MiFindLastSubsection.c)
 *     MiUpdateLastSubsectionSize @ 0x14022CE0C (MiUpdateLastSubsectionSize.c)
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiSubsectionNeedsExtents @ 0x140597BA8 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x140597C48 (MiUpdateActiveSubsection.c)
 *     MiExtendSection @ 0x1406A3A68 (MiExtendSection.c)
 *     FsRtlSetFileSize @ 0x1406A443C (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 */

__int64 __fastcall MmExtendSection(__int64 a1, LARGE_INTEGER *a2, int a3)
{
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  NTSTATUS v11; // esi
  __int64 LastSubsection; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  int updated; // eax
  unsigned __int64 v17; // rax
  struct _FILE_OBJECT *v18; // r14
  int v19; // eax
  struct _KTHREAD *CurrentThread; // rsi
  LARGE_INTEGER *v21; // rcx
  bool v22; // zf
  unsigned __int64 v23; // rax
  _OWORD v24[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+58h] BYREF

  FileSize.QuadPart = 0LL;
  memset(v24, 0, sizeof(v24));
  v25 = 0LL;
  v6 = MiSectionControlArea(a1);
  v7 = v6;
  if ( (*(_DWORD *)(v6 + 56) & 0x420) != 0 || !*(_QWORD *)(v6 + 64) )
    return 3221225607LL;
  if ( a2->QuadPart <= 0x3FFFFFFFFFF000uLL )
  {
    v8 = *(_QWORD *)v6;
    v9 = a2->QuadPart + 4095;
    DWORD2(v24[0]) = 16;
    v10 = v9 >> 12;
    MiLockControlAreaSectionExtend(v6, (__int64)v24);
    if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
    {
      v23 = *(_QWORD *)(a1 + 48);
      if ( a2->QuadPart <= v23 )
      {
        a2->QuadPart = v23;
        MiUnlockControlAreaSectionExtend(v7, (__int64)v24);
        return 0LL;
      }
    }
    if ( a3 )
      goto LABEL_6;
    MiUnlockControlAreaSectionExtend(v7, (__int64)v24);
    v17 = MiReferenceControlAreaFile(v7);
    DWORD2(v24[0]) = 32;
    v18 = (struct _FILE_OBJECT *)v17;
    MiLockControlAreaSectionExtend(v7, (__int64)v24);
    v11 = FsRtlGetFileSize(v18, &FileSize);
    if ( v11 >= 0 )
    {
      if ( a2->QuadPart <= (unsigned __int64)FileSize.QuadPart )
      {
LABEL_20:
        if ( *(_QWORD *)(v8 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&::BugCheckParameter2, 0LL);
          v21 = *(LARGE_INTEGER **)(v8 + 32);
          if ( v21 )
            *v21 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&::BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&::BugCheckParameter2);
          KeAbPostRelease((ULONG_PTR)&::BugCheckParameter2);
          v22 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v22
            && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v24);
        MiDereferenceControlAreaFile(v7, (unsigned __int64)v18);
        DWORD2(v24[0]) = 16;
        MiLockControlAreaSectionExtend(v7, (__int64)v24);
LABEL_6:
        v11 = 0;
        BugCheckParameter2 = 0LL;
        LastSubsection = MiFindLastSubsection(v7, 0);
        v13 = *(unsigned int *)(v8 + 8) | ((unsigned __int64)(*(_WORD *)(v8 + 12) & 0x3FF) << 32);
        if ( v10 <= v13 )
        {
          *(LARGE_INTEGER *)(a1 + 48) = *a2;
          if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), -1LL, -1LL) < a2->QuadPart )
          {
            _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
            MiUpdateLastSubsectionSize(LastSubsection, a2, 0);
          }
        }
        else
        {
          v14 = v10 - v13;
          if ( v14 <= (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) )
          {
            if ( (*(_BYTE *)(v7 + 62) & 0xC) != 0 && *(_QWORD *)(LastSubsection + 8) )
            {
              MiSubsectionNeedsExtents((_DWORD *)LastSubsection);
              BugCheckParameter2 = LastSubsection;
            }
            updated = MiUpdateLastSubsectionSize(LastSubsection, a2, v14);
          }
          else
          {
            updated = MiExtendSection(
                        LastSubsection,
                        (_DWORD)a2,
                        *(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF,
                        (unsigned int)v14 - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF),
                        (__int64)&BugCheckParameter2);
          }
          v11 = updated;
          if ( updated >= 0 )
          {
            v11 = 0;
            _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
            *(LARGE_INTEGER *)(a1 + 48) = *a2;
          }
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v24);
        if ( BugCheckParameter2 )
          return (unsigned int)MiUpdateActiveSubsection((_QWORD *)BugCheckParameter2);
        return (unsigned int)v11;
      }
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
      {
        FileSize = *a2;
        v19 = FsRtlSetFileSize(v18);
        if ( v19 >= 0 )
          goto LABEL_20;
        v11 = v19;
      }
      else
      {
        v11 = -1073741689;
      }
    }
    MiUnlockControlAreaSectionExtend(v7, (__int64)v24);
    MiDereferenceControlAreaFile(v7, (unsigned __int64)v18);
    return (unsigned int)v11;
  }
  return 3221225536LL;
}

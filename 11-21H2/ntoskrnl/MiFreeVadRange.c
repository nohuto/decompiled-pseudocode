/*
 * XREFs of MiFreeVadRange @ 0x1402ECEB0
 * Callers:
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1407FABA0 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1408042A4 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiDeletePartialVad @ 0x1402ECFD8 (MiDeletePartialVad.c)
 *     MiLocateLockedVadEvent @ 0x1402EE0E0 (MiLocateLockedVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiCanDeleteEnclave @ 0x1405A862C (MiCanDeleteEnclave.c)
 *     MiAllocateVad @ 0x1406C3FB4 (MiAllocateVad.c)
 *     MiPrepareVadDelete @ 0x14079D5B4 (MiPrepareVadDelete.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     MiLockNestedVad @ 0x14097EE0C (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14097EE28 (MiUnlockNestedVad.c)
 *     PerfInfoLogVirtualFree @ 0x1409E4084 (PerfInfoLogVirtualFree.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeVadRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  int v9; // ebx
  int v10; // esi
  __int64 result; // rax
  void *v14; // rsi
  __int64 v15; // r14
  int v16; // ebx
  __int64 LockedVadEvent; // rax
  __int64 v18; // rsi
  __int64 Vad; // rax
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_DWORD *)(BugCheckParameter3 + 48);
  v7 = (a4 << 12) | 0xFFF;
  v8 = a3 << 12;
  v20 = 0;
  v9 = a4;
  v10 = a3;
  if ( (v6 & 0x200000) == 0 || (v6 & 0x2000000) != 0 || (v6 & 0x4000000) == 0 )
    goto LABEL_34;
  if ( a3 != (*(unsigned int *)(BugCheckParameter3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter3
                                                                                                 + 32) << 32))
    || a4 != (*(unsigned int *)(BugCheckParameter3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter3
                                                                                                 + 33) << 32)) )
  {
    return 3221225496LL;
  }
  result = MiCanDeleteEnclave(BugCheckParameter3);
  if ( (int)result >= 0 )
  {
LABEL_34:
    result = MiPrepareVadDelete(BugCheckParameter3, a2, v10, v9, (__int64)&v20);
    if ( (int)result >= 0 )
    {
      v14 = 0LL;
      v15 = a5;
      if ( !v20 )
      {
        if ( a6 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(BugCheckParameter3, 128LL);
          v18 = *(_QWORD *)(LockedVadEvent + 8);
          *(_QWORD *)(LockedVadEvent + 8) = 0LL;
          MiLockNestedVad(v18);
          *(_DWORD *)(v18 + 24) = v8 >> 12;
          *(_BYTE *)(v18 + 32) = v8 >> 44;
          *(_DWORD *)(v18 + 28) = v7 >> 12;
          *(_BYTE *)(v18 + 33) = v7 >> 44;
        }
        MiDeleteVad((PVOID)BugCheckParameter3);
LABEL_9:
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v8, v7 - v8 + 1, v15, 0x8000LL);
        return 0LL;
      }
      if ( (*(_DWORD *)(a5 + 1124) & 0x20) != 0 )
        return 3221225738LL;
      if ( MiLocateLockedVadEvent(BugCheckParameter3, 2LL) )
        return 3221225541LL;
      if ( a6 )
      {
        result = PsChargeProcessNonPagedPoolQuota(v15, 64LL);
        if ( (int)result < 0 )
          return result;
        Vad = MiAllocateVad(v8, v7, 2LL);
        v14 = (void *)Vad;
        if ( !Vad )
        {
          PsReturnProcessNonPagedPoolQuota(v15, 64LL);
          return 3221225626LL;
        }
        MiLockNestedVad(Vad);
      }
      v16 = MiDeletePartialVad((PVOID)BugCheckParameter3, (__int64)v14);
      if ( v16 >= 0 )
        goto LABEL_9;
      if ( v14 )
      {
        MiUnlockNestedVad(v14);
        ExFreePoolWithTag(v14, 0);
        PsReturnProcessNonPagedPoolQuota(v15, 64LL);
      }
      return (unsigned int)v16;
    }
  }
  return result;
}

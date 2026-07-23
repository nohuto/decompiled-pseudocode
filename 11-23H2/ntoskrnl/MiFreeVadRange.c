/*
 * XREFs of MiFreeVadRange @ 0x140309E30
 * Callers:
 *     MmFreeVirtualMemory @ 0x1407452B0 (MmFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A45E10 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140A45FD4 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x140289DD0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B5C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiDeletePartialVad @ 0x140309F64 (MiDeletePartialVad.c)
 *     MiLocateLockedVadEvent @ 0x14030B6B4 (MiLocateLockedVadEvent.c)
 *     MiCanDeleteEnclave @ 0x140647698 (MiCanDeleteEnclave.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiPrepareVadDelete @ 0x14076D6E4 (MiPrepareVadDelete.c)
 *     MiAllocateVad @ 0x1407CFEA8 (MiAllocateVad.c)
 *     PerfInfoLogVirtualFree @ 0x1409E7354 (PerfInfoLogVirtualFree.c)
 *     MiLockNestedVad @ 0x140A47E58 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A47EA8 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeVadRange(_DWORD *P, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, __int64 a7)
{
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  int v11; // ebp
  __int64 result; // rax
  void *v15; // rbx
  struct _KPROCESS *v16; // rbp
  int v17; // edx
  __int64 v18; // r13
  int v19; // edi
  __int64 LockedVadEvent; // rax
  __int64 v21; // rbx
  __int64 Vad; // rax
  int v23; // [rsp+60h] [rbp+8h] BYREF

  v23 = 0;
  v7 = P[12];
  v8 = a4;
  v9 = (a4 << 12) | 0xFFF;
  v10 = a3 << 12;
  v11 = a3;
  if ( (v7 & 0x200000) == 0 || (v7 & 0x2000000) != 0 || (v7 & 0x4000000) == 0 )
    goto LABEL_34;
  if ( a3 != ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
    || a4 != ((unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) )
  {
    return 3221225496LL;
  }
  result = MiCanDeleteEnclave(P, a7);
  if ( (int)result >= 0 )
  {
LABEL_34:
    result = MiPrepareVadDelete((_DWORD)P, a2, v11, v8, (__int64)&v23);
    if ( (int)result >= 0 )
    {
      v15 = 0LL;
      v16 = (struct _KPROCESS *)a5;
      if ( !v23 )
      {
        if ( a6 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(P, 128LL);
          v21 = *(_QWORD *)(LockedVadEvent + 8);
          *(_QWORD *)(LockedVadEvent + 8) = 0LL;
          MiLockNestedVad(v21);
          *(_DWORD *)(v21 + 24) = v10 >> 12;
          *(_BYTE *)(v21 + 32) = v10 >> 44;
          *(_DWORD *)(v21 + 28) = v9 >> 12;
          *(_BYTE *)(v21 + 33) = v9 >> 44;
        }
        MiDeleteVad(P);
LABEL_9:
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v10, v9 - v10 + 1, v16);
        return 0LL;
      }
      if ( (*(_DWORD *)(a5 + 1124) & 0x20) != 0 )
        return 3221225738LL;
      if ( MiLocateLockedVadEvent(P, 2LL) )
        return 3221225541LL;
      v18 = (unsigned int)(v17 + 62);
      if ( a6 )
      {
        result = PsChargeProcessNonPagedPoolQuota(v16, (unsigned int)(v17 + 62));
        if ( (int)result < 0 )
          return result;
        Vad = MiAllocateVad(v10, v9, 2LL);
        v15 = (void *)Vad;
        if ( !Vad )
        {
          PsReturnProcessNonPagedPoolQuota(v16, v18);
          return 3221225626LL;
        }
        MiLockNestedVad(Vad);
      }
      v19 = MiDeletePartialVad(P, (__int64)v15);
      if ( v19 >= 0 )
        goto LABEL_9;
      if ( v15 )
      {
        MiUnlockNestedVad(v15);
        ExFreePoolWithTag(v15, 0);
        PsReturnProcessNonPagedPoolQuota(v16, v18);
      }
      return (unsigned int)v19;
    }
  }
  return result;
}

/*
 * XREFs of RtlpSetupExtendedBlock @ 0x180102C1C
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x18005B090 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpSetupExtendedBlock(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int16 v6; // r14
  unsigned __int64 v7; // rsi
  char v9; // r15
  char v10; // cl
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int16 v15; // ax
  int v16; // eax
  int v17; // eax
  _RTL_CRITICAL_SECTION *v18; // rbx
  signed __int32 LockCount; // esi
  HANDLE LockSemaphore; // rdi
  int v23; // [rsp+28h] [rbp-20h]

  v6 = a5;
  v7 = a3 - 16;
  v9 = 0;
  v10 = *(_BYTE *)(a3 - 1);
  v12 = a3 + (unsigned __int16)a5;
  if ( v10 == 4 )
  {
    if ( ((a2 | *(_BYTE *)(a1 + 116)) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v9 = 1;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(a3 - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(a3 - 5) != (*(_BYTE *)(a3 - 8) ^ (unsigned __int8)(*(_BYTE *)(a3 - 7) ^ *(_BYTE *)(a3 - 6))) )
        RtlpAnalyzeHeapFailure(a1, v7);
    }
    *(_WORD *)(a3 - 8) += v6;
    LOWORD(v13) = *(_WORD *)(a3 - 8);
    *(_BYTE *)(a3 - 2) = v6 >> 4;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a3 - 5) = *(_BYTE *)(a3 - 8) ^ *(_BYTE *)(a3 - 7) ^ *(_BYTE *)(a3 - 6);
      *(_DWORD *)(a3 - 8) ^= *(_DWORD *)(a1 + 136);
    }
    *(_BYTE *)(v12 - 2) = v6 >> 4;
  }
  else
  {
    if ( v10 == 5 )
    {
      LOWORD(v13) = *(_WORD *)(a3 - 4) ^ *(_WORD *)(a1 + 140);
    }
    else if ( (v10 & 0x40) != 0 )
    {
      LOWORD(v13) = *(_WORD *)(a3 + 16LL * (v10 & 0x3F) - 4);
    }
    else if ( (v10 & 0x3F) == 0x3F )
    {
      if ( v10 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v16 = *(_DWORD *)(a3 - 8);
          LOWORD(v23) = v16;
          if ( (v16 & *(_DWORD *)(a1 + 124)) != 0 )
            v23 = *(_DWORD *)(a1 + 136) ^ v16;
          v15 = v23;
        }
        else
        {
          v15 = *(_WORD *)(a3 - 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(a3 - 8) ^ (v7 >> 4)) )
          v14 = 0LL;
        else
          v14 = *(_QWORD *)(v7
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(a3 - 8) ^ (unsigned int)(v7 >> 4)) >> 12));
        v15 = *(_WORD *)(v14 + 36);
      }
      v13 = *(_QWORD *)(a3 + 16LL * v15 - 16);
    }
    else
    {
      LOWORD(v13) = v10 & 0x3F;
    }
    *(_BYTE *)(v12 - 2) = (unsigned __int16)a5 >> 4;
    *(_BYTE *)(a3 - 1) &= 0xC0u;
    *(_BYTE *)(a3 - 1) |= (unsigned __int8)(v6 >> 4) | 0x40;
  }
  v17 = a6;
  *(_BYTE *)(v12 - 1) = 5;
  *(_WORD *)(v12 - 4) = v6 + v13;
  *(_DWORD *)(v12 - 8) = v17;
  if ( v9 )
  {
    v18 = *(_RTL_CRITICAL_SECTION **)(a1 + 352);
    if ( v18->RecursionCount-- == 1 )
    {
      v18->OwningThread = 0LL;
      LockCount = _InterlockedCompareExchange(&v18->LockCount, -1, -2);
      if ( LockCount != -2 )
      {
        if ( (v18->LockCount & 1) != 0 )
          RtlpNotOwnerCriticalSection(v18);
        LockSemaphore = v18->LockSemaphore;
        if ( !LockSemaphore )
          LockSemaphore = RtlpCreateDeferredCriticalSectionEvent((__int64)v18);
        a5 = 0;
        while ( LockCount != _InterlockedCompareExchange(&v18->LockCount, (LockCount & 2 | 1) + LockCount, LockCount) )
        {
          RtlBackoff((unsigned int *)&a5);
          _m_prefetchw(&v18->LockCount);
          LockCount = v18->LockCount;
        }
        if ( (LockCount & 2) != 0 )
          RtlpUnWaitCriticalSectionEx((__int64)v18, LockSemaphore);
      }
    }
  }
  return v12;
}

/*
 * XREFs of RtlpFlsDataCleanup @ 0x180054714
 * Callers:
 *     RtlProcessFlsData @ 0x1800546F0 (RtlProcessFlsData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RtlpFlsDataCleanup(__int64 a1, char *a2, char a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbp
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // rcx
  _QWORD *v10; // r14
  int v11; // ecx
  __int64 v12; // r8
  _RTL_SRWLOCK *v13; // rdi
  void (*Value)(void); // rax
  _QWORD *v15; // rdx
  void **v16; // rax
  PVOID *v17; // rdi
  __int64 v18; // rsi

  if ( (a3 & 1) != 0 )
  {
    if ( (_DWORD)qword_18017ABE8 )
    {
      v5 = 17;
      v6 = (unsigned int)qword_18017ABE8;
      do
      {
        _BitScanReverse(&v7, v5);
        v8 = v5 ^ (1 << v7);
        v9 = *(_QWORD *)&a2[8 * v7 - 16];
        if ( v9 )
        {
          v10 = (_QWORD *)(v9 + 8 * (v8 + 1LL));
          if ( v10 )
          {
            if ( *v10 )
            {
              _BitScanReverse((unsigned int *)&v11, v5);
              v12 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v11 - 4) + 1);
              if ( v12 )
                v13 = (_RTL_SRWLOCK *)(v12 + 8 * ((v5 ^ (1 << v11)) + 2LL * (v5 ^ (1 << v11)) + 1));
              else
                v13 = 0LL;
              RtlAcquireSRWLockShared(v13);
              Value = (void (*)(void))v13[1].Value;
              if ( (unsigned __int64)Value - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v10 )
              {
                Value();
                *v10 = 0LL;
                *((_DWORD *)a2 + 20) &= ~1u;
              }
              RtlReleaseSRWLockShared(v13);
            }
          }
        }
        ++v5;
        --v6;
      }
      while ( v6 );
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    v15 = *(_QWORD **)a2;
    if ( *(char **)(*(_QWORD *)a2 + 8LL) != a2 || (v16 = (void **)*((_QWORD *)a2 + 1), *v16 != a2) )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = v16;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
  if ( (a3 & 2) != 0 )
  {
    v17 = (PVOID *)(a2 + 16);
    v18 = 8LL;
    do
    {
      if ( *v17 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v17);
      ++v17;
      --v18;
    }
    while ( v18 );
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
}

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

_UNKNOWN **__fastcall RtlpFlsDataCleanup(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _UNKNOWN **result; // rax
  char v5; // r15
  __int64 v6; // rbx
  unsigned int v7; // esi
  __int64 v8; // rbp
  unsigned int v9; // ecx
  __int64 v10; // rcx
  _QWORD *v11; // r14
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rdi
  void (*v15)(void); // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rsi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a3;
  v6 = a2;
  if ( (a3 & 1) != 0 )
  {
    if ( (_DWORD)qword_18017ABE8 )
    {
      v7 = 17;
      v8 = (unsigned int)qword_18017ABE8;
      do
      {
        _BitScanReverse(&v9, v7);
        a2 = v7 ^ (1 << v9);
        v10 = *(_QWORD *)(v6 + 8LL * (v9 - 4) + 16);
        if ( v10 )
        {
          v11 = (_QWORD *)(v10 + 8 * ((unsigned int)a2 + 1LL));
          if ( v11 )
          {
            if ( *v11 )
            {
              _BitScanReverse((unsigned int *)&v12, v7);
              v13 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v12 - 4) + 1);
              if ( v13 )
                v14 = v13 + 8 * ((v7 ^ (1 << v12)) + 2LL * (v7 ^ (1 << v12)) + 1);
              else
                v14 = 0LL;
              RtlAcquireSRWLockShared((volatile signed __int64 *)v14);
              v15 = *(void (**)(void))(v14 + 8);
              if ( (unsigned __int64)v15 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v11 )
              {
                v15();
                *v11 = 0LL;
                *(_DWORD *)(v6 + 80) &= ~1u;
              }
              RtlReleaseSRWLockShared((volatile signed __int64 *)v14);
            }
          }
        }
        ++v7;
        --v8;
      }
      while ( v8 );
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsContext, a2, a3, a4);
    v16 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v17 = *(_QWORD **)(v6 + 8), *v17 != v6) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    result = (_UNKNOWN **)RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  }
  if ( (v5 & 2) != 0 )
  {
    v18 = (__int64 *)(v6 + 16);
    v19 = 8LL;
    do
    {
      if ( *v18 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *v18);
      ++v18;
      --v19;
    }
    while ( v19 );
    return (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  return result;
}

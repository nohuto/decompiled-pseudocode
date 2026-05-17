/*
 * XREFs of RtlpFlsDataCleanup @ 0x180051734
 * Callers:
 *     RtlProcessFlsData @ 0x180051710 (RtlProcessFlsData.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall RtlpFlsDataCleanup(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned int v7; // esi
  __int64 v8; // rbp
  unsigned int v9; // ecx
  unsigned int v10; // edx
  __int64 v11; // rcx
  _QWORD *v12; // r14
  unsigned int v13; // ecx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  void (*v17)(void); // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rsi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (a3 & 1) != 0 )
  {
    if ( (_DWORD)qword_180187F28 )
    {
      v7 = 17;
      v8 = (unsigned int)qword_180187F28;
      do
      {
        _BitScanReverse(&v9, v7);
        v10 = v7 ^ (1 << v9);
        v11 = *(_QWORD *)(a2 + 8LL * (v9 - 4) + 16);
        if ( v11 )
        {
          v12 = (_QWORD *)(v11 + 8 * (v10 + 1LL));
          if ( v12 )
          {
            if ( *v12 )
            {
              _BitScanReverse(&v13, v7);
              v14 = v7 ^ (1 << v13);
              v15 = *((_QWORD *)&RtlpFlsContext + v13 - 3);
              if ( v15 )
                v16 = v15 + 8 * ((unsigned int)v14 + 2 * v14 + 1);
              else
                v16 = 0LL;
              RtlAcquireSRWLockShared((volatile signed __int64 *)v16, v14, v15, a4);
              v17 = *(void (**)(void))(v16 + 8);
              if ( (unsigned __int64)v17 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v12 )
              {
                v17();
                *v12 = 0LL;
                *(_DWORD *)(a2 + 80) &= ~1u;
              }
              RtlReleaseSRWLockShared((volatile signed __int64 *)v16);
            }
          }
        }
        ++v7;
        --v8;
      }
      while ( v8 );
    }
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
    v18 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v19 = *(_QWORD **)(a2 + 8), *v19 != a2) )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    result = (_UNKNOWN **)RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  }
  if ( (a3 & 2) != 0 )
  {
    v20 = (__int64 *)(a2 + 16);
    v21 = 8LL;
    do
    {
      if ( *v20 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *v20);
      ++v20;
      --v21;
    }
    while ( v21 );
    return (_UNKNOWN **)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  return result;
}

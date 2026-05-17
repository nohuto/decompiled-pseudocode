/*
 * XREFs of RtlpCallSecureMemoryCallbacks @ 0x180103224
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x180103100 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall RtlpCallSecureMemoryCallbacks(__int64 a1, __int64 a2)
{
  char v4; // r14
  char *v5; // rsi
  _DWORD *v6; // rbx
  __int64 *v7; // rdi
  bool v8; // zf
  __int64 **v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-8h]

  v15 = &v14;
  v14 = (__int64)&v14;
  v4 = 0;
  RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
  v5 = (char *)RtlpSecMemListHead;
  if ( RtlpSecMemListHead != (_UNKNOWN *)&RtlpSecMemListHead )
  {
    do
    {
      v6 = v5 + 16;
      v7 = (__int64 *)v5;
      ++*((_DWORD *)v5 + 4);
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      if ( (*((unsigned __int8 (__fastcall **)(__int64, __int64))v5 + 3))(a1, a2) )
        v4 = 1;
      RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
      v8 = (*v6)-- == 1;
      v5 = *(char **)v5;
      if ( v8 )
      {
        if ( *((__int64 **)v5 + 1) != v7
          || (v9 = (__int64 **)v7[1], *v9 != v7)
          || (*v9 = (__int64 *)v5, *((_QWORD *)v5 + 1) = v9, v10 = v15, (__int64 *)*v15 != &v14) )
        {
LABEL_15:
          __fastfail(3u);
        }
        v7[1] = (__int64)v15;
        *v7 = (__int64)&v14;
        *v10 = (__int64)v7;
        v15 = v7;
      }
    }
    while ( v5 != (char *)&RtlpSecMemListHead );
  }
  RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  while ( 1 )
  {
    v11 = v14;
    if ( (__int64 *)v14 == &v14 )
      return v4;
    if ( *(__int64 **)(v14 + 8) != &v14 )
      goto LABEL_15;
    v12 = *(_QWORD *)v14;
    if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
      goto LABEL_15;
    v14 = *(_QWORD *)v14;
    *(_QWORD *)(v12 + 8) = &v14;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  }
}

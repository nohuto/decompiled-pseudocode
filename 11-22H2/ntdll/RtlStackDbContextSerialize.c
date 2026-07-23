/*
 * XREFs of RtlStackDbContextSerialize @ 0x18012BEC0
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x18011669C (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(
        __int64 a1,
        __int64 (__fastcall *a2)(unsigned int *, __int64, __int64),
        __int64 a3)
{
  int v6; // esi
  unsigned int **v7; // rbx
  unsigned __int64 v8; // r9
  unsigned int *v9; // rdi
  unsigned int *v10; // rax
  unsigned int **v11; // rbx
  unsigned int *v12; // rdi
  unsigned int *v13; // rax
  unsigned int v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned int *v16; // [rsp+28h] [rbp-38h] BYREF
  unsigned int *v17; // [rsp+30h] [rbp-30h] BYREF
  PRTL_SRWLOCK SRWLock; // [rsp+38h] [rbp-28h]
  _DWORD v19[4]; // [rsp+40h] [rbp-20h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  SRWLock = (PRTL_SRWLOCK)(a1 + 40);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v19[0] = *(_DWORD *)a1;
  v19[1] = *(_DWORD *)(a1 + 16);
  v19[2] = 524289;
  v6 = a2(v19, 12LL, a3);
  if ( v6 >= 0 )
  {
    v7 = *(unsigned int ***)(a1 + 8);
    v8 = 0x8000000000000002uLL;
    if ( v7 && (v9 = *v7, ((unsigned __int8)*v7 & 1) == 0) )
    {
LABEL_19:
      v10 = v9;
      while ( v10 )
      {
        v16 = v10;
        v15 = v10[4];
        v6 = a2(&v15, 4LL, a3);
        if ( v6 < 0 )
          goto LABEL_41;
        v6 = a2((unsigned int *)&v16, 8LL, a3);
        if ( v6 < 0 )
          goto LABEL_41;
        v6 = a2(v16 + 6, 8LL * *((unsigned __int8 *)v16 + 19), a3);
        if ( v6 < 0 )
          goto LABEL_41;
        v8 = 0x8000000000000002uLL;
        if ( v9 )
        {
          v9 = *(unsigned int **)v9;
          v10 = v9;
          if ( ((unsigned __int8)v9 & 1) == 0 )
            continue;
        }
        for ( ++v7;
              (unsigned __int64)v7 < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
              ++v7 )
        {
          v9 = *v7;
          if ( ((unsigned __int8)*v7 & 1) == 0 )
            goto LABEL_19;
        }
        break;
      }
    }
    else
    {
      for ( ++v7; (unsigned __int64)v7 < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5); ++v7 )
      {
        v9 = *v7;
        if ( ((unsigned __int8)*v7 & 1) == 0 )
          goto LABEL_19;
      }
    }
    v11 = *(unsigned int ***)(a1 + 24);
    if ( v11 && (v12 = *v11, ((unsigned __int8)*v11 & 1) == 0) )
    {
LABEL_38:
      v13 = v12;
      while ( v13 )
      {
        v17 = v13;
        v15 = v13[4];
        v6 = a2(&v15, 4LL, a3);
        if ( v6 < 0 )
          goto LABEL_41;
        v6 = a2((unsigned int *)&v17, 8LL, a3);
        if ( v6 < 0 )
          goto LABEL_41;
        v6 = a2(v17 + 6, (HIBYTE(v15) + 7) & 0xFFFFFFF8, a3);
        if ( v6 < 0 )
          goto LABEL_41;
        if ( v12 )
        {
          v12 = *(unsigned int **)v12;
          v13 = v12;
          if ( ((unsigned __int8)v12 & 1) == 0 )
            continue;
        }
        for ( ++v11;
              (unsigned __int64)v11 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
              ++v11 )
        {
          v12 = *v11;
          if ( ((unsigned __int8)*v11 & 1) == 0 )
            goto LABEL_38;
        }
        break;
      }
    }
    else
    {
      for ( ++v11;
            (unsigned __int64)v11 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
            ++v11 )
      {
        v12 = *v11;
        if ( ((unsigned __int8)*v11 & 1) == 0 )
          goto LABEL_38;
      }
    }
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned __int64))a2)(0LL, 0LL, a3, v8);
  }
LABEL_41:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  RtlReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v6;
}

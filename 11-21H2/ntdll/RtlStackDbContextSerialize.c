/*
 * XREFs of RtlStackDbContextSerialize @ 0x180127244
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x1801162AC (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(
        __int64 a1,
        __int64 (__fastcall *a2)(unsigned int *, __int64, __int64),
        __int64 a3)
{
  int v6; // esi
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // r9
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 *v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 *v13; // rbx
  unsigned __int64 *v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 *v16; // r15
  unsigned __int64 v17; // rax
  unsigned int v19; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  PRTL_SRWLOCK SRWLock; // [rsp+38h] [rbp-28h]
  PRTL_SRWLOCK v23; // [rsp+40h] [rbp-20h]
  _DWORD v24[4]; // [rsp+48h] [rbp-18h] BYREF

  SRWLock = (PRTL_SRWLOCK)(a1 + 32);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
  v23 = (PRTL_SRWLOCK)(a1 + 40);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  v24[0] = *(_DWORD *)a1;
  v24[1] = *(_DWORD *)(a1 + 16);
  v24[2] = 524289;
  v6 = a2(v24, 12LL, a3);
  if ( v6 >= 0 )
  {
    v7 = *(unsigned __int64 **)(a1 + 8);
    v8 = 0x8000000000000002uLL;
    v9 = v7;
    if ( v7 )
    {
      v10 = *v7;
      if ( (*v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v10 = *v7;
      if ( (v10 & 1) == 0 )
      {
LABEL_24:
        v12 = v10;
        while ( v12 )
        {
          v20 = v12;
          v11 = (unsigned __int64 *)v10;
          v19 = *(_DWORD *)(v12 + 16);
          v6 = a2(&v19, 4LL, a3);
          if ( v6 < 0 )
            goto LABEL_51;
          v6 = a2((unsigned int *)&v20, 8LL, a3);
          if ( v6 < 0 )
            goto LABEL_51;
          v6 = a2((unsigned int *)(v20 + 24), 8LL * *(unsigned __int8 *)(v20 + 19), a3);
          if ( v6 < 0 )
            goto LABEL_51;
          v8 = 0x8000000000000002uLL;
          if ( v10 )
          {
            v10 = *(_QWORD *)v10;
            if ( (v10 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              v10 = *v11;
            v12 = v10;
            if ( (v10 & 1) == 0 )
              continue;
          }
          for ( ++v7;
                (unsigned __int64)v7 < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
                ++v7 )
          {
            v10 = *v7;
            if ( (*v7 & 1) == 0 )
              goto LABEL_24;
          }
          goto LABEL_26;
        }
        goto LABEL_26;
      }
      v9 = *(unsigned __int64 **)(a1 + 8);
    }
    for ( ++v7; v7 < &v9[(unsigned __int64)*(unsigned int *)(a1 + 4) >> 5]; ++v7 )
    {
      v10 = *v7;
      if ( (*v7 & 1) == 0 )
        goto LABEL_24;
    }
LABEL_26:
    v13 = *(unsigned __int64 **)(a1 + 24);
    v14 = v13;
    if ( v13 )
    {
      v15 = *v13;
      if ( (*v13 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v15 = *v13;
      if ( (v15 & 1) == 0 )
      {
LABEL_48:
        v17 = v15;
        while ( v17 )
        {
          v21 = v17;
          v16 = (unsigned __int64 *)v15;
          v19 = *(_DWORD *)(v17 + 16);
          v6 = a2(&v19, 4LL, a3);
          if ( v6 < 0 )
            goto LABEL_51;
          v6 = a2((unsigned int *)&v21, 8LL, a3);
          if ( v6 < 0 )
            goto LABEL_51;
          v6 = a2((unsigned int *)(v21 + 24), (HIBYTE(v19) + 7) & 0xFFFFFFF8, a3);
          if ( v6 < 0 )
            goto LABEL_51;
          if ( v15 )
          {
            v15 = *(_QWORD *)v15;
            if ( (v15 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              v15 = *v16;
            v17 = v15;
            if ( (v15 & 1) == 0 )
              continue;
          }
          for ( ++v13;
                (unsigned __int64)v13 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
                ++v13 )
          {
            v15 = *v13;
            if ( (*v13 & 1) == 0 )
              goto LABEL_48;
          }
          break;
        }
LABEL_50:
        v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned __int64))a2)(0LL, 0LL, a3, v8);
        goto LABEL_51;
      }
      v14 = *(unsigned __int64 **)(a1 + 24);
    }
    for ( ++v13; v13 < &v14[(unsigned __int64)*(unsigned int *)(a1 + 20) >> 5]; ++v13 )
    {
      v15 = *v13;
      if ( (*v13 & 1) == 0 )
        goto LABEL_48;
    }
    goto LABEL_50;
  }
LABEL_51:
  RtlReleaseSRWLockExclusive(SRWLock);
  RtlReleaseSRWLockExclusive(v23);
  return (unsigned int)v6;
}

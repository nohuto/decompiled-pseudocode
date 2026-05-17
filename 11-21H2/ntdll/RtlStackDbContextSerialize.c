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
        __int64 (__fastcall *a2)(unsigned int *, __int64, unsigned __int64),
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  int v10; // esi
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // r9
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 *v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 *v17; // rbx
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 *v20; // r15
  unsigned __int64 v21; // rax
  unsigned int v23; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int64 *v26; // [rsp+38h] [rbp-28h]
  volatile signed __int64 *v27; // [rsp+40h] [rbp-20h]
  _DWORD v28[4]; // [rsp+48h] [rbp-18h] BYREF

  v26 = (volatile signed __int64 *)(a1 + 32);
  RtlAcquireSRWLockExclusive(a1 + 32, (unsigned __int64)a2, a3, a4);
  v27 = (volatile signed __int64 *)(a1 + 40);
  RtlAcquireSRWLockExclusive(a1 + 40, v7, v8, v9);
  v28[0] = *(_DWORD *)a1;
  v28[1] = *(_DWORD *)(a1 + 16);
  v28[2] = 524289;
  v10 = a2(v28, 12LL, a3);
  if ( v10 >= 0 )
  {
    v11 = *(unsigned __int64 **)(a1 + 8);
    v12 = 0x8000000000000002uLL;
    v13 = v11;
    if ( v11 )
    {
      v14 = *v11;
      if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v14 = *v11;
      if ( (v14 & 1) == 0 )
      {
LABEL_24:
        v16 = v14;
        while ( v16 )
        {
          v24 = v16;
          v15 = (unsigned __int64 *)v14;
          v23 = *(_DWORD *)(v16 + 16);
          v10 = a2(&v23, 4LL, a3);
          if ( v10 < 0 )
            goto LABEL_51;
          v10 = a2((unsigned int *)&v24, 8LL, a3);
          if ( v10 < 0 )
            goto LABEL_51;
          v10 = a2((unsigned int *)(v24 + 24), 8LL * *(unsigned __int8 *)(v24 + 19), a3);
          if ( v10 < 0 )
            goto LABEL_51;
          v12 = 0x8000000000000002uLL;
          if ( v14 )
          {
            v14 = *(_QWORD *)v14;
            if ( (v14 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              v14 = *v15;
            v16 = v14;
            if ( (v14 & 1) == 0 )
              continue;
          }
          for ( ++v11;
                (unsigned __int64)v11 < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
                ++v11 )
          {
            v14 = *v11;
            if ( (*v11 & 1) == 0 )
              goto LABEL_24;
          }
          goto LABEL_26;
        }
        goto LABEL_26;
      }
      v13 = *(unsigned __int64 **)(a1 + 8);
    }
    for ( ++v11; v11 < &v13[(unsigned __int64)*(unsigned int *)(a1 + 4) >> 5]; ++v11 )
    {
      v14 = *v11;
      if ( (*v11 & 1) == 0 )
        goto LABEL_24;
    }
LABEL_26:
    v17 = *(unsigned __int64 **)(a1 + 24);
    v18 = v17;
    if ( v17 )
    {
      v19 = *v17;
      if ( (*v17 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v19 = *v17;
      if ( (v19 & 1) == 0 )
      {
LABEL_48:
        v21 = v19;
        while ( v21 )
        {
          v25 = v21;
          v20 = (unsigned __int64 *)v19;
          v23 = *(_DWORD *)(v21 + 16);
          v10 = a2(&v23, 4LL, a3);
          if ( v10 < 0 )
            goto LABEL_51;
          v10 = a2((unsigned int *)&v25, 8LL, a3);
          if ( v10 < 0 )
            goto LABEL_51;
          v10 = a2((unsigned int *)(v25 + 24), (HIBYTE(v23) + 7) & 0xFFFFFFF8, a3);
          if ( v10 < 0 )
            goto LABEL_51;
          if ( v19 )
          {
            v19 = *(_QWORD *)v19;
            if ( (v19 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              v19 = *v20;
            v21 = v19;
            if ( (v19 & 1) == 0 )
              continue;
          }
          for ( ++v17;
                (unsigned __int64)v17 < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
                ++v17 )
          {
            v19 = *v17;
            if ( (*v17 & 1) == 0 )
              goto LABEL_48;
          }
          break;
        }
LABEL_50:
        v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64, unsigned __int64))a2)(0LL, 0LL, a3, v12);
        goto LABEL_51;
      }
      v18 = *(unsigned __int64 **)(a1 + 24);
    }
    for ( ++v17; v17 < &v18[(unsigned __int64)*(unsigned int *)(a1 + 20) >> 5]; ++v17 )
    {
      v19 = *v17;
      if ( (*v17 & 1) == 0 )
        goto LABEL_48;
    }
    goto LABEL_50;
  }
LABEL_51:
  RtlReleaseSRWLockExclusive(v26);
  RtlReleaseSRWLockExclusive(v27);
  return (unsigned int)v10;
}

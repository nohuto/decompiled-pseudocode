/*
 * XREFs of sub_14036858C @ 0x14036858C
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14036858C(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v6; // edi
  char *v7; // rsi
  unsigned int v8; // r14d
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  unsigned __int64 *v11; // rcx
  __int64 v12; // r12
  bool v13; // zf
  __int64 v14; // rcx
  void *v15; // r13
  ULONG_PTR v16; // r14
  struct _KTHREAD *v17; // rsi
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // rbx
  int v21; // edx
  __int64 v22; // r12
  unsigned __int64 v23; // rcx
  __int64 v24; // r15
  char *PoolWithQuotaTag; // rax
  _OWORD *v26; // rcx
  int v27; // [rsp+30h] [rbp-58h]
  int v28; // [rsp+34h] [rbp-54h]
  unsigned __int64 v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+40h] [rbp-48h]
  PVOID P; // [rsp+98h] [rbp+10h]
  __int64 v32; // [rsp+A0h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v29 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v30 = v2;
  if ( v2 < v29 )
    return 3221225621LL;
  v3 = v2 - v29;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v28 = v3;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 > 0x15555555 )
    return 3221225621LL;
  v27 = 12 * v4;
  P = 0LL;
  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  v32 = *((_QWORD *)CurrentThread + 68);
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx(v32 + 2128, 0LL);
  v7 = *(char **)(v32 + 2120);
  if ( v7 )
  {
    v8 = *(_DWORD *)v7;
    v9 = *((_DWORD *)v7 + 1);
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  if ( v8 + 1 <= v9 )
    goto LABEL_11;
  v22 = v9 + 10;
  if ( (unsigned int)v22 < v9 || (v23 = 24 * v22 + 16, v23 >= 0xFFFFFFFF) )
  {
    v6 = -1073741675;
    goto LABEL_22;
  }
  v24 = *(_QWORD *)(v32 + 2120);
  P = (PVOID)v24;
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v23, 0x46447452u);
  v7 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v26 = PoolWithQuotaTag + 16;
    if ( v8 )
    {
      memmove(v26, (const void *)(v24 + 16), 24LL * v8);
    }
    else
    {
      *v26 = 0LL;
      *((_QWORD *)PoolWithQuotaTag + 4) = 0LL;
      v8 = 1;
    }
    *(_DWORD *)v7 = v8;
    *((_DWORD *)v7 + 1) = v22;
    v7[12] = 0;
    *(_QWORD *)(v32 + 2120) = v7;
LABEL_11:
    v10 = 1;
    if ( v8 > 1 )
    {
      v11 = (unsigned __int64 *)(v7 + 48);
      do
      {
        if ( v29 < *v11 )
          break;
        ++v10;
        v11 += 3;
      }
      while ( v10 < v8 );
    }
    if ( *(_QWORD *)&v7[24 * v10] + (unsigned __int64)*(unsigned int *)&v7[24 * v10 + 8] <= v29 )
    {
      v12 = v10;
      v13 = v10 == v8;
      if ( v10 >= v8 )
      {
LABEL_19:
        if ( !v13 )
          memmove(&v7[16 * v10 + 40 + 8 * v10], &v7[16 * v10 + 16 + 8 * v10], 24LL * (v8 - v10));
        v14 = 3 * v12;
        *(_QWORD *)&v7[8 * v14 + 16] = a1;
        *(_QWORD *)&v7[8 * v14 + 24] = v29;
        *(_DWORD *)&v7[8 * v14 + 32] = v28;
        *(_DWORD *)&v7[8 * v14 + 36] = v27;
        *(_DWORD *)v7 = v8 + 1;
        goto LABEL_22;
      }
      if ( *(_QWORD *)&v7[24 * v10 + 24] >= v30 )
      {
        v13 = v10 == v8;
        goto LABEL_19;
      }
    }
    v6 = -1073741800;
LABEL_22:
    v15 = P;
    goto LABEL_23;
  }
  v6 = -1073741670;
  v15 = 0LL;
LABEL_23:
  v16 = v32 + 2128;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 2128), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v16);
  v17 = KeGetCurrentThread();
  if ( v16 - qword_140C50630 < 0x8000000000LL )
    v18 = sub_140287F30(*((_QWORD *)v17 + 23));
  else
    v18 = -1;
  _disable();
  v19 = 0;
  v20 = (__int64)v17 + 1696;
  do
  {
    if ( (*(_QWORD *)v20 & 0x7FFFFFFFFFFFFFFCLL) == (v16 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_BYTE *)(v20 + 18)
      && (*(_DWORD *)v20 & 1) == 0
      && *(_DWORD *)(v20 + 8) == v18 )
    {
      *(_BYTE *)(v20 + 18) = 0;
      goto LABEL_33;
    }
    ++v19;
    v20 += 96LL;
  }
  while ( v19 < 6 );
  v20 = 0LL;
LABEL_33:
  if ( v20 )
  {
    if ( *(__int64 *)v20 < 0 )
    {
      *(_BYTE *)v20 |= 2u;
      _enable();
      sub_14034EE30(v20);
      _disable();
    }
    v21 = *(_DWORD *)(v20 + 88);
    *(_DWORD *)(v20 + 88) = 0;
    *(_BYTE *)(v20 + 17) = 0;
    *(_QWORD *)v20 = 0LL;
    *((_BYTE *)v17 + 792) |= 1 << *(_BYTE *)(v20 + 16);
    _enable();
    if ( v21 )
      sub_14022B568((ULONG_PTR)v17, v16, v21);
  }
  else
  {
    if ( (*((_DWORD *)v17 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v17, v16, v18, 0LL);
    _enable();
  }
  v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v15 )
    ExFreePoolWithTag(v15, 0x46447452u);
  return v6;
}

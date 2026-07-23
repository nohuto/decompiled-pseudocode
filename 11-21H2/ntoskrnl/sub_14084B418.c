/*
 * XREFs of sub_14084B418 @ 0x14084B418
 * Callers:
 *     sub_14084A7D0 @ 0x14084A7D0 (sub_14084A7D0.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_14096E2E0 @ 0x14096E2E0 (sub_14096E2E0.c)
 * Callees:
 *     sub_140268BB0 @ 0x140268BB0 (sub_140268BB0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14036C978 @ 0x14036C978 (sub_14036C978.c)
 *     sub_1403CF51C @ 0x1403CF51C (sub_1403CF51C.c)
 *     sub_1403CF728 @ 0x1403CF728 (sub_1403CF728.c)
 *     sub_1403CF758 @ 0x1403CF758 (sub_1403CF758.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall sub_14084B418(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v3; // r13
  _QWORD *v4; // rdx
  __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v7; // r12d
  volatile signed __int64 *v8; // rdi
  __int64 v9; // r15
  int v10; // r8d
  unsigned int v11; // eax
  __int16 v12; // dx
  __int64 *v13; // r9
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned __int8 v16; // cf
  int v17; // eax
  __int16 v18; // ax
  char v19; // bl
  bool v20; // zf
  KPRIORITY v21; // edx
  BOOLEAN v22; // r8
  int SystemThread; // r15d
  __int64 v25; // [rsp+90h] [rbp+8h] BYREF
  __int64 i; // [rsp+98h] [rbp+10h]

  v25 = 0LL;
  *(_BYTE *)(a1 + 206) |= 1u;
  v1 = 0LL;
  v3 = *(_QWORD *)a1;
  for ( i = *(_QWORD *)(a1 + 8); (unsigned int)v1 < *(_DWORD *)(a1 + 72); *v4 = 2575857425LL )
  {
    v4 = *(_QWORD **)(*(_QWORD *)(a1 + 64) + 8 * v1);
    v1 = (unsigned int)(v1 + 1);
  }
  v5 = *(_QWORD *)(a1 + 248);
  CurrentThread = KeGetCurrentThread();
  v7 = 16;
  if ( (ULONG_PTR *)v5 != &StartContext )
    v7 = 1;
  --*((_WORD *)CurrentThread + 243);
  v8 = (volatile signed __int64 *)(v5 + 1064);
  ExAcquirePushLockExclusiveEx(v5 + 1064, 0LL);
  if ( dword_140C529C4 )
  {
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5 + 1064);
    sub_1402AFC00(v5 + 1064);
    v20 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v20 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return 3221225738LL;
  }
  if ( !*(_QWORD *)(v5 + 160) )
  {
    if ( !(unsigned int)sub_14036C978(v5) )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5 + 1064);
      sub_1402AFC00(v5 + 1064);
      v20 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v20 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      return 3221225773LL;
    }
    SystemThread = PsCreateSystemThreadEx(
                     (int)&v25,
                     0x1FFFFF,
                     0LL,
                     *(_QWORD *)(*(_QWORD *)(v5 + 176) + 112LL),
                     0LL,
                     (__int64)sub_1403CFD20,
                     v5,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5 + 1064);
      sub_1402AFC00(v5 + 1064);
      v20 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v20 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      return (unsigned int)SystemThread;
    }
    *(_QWORD *)(v5 + 160) = v25;
  }
  v9 = *(unsigned int *)(v5 + 16728);
  if ( (unsigned int)v9 >= v7 )
  {
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5 + 1064);
    sub_1402AFC00(v5 + 1064);
    v20 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( !v20 )
      return 3221225623LL;
    goto LABEL_71;
  }
  v10 = 0;
  *(_WORD *)(a1 + 204) ^= ((unsigned __int8)v9 ^ (unsigned __int8)*(_WORD *)(a1 + 204)) & 0xF;
  v11 = *(_DWORD *)(v5 + 16728);
  v12 = *(_WORD *)(a1 + 204);
  if ( v11 )
  {
    v13 = (__int64 *)(v5 + 16736);
    v14 = v11;
    do
    {
      v15 = *v13++;
      v16 = _bittest16((const signed __int16 *)(v15 + 204), 0xBu);
      v17 = v10 + 1;
      if ( !v16 )
        v17 = v10;
      v10 = v17;
      --v14;
    }
    while ( v14 );
    if ( v17 )
    {
      if ( (v12 & 0x810) != 0 )
      {
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5 + 1064);
        sub_1402AFC00(v5 + 1064);
        v20 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
        if ( v20 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          KiCheckForKernelApcDelivery();
        return 3221225659LL;
      }
      *(_WORD *)(a1 + 204) = v12 | 0x20;
    }
  }
  v18 = *(_WORD *)(a1 + 204);
  if ( (v18 & 0x50) != 0 )
  {
    if ( (v18 & 0x10) == 0 || !(unsigned int)sub_140268BB0(v5) )
    {
      sub_1403CF758(a1, 1);
      *(_QWORD *)(v5 + 8 * v9 + 16736) = a1;
      *(_DWORD *)(v5 + 16728) = v9 + 1;
LABEL_20:
      v19 = _InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
        ExfTryToWakePushLock(v5 + 1064);
      sub_1402AFC00(v5 + 1064);
      v20 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v20 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      sub_1403CF728(v5, 0LL, 0);
      KeSetEvent((PRKEVENT)(v5 + 904), v21, v22);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5 + 1064);
    sub_1402AFC00(v5 + 1064);
    v20 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( !v20 )
      return 3221225623LL;
LABEL_71:
    if ( *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    return 3221225623LL;
  }
  if ( (unsigned int)sub_1403CF51C(v5, v3, i, 0, a1) )
  {
    if ( (*(_BYTE *)(a1 + 204) & 0x20) == 0 && !*(_DWORD *)(v5 + 1060) )
      *(_DWORD *)(v5 + 1060) = 1;
    goto LABEL_20;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5 + 1064);
  sub_1402AFC00(v5 + 1064);
  v20 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v20 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return 3221225713LL;
}

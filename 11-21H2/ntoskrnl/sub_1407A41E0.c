/*
 * XREFs of sub_1407A41E0 @ 0x1407A41E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402334D8 @ 0x1402334D8 (sub_1402334D8.c)
 *     sub_14023379C @ 0x14023379C (sub_14023379C.c)
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_140298A3C @ 0x140298A3C (sub_140298A3C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407A1AC0 @ 0x1407A1AC0 (sub_1407A1AC0.c)
 *     sub_1407A2B78 @ 0x1407A2B78 (sub_1407A2B78.c)
 *     sub_1407A418C @ 0x1407A418C (sub_1407A418C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall sub_1407A41E0(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // r9
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v5; // rax
  void *v6; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // r9d
  _QWORD *v15; // r8
  const char *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r11
  volatile signed __int64 *v20; // r14
  __int64 *v21; // rsi
  __int64 *v22; // rcx
  __int64 **v23; // rax

  sub_1402334D8(BugCheckParameter2);
  if ( *(_DWORD *)(BugCheckParameter2 + 1452) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1452), 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1440) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1440), 0LL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1444) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1444), 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1448) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1448), 2uLL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter2 + 1656);
  if ( v2 != BugCheckParameter2 + 1656 )
    KeBugCheckEx(0x1C6u, 0x14uLL, BugCheckParameter2, v2, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 1680);
  if ( v3 != BugCheckParameter2 + 1680 )
    KeBugCheckEx(0x1C6u, 0x15uLL, BugCheckParameter2, v3, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 40) )
    sub_140298A3C(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 1232) )
  {
    --*((_WORD *)CurrentThread + 242);
    v5 = sub_1407A1AC0((unsigned int *)qword_140D06A60, *(_QWORD *)(BugCheckParameter2 + 1232));
    if ( !v5 )
      KeBugCheck(0x17u);
    sub_1407A2B78(qword_140D06A60, *(_QWORD *)(BugCheckParameter2 + 1232), v5);
    sub_1402F9540((__int64)CurrentThread);
  }
  sub_1407A418C(BugCheckParameter2);
  v6 = *(void **)(BugCheckParameter2 + 1632);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E6854u);
  result = sub_1402F5718();
  if ( result >= qword_140C4ED30 )
  {
    v9 = qword_140C4ED20;
    if ( qword_140C4ED20 )
    {
      if ( (_DWORD)qword_140C4ED38 )
      {
        v10 = 0LL;
        v11 = qword_140C24700;
        v12 = (unsigned int)qword_140C4ED38;
        do
        {
          v13 = *v11;
          if ( ((*(unsigned __int8 *)(*v11 + 66) >> 6) & 1) != _bittest64(&qword_140C4ED40, v10) && !qword_140C4ECF0 )
          {
            qword_140C4ECF0 = (unsigned int)__ROL4__(1207959560, 133);
            xmmword_140C4ECF8 = 0LL;
            qword_140C4ED08 = 268LL;
            qword_140C4ED10 = v13;
          }
          ++v10;
          ++v11;
          --v12;
        }
        while ( v12 );
        v9 = qword_140C4ED20;
      }
      v14 = 64;
      v15 = (_QWORD *)(qword_140C4ED60 + 112);
      v16 = (const char *)(qword_140C4ED60 + 112);
      if ( qword_140C4ED60 + 112 < (unsigned __int64)(qword_140C4ED60 + 176) )
      {
        do
        {
          _mm_prefetch(v16, 0);
          v16 += 64;
        }
        while ( (unsigned __int64)v16 < qword_140C4ED60 + 176 );
      }
      v17 = 8LL;
      do
      {
        v9 = __ROR8__(v9 - *v15++, qword_140C4ED28);
        v14 -= 8;
        --v17;
      }
      while ( v17 );
      for ( ; v14; --v14 )
      {
        v18 = *(unsigned __int8 *)v15;
        v15 = (_QWORD *)((char *)v15 + 1);
        v9 = __ROR8__(v9 - v18, qword_140C4ED28);
      }
      if ( qword_140C4ED68 != v9 )
      {
        if ( qword_140C4ECF0 )
          goto LABEL_45;
        qword_140C4ECF0 = (unsigned int)__ROR4__(150994945, 152);
        xmmword_140C4ECF8 = 0LL;
        qword_140C4ED08 = 268LL;
        qword_140C4ED10 = qword_140C4ED60;
      }
    }
    if ( !qword_140C4ECF0 )
    {
LABEL_31:
      v19 = sub_1402F5718();
      v8 = 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL;
      result = v19 + v8 + 288000000000LL;
      qword_140C4ED30 = result;
      goto LABEL_32;
    }
LABEL_45:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))stru_140C4ECB0.DeferredRoutine != sub_140648720 )
      KeInitializeDpc(&stru_140C4ECB0, (PKDEFERRED_ROUTINE)sub_140648720, &stru_140C4ECB0);
    qword_140C4ED18 = 1934400LL;
    KeInsertQueueDpc(&stru_140C4ECB0, 0LL, 0LL);
    goto LABEL_31;
  }
LABEL_32:
  v20 = *(volatile signed __int64 **)(BugCheckParameter2 + 544);
  if ( v20 )
  {
    v21 = (__int64 *)(BugCheckParameter2 + 1336);
    if ( *(_QWORD *)(BugCheckParameter2 + 1336) )
    {
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v20 + 135), 0LL);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v20 + 268), 0LL);
      sub_14023379C(BugCheckParameter2);
      v22 = (__int64 *)*v21;
      if ( *(__int64 **)(*v21 + 8) != v21 || (v23 = *(__int64 ***)(BugCheckParameter2 + 1344), *v23 != v21) )
        __fastfail(3u);
      *v23 = v22;
      v22[1] = (__int64)v23;
      if ( (_InterlockedExchangeAdd64(v20 + 268, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v20 + 268);
      sub_1402AFC00((ULONG_PTR)(v20 + 268));
      if ( (_InterlockedExchangeAdd64(v20 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v20 + 135);
      sub_1402AFC00((ULONG_PTR)(v20 + 135));
      sub_1402AC800((__int64)CurrentThread);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 1376) & 0x100000) != 0 )
      sub_14042A5E0(BugCheckParameter2, v8);
    return ObfDereferenceObjectWithTag((PVOID)v20, 0x72437350u);
  }
  return result;
}

/*
 * XREFs of sub_1406965F4 @ 0x1406965F4
 * Callers:
 *     sub_14021F764 @ 0x14021F764 (sub_14021F764.c)
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 *     sub_1407530D0 @ 0x1407530D0 (sub_1407530D0.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_140847260 @ 0x140847260 (sub_140847260.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1405F5A58 @ 0x1405F5A58 (sub_1405F5A58.c)
 *     sub_140695078 @ 0x140695078 (sub_140695078.c)
 *     sub_140696750 @ 0x140696750 (sub_140696750.c)
 */

__int64 __fastcall sub_1406965F4(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  char v5; // r15
  char v6; // r12
  int v7; // edi
  char *v8; // rsi
  struct _KTHREAD *v9; // rax
  volatile signed __int64 *v10; // rsi
  struct _KTHREAD *v12; // rax
  volatile signed __int64 *v13; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v15; // eax
  struct _KTHREAD *v16; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+48h] BYREF
  __int64 v18; // [rsp+78h] [rbp+50h]
  __int64 v19; // [rsp+80h] [rbp+58h] BYREF

  v18 = a2;
  v2 = *(unsigned int *)(a1 + 120);
  v3 = a2;
  BugCheckParameter2 = 0LL;
  v19 = 0LL;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( (unsigned int)v2 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C25410, 0LL);
    v5 = 1;
    v15 = sub_1405F5A58(v2, 0, (__int64 *)&BugCheckParameter2);
    v7 = v15;
    if ( v15 < 0 )
    {
      if ( v15 != -1073741275 )
        goto LABEL_26;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C25410, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140C25410);
      sub_1402AFC00((ULONG_PTR)&qword_140C25410);
      KeLeaveCriticalRegion();
      v16 = KeGetCurrentThread();
      --*((_WORD *)v16 + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C25410, 0LL);
      v7 = sub_1405F5A58(v2, 1, (__int64 *)&BugCheckParameter2);
      v5 = 0;
      v6 = 1;
      if ( v7 < 0 )
        goto LABEL_10;
    }
    v8 = (char *)BugCheckParameter2;
  }
  else
  {
    v8 = (char *)&unk_140C25340 + 40 * v2;
    BugCheckParameter2 = (ULONG_PTR)v8;
  }
  if ( !v8[32] )
  {
    v12 = KeGetCurrentThread();
    --*((_WORD *)v12 + 242);
    v13 = (volatile signed __int64 *)BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( !v8[32] )
      v7 = sub_140695078((__int64)v13);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    sub_1402AFC00(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v3 = v18;
  }
  if ( !v7 )
  {
    v9 = KeGetCurrentThread();
    --*((_WORD *)v9 + 242);
    v10 = (volatile signed __int64 *)BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v7 = sub_140696750(v10, v3, &v19);
    if ( !v7 )
      *(_QWORD *)(a1 + 1080) = v19;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    sub_1402AFC00(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
LABEL_10:
  if ( v6 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C25410, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C25410);
    goto LABEL_28;
  }
  if ( v5 )
  {
LABEL_26:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C25410, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C25410);
LABEL_28:
    sub_1402AFC00((ULONG_PTR)&qword_140C25410);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v7;
}

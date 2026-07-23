/*
 * XREFs of sub_140796530 @ 0x140796530
 * Callers:
 *     <none>
 * Callees:
 *     sub_140234764 @ 0x140234764 (sub_140234764.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F20E8 @ 0x1406F20E8 (sub_1406F20E8.c)
 *     sub_14078F094 @ 0x14078F094 (sub_14078F094.c)
 *     sub_14078F0FC @ 0x14078F0FC (sub_14078F0FC.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_1407973D0 @ 0x1407973D0 (sub_1407973D0.c)
 *     sub_140797468 @ 0x140797468 (sub_140797468.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140796530(__int64 *BugCheckParameter2)
{
  __int64 v1; // r13
  __int64 v2; // r14
  _QWORD *v4; // rdi
  struct _KTHREAD *v5; // rax
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *v8; // r8
  __int64 **v9; // rdx
  ULONG_PTR v10; // rax
  volatile __int64 *v11; // rbp
  __int64 v12; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rcx
  __int64 **v16; // rax
  char v17; // si
  _QWORD *v18; // r14
  volatile signed __int32 *v19; // rax
  volatile signed __int32 *v20; // rbp
  volatile signed __int32 *v21; // rsi
  __int64 v22; // r15
  struct _KQUEUE *v23; // rcx
  volatile signed __int32 **v24; // rbx
  _QWORD v25[10]; // [rsp+30h] [rbp-68h] BYREF

  v1 = BugCheckParameter2[4];
  v2 = 4LL;
  v4 = (_QWORD *)BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) == 0 )
  {
    if ( v4 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 51), 0LL);
      v4[52] = KeGetCurrentThread();
    }
    v5 = KeGetCurrentThread();
    --*((_WORD *)v5 + 242);
    ExAcquirePushLockExclusiveEx(v1 + 408, 0LL);
    *(_QWORD *)(v1 + 416) = KeGetCurrentThread();
    v6 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) == BugCheckParameter2 )
    {
      v7 = (__int64 **)BugCheckParameter2[1];
      if ( *v7 == BugCheckParameter2 )
      {
        *v7 = v6;
        v6[1] = (__int64)v7;
        v8 = (__int64 *)BugCheckParameter2[2];
        if ( (__int64 *)v8[1] == BugCheckParameter2 + 2 )
        {
          v9 = (__int64 **)BugCheckParameter2[3];
          if ( *v9 == BugCheckParameter2 + 2 )
          {
            *v9 = v8;
            v8[1] = (__int64)v9;
            *(_QWORD *)(v1 + 416) = 0LL;
            ExReleasePushLockEx(v1 + 408, 0LL);
            sub_1402F9540((__int64)KeGetCurrentThread());
            if ( v4 )
            {
              v4[52] = 0LL;
              ExReleasePushLockEx((ULONG_PTR)(v4 + 51), 0LL);
              sub_1402F9540((__int64)KeGetCurrentThread());
            }
            goto LABEL_10;
          }
        }
      }
    }
LABEL_25:
    __fastfail(3u);
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15DB0, 0LL);
  v15 = (__int64 *)*BugCheckParameter2;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 )
    goto LABEL_25;
  v16 = (__int64 **)BugCheckParameter2[1];
  if ( *v16 != BugCheckParameter2 )
    goto LABEL_25;
  *v16 = v15;
  v15[1] = (__int64)v16;
  v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15DB0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C15DB0);
  sub_1402AFC00((ULONG_PTR)&qword_140C15DB0);
LABEL_10:
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFF7Fu);
  v10 = *((unsigned __int16 *)BugCheckParameter2 + 49);
  if ( (v10 & 2) != 0 )
  {
    v11 = BugCheckParameter2 + 6;
    do
    {
      v12 = _InterlockedExchange64(v11, 0LL);
      if ( v12 )
      {
        v22 = *(_QWORD *)(v12 + 32);
        memset(v25, 0, 0x48uLL);
        if ( (*(_BYTE *)(v22 + 98) & 0x40) == 0 )
        {
          v23 = *(struct _KQUEUE **)(v22 + 48);
          *(_OWORD *)&v25[7] = *(_OWORD *)(v1 + 40);
          v25[0] = 0x4800000001LL;
          sub_1406F20E8(v23, (unsigned int *)v25);
        }
        sub_14078F094((PVOID *)v12, 2);
      }
      ++v11;
      --v2;
    }
    while ( v2 );
    sub_140797468(BugCheckParameter2[10], BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    sub_1407973D0(BugCheckParameter2);
  }
  else
  {
    if ( (v10 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, v10, 0LL);
    v18 = (_QWORD *)BugCheckParameter2[6];
    v19 = (volatile signed __int32 *)sub_140234764(v18, 1);
    v20 = v19;
    if ( v19 )
    {
      v21 = v19;
      do
      {
        v24 = (volatile signed __int32 **)v21;
        v21 = *(volatile signed __int32 **)v21;
        sub_14078F0FC(v24[2]);
        ExFreePoolWithTag(v24, 0);
      }
      while ( v20 != v21 );
    }
    ExFreePoolWithTag(v18, 0);
  }
  result = sub_140796B04((PVOID)v1);
  if ( v4 )
    return sub_140796B04(v4);
  return result;
}

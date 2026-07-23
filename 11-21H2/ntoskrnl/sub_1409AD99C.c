/*
 * XREFs of sub_1409AD99C @ 0x1409AD99C
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_140205DD4 @ 0x140205DD4 (sub_140205DD4.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     sub_1402F509C @ 0x1402F509C (sub_1402F509C.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14056FB90 @ 0x14056FB90 (sub_14056FB90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409AD99C(_QWORD *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v5; // r14
  __int64 v6; // r13
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // rdi
  signed __int64 *v10; // r15
  _QWORD *v11; // r12
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 Pool2; // rax
  _QWORD *v15; // r14
  _QWORD *v16; // rcx
  _DWORD *v17; // r12
  unsigned __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 *v22; // rdi
  unsigned __int64 v23; // rcx
  unsigned int v24; // edi
  unsigned int v25; // r12d
  __int64 v26; // r14
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  _DWORD *P; // [rsp+40h] [rbp-68h]
  signed __int64 *v31; // [rsp+48h] [rbp-60h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+50h] [rbp-58h]
  int v34; // [rsp+B8h] [rbp+10h]
  __int64 v35; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v35 = (__int64)CurrentThread;
  P = 0LL;
  v5 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  v6 = 0LL;
  LODWORD(v7) = 0;
  v8 = 0;
  BugCheckParameter2 = a1 + 360;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 360), 0LL);
  v9 = a2 & 0x40000;
  if ( (v9 & a1[129]) == 0 )
    goto LABEL_50;
  --*((_WORD *)CurrentThread + 242);
  v10 = a1 + 268;
  v31 = a1 + 268;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 268), 0LL);
  v11 = a1 + 188;
  v12 = (_QWORD *)*v11;
  if ( (_QWORD *)*v11 == v11 )
    goto LABEL_32;
  do
  {
    if ( (v9 & *(v12 - 34)) != 0 && (v12[5] & 1) == 0 )
      LODWORD(v7) = v7 + 1;
    v12 = (_QWORD *)*v12;
  }
  while ( v12 != v11 );
  if ( !(_DWORD)v7 )
    goto LABEL_32;
  v13 = (unsigned __int64)(unsigned int)v7 << 7;
  if ( v13 > 0xFFFFFFFF || (int)v13 + 8 < (unsigned int)v13 )
  {
    v8 = -1073741675;
    goto LABEL_29;
  }
  Pool2 = ExAllocatePool2(256LL, (unsigned int)(v13 + 8), 1480946512LL);
  P = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741801;
    goto LABEL_29;
  }
  v15 = (_QWORD *)*v11;
  v6 = Pool2 + 8;
  v7 = 0LL;
  if ( (_QWORD *)*v11 == v11 )
  {
LABEL_21:
    v5 = P;
LABEL_32:
    a1[129] &= ~v9;
    if ( (_DWORD)v7 )
      *v5 = v7;
    v34 = -1;
    v24 = -1;
    v25 = 0;
    if ( (_DWORD)v7 )
    {
      v26 = v6 + 112;
      v27 = v35;
      do
      {
        if ( *(_QWORD *)v26 == v27 )
        {
          v24 = v25;
          v34 = v25;
        }
        else
        {
          KeInitializeApc(
            v6 + ((unsigned __int64)v25 << 7),
            *(_QWORD *)v26,
            0,
            (__int64)sub_14056FB90,
            0LL,
            0LL,
            0,
            0LL);
          if ( !KeInsertQueueApc(v6 + ((unsigned __int64)v25 << 7), 0LL, 0LL, 0) )
          {
            v28 = *(_QWORD *)(v26 - 16);
            if ( v28 )
              sub_1402C1900(v28, 8u, *(_QWORD *)v26);
            if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)(v26 + 8), 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(P, 0);
          }
          v27 = v35;
          v24 = v34;
        }
        ++v25;
        v26 += 128LL;
      }
      while ( v25 < (unsigned int)v7 );
      v10 = v31;
    }
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    sub_1402AFC00((ULONG_PTR)v10);
    CurrentThread = (struct _KTHREAD *)v35;
    sub_1402AC800(v35);
    if ( v24 != -1 )
      sub_14056FB90(v6 + ((unsigned __int64)v24 << 7));
    sub_1402F374C(0);
    sub_140205DD4(a1);
    goto LABEL_50;
  }
  v16 = a1;
  while ( 1 )
  {
    v17 = v15 - 167;
    if ( (v9 & *(v15 - 34)) == 0 || (v17[344] & 1) != 0 )
      goto LABEL_20;
    if ( (v17[29] & 0x800000) == 0 )
      break;
LABEL_19:
    v16 = a1;
    v21 = (unsigned __int64)(unsigned int)v7 << 7;
    v7 = (unsigned int)(v7 + 1);
    *(_QWORD *)(v21 + v6 + 104) = v9;
    *(_QWORD *)(v21 + v6 + 112) = v17;
    *(_QWORD *)(v21 + v6 + 120) = P;
LABEL_20:
    v15 = (_QWORD *)*v15;
    if ( v15 == v16 + 188 )
      goto LABEL_21;
  }
  v18 = sub_1402F509C(v17[147]);
  v19 = sub_1402F4B70(0x20u, v18, (__int64)(v15 - 167));
  if ( v19 )
  {
    v20 = (unsigned __int64)(unsigned int)v7 << 7;
    *(_QWORD *)(v20 + v6 + 88) = v19 - (unsigned int)dword_140D06A0C;
    *(_QWORD *)(v20 + v6 + 96) = v19;
    goto LABEL_19;
  }
  v8 = -1073741801;
  if ( (_DWORD)v7 )
  {
    v22 = (__int64 *)(v6 + 112);
    do
    {
      v23 = *(v22 - 2);
      if ( v23 )
        sub_1402C1900(v23, 8u, *v22);
      v22 += 16;
      --v7;
    }
    while ( v7 );
  }
  LODWORD(v7) = 0;
LABEL_29:
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  sub_1402AFC00((ULONG_PTR)v10);
  CurrentThread = (struct _KTHREAD *)v35;
  sub_1402AC800(v35);
LABEL_50:
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  sub_1402AFC00((ULONG_PTR)BugCheckParameter2);
  sub_1402F9540((__int64)CurrentThread);
  if ( P && !(_DWORD)v7 )
    ExFreePoolWithTag(P, 0);
  return v8;
}

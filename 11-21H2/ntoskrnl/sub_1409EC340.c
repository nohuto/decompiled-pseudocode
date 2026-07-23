/*
 * XREFs of sub_1409EC340 @ 0x1409EC340
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     sub_1402E10FC @ 0x1402E10FC (sub_1402E10FC.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F2158 @ 0x1406F2158 (sub_1406F2158.c)
 *     sub_14078F0FC @ 0x14078F0FC (sub_14078F0FC.c)
 *     sub_140790CF8 @ 0x140790CF8 (sub_140790CF8.c)
 *     sub_1407968D0 @ 0x1407968D0 (sub_1407968D0.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     sub_14079809C @ 0x14079809C (sub_14079809C.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409EC340(__int64 a1)
{
  __int64 v2; // rsi
  volatile signed __int64 *v3; // rdi
  __int64 v4; // r14
  _DWORD *Pool2; // rax
  _DWORD *v6; // r12
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // r14
  __int64 v12; // r10
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rsi
  char v16; // [rsp+28h] [rbp-79h]
  int v17; // [rsp+2Ch] [rbp-75h] BYREF
  volatile signed __int32 *v18; // [rsp+30h] [rbp-71h] BYREF
  __int64 v19; // [rsp+40h] [rbp-61h]
  _DWORD v20[30]; // [rsp+48h] [rbp-59h] BYREF
  __int128 v21; // [rsp+C0h] [rbp+1Fh] BYREF

  v18 = 0LL;
  v21 = 0LL;
  memset(&v20[2], 0, 0x70uLL);
  v3 = (volatile signed __int64 *)(a1 + 688);
  v19 = *(_QWORD *)(a1 + 1080);
  v2 = v19;
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  *(_DWORD *)(v19 + 64) = 0;
  if ( !*(_DWORD *)(a1 + 320)
    || (v4 = *(unsigned __int16 *)(v2 + 16), !(_WORD)v4)
    || (Pool2 = (_DWORD *)ExAllocatePool2(256LL, 16LL * *(unsigned __int16 *)(v2 + 16), 1953985605LL),
        (v6 = Pool2) == 0LL) )
  {
LABEL_22:
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    sub_1402AFC00((ULONG_PTR)v3);
    goto LABEL_25;
  }
  memmove(Pool2, *(const void **)(v2 + 24), 16LL * (unsigned int)v4);
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 688);
  sub_1402AFC00(a1 + 688);
  v20[0] = 3;
  v20[1] = 120;
  v7 = v4;
  do
  {
    v8 = sub_1407968D0(*(_QWORD *)(a1 + 1096), v6, 0);
    v9 = (__int64)v8;
    if ( v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 51), 0LL);
      v11 = *(_QWORD *)(v9 + 56);
      v12 = 0LL;
      *(_QWORD *)(v9 + 416) = KeGetCurrentThread();
      *(_OWORD *)&v20[10] = *(_OWORD *)v6;
      if ( v11 != v9 + 56 )
      {
        while ( 1 )
        {
          v13 = (*(_BYTE *)(v11 + 98) & 1) == 0;
          v17 = v12;
          if ( !v13 )
            goto LABEL_14;
          if ( !sub_1402E10FC(v9, *(_DWORD *)a1, &v17) )
            goto LABEL_14;
          v16 = *(_BYTE *)(v11 + 100);
          if ( ((unsigned __int8)(1 << v17) & (unsigned __int8)v16) == 0 )
            goto LABEL_14;
          sub_14079809C(v11, (__int64)&v20[18]);
          HIWORD(v20[19]) = *(_WORD *)a1;
          v20[18] = 2;
          v14 = sub_1406F2158(v9, v20, v16, &v18);
          v12 = 0LL;
          if ( v14 >= 0 )
            break;
LABEL_15:
          if ( v11 == v9 + 56 )
            goto LABEL_16;
        }
        sub_140790CF8(v11, (__int64)v18);
        sub_14078F0FC(v18);
        v12 = 0LL;
LABEL_14:
        v11 = *(_QWORD *)v11;
        goto LABEL_15;
      }
LABEL_16:
      *(_QWORD *)(v9 + 416) = v12;
      ExReleasePushLockEx(v9 + 408, 0LL);
      sub_1402F9540((__int64)KeGetCurrentThread());
      sub_140796B04((volatile signed __int64 *)v9);
    }
    v6 += 4;
    --v7;
  }
  while ( v7 );
  v15 = v19;
  v3 = (volatile signed __int64 *)(a1 + 688);
  if ( *(_DWORD *)(a1 + 320) )
  {
    *((_QWORD *)&v21 + 1) = -1LL;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    if ( *(_WORD *)(v15 + 16) && !*(_DWORD *)(v15 + 64) )
    {
      ExSetTimer(*(_QWORD *)(v15 + 8), *(_QWORD *)v15, 0LL, (__int64)&v21);
      *(_DWORD *)(v15 + 64) = 1;
    }
    goto LABEL_22;
  }
LABEL_25:
  sub_1407981E8((unsigned int *)a1, 0);
}

/*
 * XREFs of sub_140257280 @ 0x140257280
 * Callers:
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 *     sub_14092A168 @ 0x14092A168 (sub_14092A168.c)
 *     sub_14092A29C @ 0x14092A29C (sub_14092A29C.c)
 *     sub_14092AAA4 @ 0x14092AAA4 (sub_14092AAA4.c)
 *     sub_1409AEC10 @ 0x1409AEC10 (sub_1409AEC10.c)
 *     sub_1409AF690 @ 0x1409AF690 (sub_1409AF690.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_14025753C @ 0x14025753C (sub_14025753C.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140672A64 @ 0x140672A64 (sub_140672A64.c)
 *     sub_140672A7C @ 0x140672A7C (sub_140672A7C.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_14071147C @ 0x14071147C (sub_14071147C.c)
 *     sub_140933110 @ 0x140933110 (sub_140933110.c)
 *     sub_1409E2110 @ 0x1409E2110 (sub_1409E2110.c)
 *     sub_1409E6524 @ 0x1409E6524 (sub_1409E6524.c)
 */

__int64 __fastcall sub_140257280(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // r12
  volatile signed __int64 *v6; // r14
  __int64 v7; // rcx
  struct _KTHREAD *v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rdx
  char *v12; // rbx
  int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 result; // rax
  int v17; // ebx
  char v18; // [rsp+88h] [rbp+10h]
  int v20; // [rsp+98h] [rbp+20h] BYREF

  v18 = a2;
  CurrentThread = KeGetCurrentThread();
  if ( (_BYTE)a2 )
  {
    if ( *(_QWORD *)(a1 + 1288) && (*(_DWORD *)(a1 + 1124) & 8) == 0 )
    {
      v20 = sub_140287F30(a1);
      sub_1406F83A0(23LL, a1, 1LL, &v20);
    }
    v5 = 0LL;
    --*((_WORD *)CurrentThread + 242);
    v6 = (volatile signed __int64 *)(a1 + 1080);
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    if ( *(_QWORD *)(a1 + 2224) )
    {
      LOBYTE(v7) = 1;
      v5 = sub_1402F5718(v7) - *(_QWORD *)(a1 + 2224);
      *(_QWORD *)(a1 + 2224) = 0LL;
      *(_QWORD *)(a1 + 2320) += v5;
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1080);
    v8 = KeGetCurrentThread();
    if ( (unsigned __int64)v6 - qword_140C50630 < 0x8000000000LL )
      v9 = sub_140287F30(*((_QWORD *)v8 + 23));
    else
      v9 = -1;
    _disable();
    v10 = (unsigned __int64)v6 & 0x7FFFFFFFFFFFFFFCLL;
    v11 = 0LL;
    v12 = (char *)v8 + 1696;
    do
    {
      if ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) == v10
        && v12[18]
        && (*(_DWORD *)v12 & 1) == 0
        && *((_DWORD *)v12 + 2) == v9 )
      {
        v12[18] = 0;
        goto LABEL_15;
      }
      v11 = (unsigned int)(v11 + 1);
      v12 += 96;
    }
    while ( (unsigned int)v11 < 6 );
    v12 = 0LL;
LABEL_15:
    if ( v12 )
    {
      if ( *(__int64 *)v12 < 0 )
      {
        *v12 |= 2u;
        _enable();
        sub_14034EE30(v12, v11, v10);
        _disable();
      }
      v13 = *((_DWORD *)v12 + 22);
      *((_DWORD *)v12 + 22) = 0;
      v12[17] = 0;
      *(_QWORD *)v12 = 0LL;
      *((_BYTE *)v8 + 792) |= 1 << v12[16];
      _enable();
      if ( v13 )
        sub_14022B568((ULONG_PTR)v8, a1 + 1080, v13);
    }
    else
    {
      if ( (*((_DWORD *)v8 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v8, a1 + 1080, v9, 0LL);
      _enable();
    }
    sub_1402AC800(CurrentThread);
    if ( (*(_BYTE *)(a1 + 992) & 1) != 0 )
    {
      sub_140933110(a1, v5);
    }
    else
    {
      *(_QWORD *)qword_140D071C0 += v5;
      v14 = sub_140672A7C(a1);
      if ( v14 )
      {
        v15 = sub_140672A64(v14);
        **(_QWORD **)(v15 + 64) += v5;
      }
    }
  }
  LOBYTE(a2) = v18;
  result = sub_14025753C(a1, a2, a3);
  v17 = result;
  if ( (_DWORD)result == a3 && (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    result = sub_1409E6524(0LL, CurrentThread, a1, 3LL);
  if ( v18 )
  {
    sub_14071147C(a1);
    result = *((_QWORD *)&xmmword_140D06900 + 1);
    if ( (BYTE8(xmmword_140D06900) & 2) != 0 )
    {
      if ( v17 )
        return sub_1409E2110(a1, 0LL);
    }
  }
  return result;
}

/*
 * XREFs of sub_1405FBF80 @ 0x1405FBF80
 * Callers:
 *     sub_1405FC1B0 @ 0x1405FC1B0 (sub_1405FC1B0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402D02F0 @ 0x1402D02F0 (sub_1402D02F0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14036D62C @ 0x14036D62C (sub_14036D62C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1405FBF80(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rax
  struct _KTHREAD *v13; // r14
  unsigned int v14; // ecx
  __int64 v15; // rbx
  unsigned int v16; // edx
  int v17; // r8d
  unsigned __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF
  char v23; // [rsp+90h] [rbp+40h] BYREF
  int v24; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v25 = 0LL;
  v19 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 >= *(_QWORD *)(BugCheckParameter2 + 16) )
  {
    do
    {
      v22 = 0LL;
      v21 = 0LL;
      v24 = 0;
      v20 = 0LL;
      v7 = sub_1402D02F0(&v22, &v21, &v20, &v25, &v19, &v24);
      if ( v7 < 0 )
        break;
      v8 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v9 = v8 + v25;
      if ( v8 + v25 <= v25 )
      {
        v7 = -1073741675;
        break;
      }
      v10 = v19;
      v25 += v8;
      if ( v9 > v19 )
        v10 = v9;
      v23 = 0;
      v19 = v10;
      v11 = sub_14036D62C(v9, v10, 0, 1, 0, &v23);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v12 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( v12 + v8 > v12 )
          *(_QWORD *)(BugCheckParameter2 + 16) = v12 + v8;
        v7 = 0;
        break;
      }
    }
    while ( v11 == -1073741748 );
  }
  else
  {
    v7 = 1075380276;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v13 = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 >= 0x8000000000LL )
    v14 = -1;
  else
    v14 = sub_140287F30(*((_QWORD *)v13 + 23));
  _disable();
  v15 = (__int64)v13 + 1696;
  v16 = 0;
  while ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v15 + 18)
       || (*(_DWORD *)v15 & 1) != 0
       || *(_DWORD *)(v15 + 8) != v14 )
  {
    ++v16;
    v15 += 96LL;
    if ( v16 >= 6 )
      goto LABEL_25;
  }
  *(_BYTE *)(v15 + 18) = 0;
  if ( !v15 )
  {
LABEL_25:
    if ( (*((_DWORD *)v13 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, BugCheckParameter2, v14, 0LL);
    _enable();
    goto LABEL_33;
  }
  if ( *(__int64 *)v15 < 0 )
  {
    *(_BYTE *)v15 |= 2u;
    _enable();
    sub_14034EE30(v15);
    _disable();
  }
  v17 = *(_DWORD *)(v15 + 88);
  *(_DWORD *)(v15 + 88) = 0;
  *(_BYTE *)(v15 + 17) = 0;
  *(_QWORD *)v15 = 0LL;
  *((_BYTE *)v13 + 792) |= 1 << *(_BYTE *)(v15 + 16);
  _enable();
  if ( v17 )
    sub_14022B568((ULONG_PTR)v13, BugCheckParameter2, v17);
LABEL_33:
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}

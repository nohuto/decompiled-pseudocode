/*
 * XREFs of sub_1405FC2D0 @ 0x1405FC2D0
 * Callers:
 *     sub_14037DAEC @ 0x14037DAEC (sub_14037DAEC.c)
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

void __fastcall sub_1405FC2D0(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  struct _KTHREAD *v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // rbx
  unsigned int v13; // edx
  int v14; // r8d
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  char v18; // [rsp+80h] [rbp+30h] BYREF
  int v19; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 8), -a2);
  v3 = *(_QWORD *)(BugCheckParameter2 + 8);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v3 < v4 && (!v3 || v4 - v3 >= 0x800000) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    v7 = *(_QWORD *)(BugCheckParameter2 + 16) - v6;
    if ( v7 >= 0x800000 || !v6 && *(_QWORD *)(BugCheckParameter2 + 16) )
    {
      v17 = 0LL;
      v16 = 0LL;
      v19 = 0;
      v15 = 0LL;
      if ( (int)sub_1402D02F0(&v17, &v16, &v15, &v20, &v21, &v19) >= 0 )
      {
        v8 = v20;
        v9 = v7 & 0xFFFFFFFFFFC00000uLL;
        *(_QWORD *)(BugCheckParameter2 + 16) -= v9;
        if ( v8 >= v9 )
        {
          v20 = v8 - v9;
          v18 = 0;
          sub_14036D62C(v8 - v9, v21, 0, 0, 0, &v18);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    v10 = KeGetCurrentThread();
    if ( BugCheckParameter2 - qword_140C50630 >= 0x8000000000LL )
      v11 = -1;
    else
      v11 = sub_140287F30(*((_QWORD *)v10 + 23));
    _disable();
    v12 = (__int64)v10 + 1696;
    v13 = 0;
    while ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v12 + 18)
         || (*(_DWORD *)v12 & 1) != 0
         || *(_DWORD *)(v12 + 8) != v11 )
    {
      ++v13;
      v12 += 96LL;
      if ( v13 >= 6 )
        goto LABEL_21;
    }
    *(_BYTE *)(v12 + 18) = 0;
    if ( !v12 )
    {
LABEL_21:
      if ( (*((_DWORD *)v10 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v10, BugCheckParameter2, v11, 0LL);
      _enable();
      goto LABEL_29;
    }
    if ( *(__int64 *)v12 < 0 )
    {
      *(_BYTE *)v12 |= 2u;
      _enable();
      sub_14034EE30(v12);
      _disable();
    }
    v14 = *(_DWORD *)(v12 + 88);
    *(_DWORD *)(v12 + 88) = 0;
    *(_BYTE *)(v12 + 17) = 0;
    *(_QWORD *)v12 = 0LL;
    *((_BYTE *)v10 + 792) |= 1 << *(_BYTE *)(v12 + 16);
    _enable();
    if ( v14 )
      sub_14022B568((ULONG_PTR)v10, BugCheckParameter2, v14);
LABEL_29:
    KeLeaveCriticalRegion();
  }
}

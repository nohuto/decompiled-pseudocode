/*
 * XREFs of sub_140360FD4 @ 0x140360FD4
 * Callers:
 *     sub_140360F40 @ 0x140360F40 (sub_140360F40.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140361290 @ 0x140361290 (sub_140361290.c)
 *     sub_1403A0398 @ 0x1403A0398 (sub_1403A0398.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140360FD4(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // r15
  char v9; // r13
  unsigned int v10; // eax
  unsigned int v11; // r12d
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 result; // rax
  struct _KTHREAD *v16; // rbp
  __int64 v17; // rbx
  unsigned int v18; // ecx
  int v19; // r8d
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rax
  __int64 **v24; // rcx
  __int64 **v25; // rcx

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( *((_DWORD *)a2 + 10) == 1 )
  {
    v9 = 1;
    _disable();
    v20 = *((unsigned __int8 *)CurrentThread + 792);
    v11 = -1;
    if ( *((_BYTE *)CurrentThread + 792) || (v20 = sub_14029F6A8(BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v21, v20);
      *((_BYTE *)CurrentThread + 792) = v20 & ~(1 << v21);
      _enable();
      v8 = (__int64)CurrentThread + 96 * v21 + 1696;
      if ( BugCheckParameter2 - qword_140C50630 >= 0x8000000000LL )
        v22 = -1;
      else
        v22 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      *(_DWORD *)(v8 + 8) = v22;
      *(_QWORD *)v8 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      sub_14029F120((unsigned __int64 *)BugCheckParameter2, v8, BugCheckParameter2);
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
    *((_DWORD *)a2 + 10) = 0;
    v23 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2
      || (v24 = (__int64 **)a2[1], *v24 != a2)
      || (*v24 = v23,
          v23[1] = (__int64)v24,
          v25 = *(__int64 ***)(BugCheckParameter2 + 16),
          *v25 != (__int64 *)(BugCheckParameter2 + 8)) )
    {
      __fastfail(3u);
    }
    *a2 = BugCheckParameter2 + 8;
    a2[1] = (__int64)v25;
    *v25 = a2;
    *(_QWORD *)(BugCheckParameter2 + 16) = a2;
  }
  else
  {
    v9 = 0;
    _disable();
    v10 = *((unsigned __int8 *)CurrentThread + 792);
    v11 = -1;
    if ( *((_BYTE *)CurrentThread + 792) || (v10 = sub_14029F6A8(BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v12, v10);
      *((_BYTE *)CurrentThread + 792) = v10 & ~(1 << v12);
      _enable();
      v8 = (__int64)CurrentThread + 96 * v12 + 1696;
      if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
        v13 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      else
        v13 = -1;
      *(_DWORD *)(v8 + 8) = v13;
      *(_QWORD *)v8 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      sub_14029F350((signed __int64 *)BugCheckParameter2, 0, v8, BugCheckParameter2);
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
  }
  if ( (unsigned __int8)sub_140361290(a2, a3, a4) )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 64));
    LOBYTE(v14) = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u) | 2;
  }
  else
  {
    v14 = *(_DWORD *)(BugCheckParameter2 + 64);
  }
  if ( (v14 & 2) != 0 )
  {
    if ( !v9 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
LABEL_14:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      return sub_1402AFC00(BugCheckParameter2);
    }
  }
  else if ( !v9 )
  {
    goto LABEL_14;
  }
  sub_1403A0398(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v16 = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
    v11 = sub_140287F30(*((_QWORD *)v16 + 23));
  _disable();
  v17 = (__int64)v16 + 1696;
  v18 = 0;
  while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v17 + 18)
       || (*(_DWORD *)v17 & 1) != 0
       || *(_DWORD *)(v17 + 8) != v11 )
  {
    ++v18;
    v17 += 96LL;
    if ( v18 >= 6 )
      goto LABEL_31;
  }
  *(_BYTE *)(v17 + 18) = 0;
  if ( !v17 )
  {
LABEL_31:
    result = *((unsigned int *)v16 + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, BugCheckParameter2, v11, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)v17 < 0 )
  {
    *(_BYTE *)v17 |= 2u;
    _enable();
    sub_14034EE30(v17);
    _disable();
  }
  v19 = *(_DWORD *)(v17 + 88);
  *(_DWORD *)(v17 + 88) = 0;
  *(_BYTE *)(v17 + 17) = 0;
  *(_QWORD *)v17 = 0LL;
  result = *(unsigned __int8 *)(v17 + 16);
  *((_BYTE *)v16 + 792) |= 1 << result;
  _enable();
  if ( v19 )
    return sub_14022B568((ULONG_PTR)v16, BugCheckParameter2, v19);
  return result;
}

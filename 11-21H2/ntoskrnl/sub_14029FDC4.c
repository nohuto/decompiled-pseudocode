/*
 * XREFs of sub_14029FDC4 @ 0x14029FDC4
 * Callers:
 *     sub_1402A012C @ 0x1402A012C (sub_1402A012C.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_14029FB3C @ 0x14029FB3C (sub_14029FB3C.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403A0398 @ 0x1403A0398 (sub_1403A0398.c)
 *     sub_1403A61E8 @ 0x1403A61E8 (sub_1403A61E8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14029FDC4(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  unsigned int v5; // r13d
  char v7; // r12
  __int64 v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  __int64 *v12; // r15
  __int64 v13; // r14
  struct _KTHREAD *v15; // rbp
  __int64 v16; // r8
  char *v17; // rbx
  unsigned int v18; // ecx
  ULONG_PTR v19; // rdx
  int v20; // r8d
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r14
  __int64 v26; // rax
  struct _KTHREAD *v27; // rbp
  __int64 v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  __int64 *v32; // rcx

  CurrentThread = KeGetCurrentThread();
  v4 = -1LL;
  v5 = a2;
  v7 = 0;
  v8 = 0LL;
  _disable();
  v9 = *((unsigned __int8 *)CurrentThread + 792);
  if ( *((_BYTE *)CurrentThread + 792) || (v9 = sub_14029F6A8(BugCheckParameter2, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v10, v9);
    *((_BYTE *)CurrentThread + 792) = v9 & ~(1 << v10);
    _enable();
    v8 = (__int64)CurrentThread + 96 * v10 + 1696;
    if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
      v11 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v11 = -1;
    *(_DWORD *)(v8 + 8) = v11;
    *(_QWORD *)v8 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    sub_14029F350((signed __int64 *)BugCheckParameter2, 0, v8, BugCheckParameter2);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v12 = (__int64 *)(BugCheckParameter2 + 8);
  v13 = *(_QWORD *)(BugCheckParameter2 + 8);
  while ( 1 )
  {
    if ( (__int64 *)v13 != v12 )
    {
      while ( 1 )
      {
        v4 = sub_14029FB3C(v13, v5, a3);
        if ( v4 != -1 )
          break;
        v13 = *(_QWORD *)v13;
        if ( (__int64 *)v13 == v12 )
          goto LABEL_35;
      }
      if ( !*(_DWORD *)(v13 + 36) )
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 64), 2u);
      goto LABEL_14;
    }
LABEL_35:
    v21 = *v12;
    if ( !v7 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      sub_1402AFC00(BugCheckParameter2);
      v27 = KeGetCurrentThread();
      v28 = 0LL;
      _disable();
      v29 = *((unsigned __int8 *)v27 + 792);
      if ( *((_BYTE *)v27 + 792) || (v29 = sub_14029F6A8(BugCheckParameter2, (__int64)v27)) != 0 )
      {
        _BitScanForward((unsigned int *)&v30, v29);
        *((_BYTE *)v27 + 792) = v29 & ~(1 << v30);
        _enable();
        v28 = (__int64)v27 + 96 * v30 + 1696;
        if ( BugCheckParameter2 - qword_140C50630 >= 0x8000000000LL )
          v31 = -1;
        else
          v31 = sub_140287F30(*((_QWORD *)v27 + 23));
        *(_DWORD *)(v28 + 8) = v31;
        *(_QWORD *)v28 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        sub_14029F120((unsigned __int64 *)BugCheckParameter2, v28, BugCheckParameter2);
      if ( v28 )
        *(_BYTE *)(v28 + 18) = 1;
    }
    v13 = *v12;
    v7 = 1;
    if ( v21 == *v12 )
      break;
    v5 = a2;
  }
  v22 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v22) = v22 & 1;
  v23 = sub_1403A61E8(BugCheckParameter2, v22);
  v25 = v23;
  if ( v23 )
  {
    v4 = sub_14029FB3C(v23, a2, v24);
    if ( *(_DWORD *)(v25 + 36) )
    {
      *(_DWORD *)(v25 + 40) = 0;
      v26 = *v12;
      if ( *(__int64 **)(*v12 + 8) == v12 )
      {
        *(_QWORD *)(v25 + 8) = v12;
        *(_QWORD *)v25 = v26;
        *(_QWORD *)(v26 + 8) = v25;
        *v12 = v25;
        goto LABEL_14;
      }
LABEL_65:
      __fastfail(3u);
    }
    *(_DWORD *)(v25 + 40) = 1;
    v32 = *(__int64 **)(BugCheckParameter2 + 32);
    if ( *v32 != BugCheckParameter2 + 24 )
      goto LABEL_65;
    *(_QWORD *)v25 = BugCheckParameter2 + 24;
    *(_QWORD *)(v25 + 8) = v32;
    *v32 = v25;
    *(_QWORD *)(BugCheckParameter2 + 32) = v25;
LABEL_14:
    if ( (*(_DWORD *)(BugCheckParameter2 + 64) & 2) != 0 )
    {
      if ( !v7 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
        goto LABEL_16;
      sub_1403A0398(BugCheckParameter2);
    }
    else if ( !v7 )
    {
LABEL_16:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(BugCheckParameter2);
      sub_1402AFC00(BugCheckParameter2);
      return v4;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v15 = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 < 0x8000000000LL )
    v16 = (unsigned int)sub_140287F30(*((_QWORD *)v15 + 23));
  else
    v16 = 0xFFFFFFFFLL;
  _disable();
  v17 = (char *)v15 + 1696;
  v18 = 0;
  v19 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != v19
       || !v17[18]
       || (*(_DWORD *)v17 & 1) != 0
       || *((_DWORD *)v17 + 2) != (_DWORD)v16 )
  {
    ++v18;
    v17 += 96;
    if ( v18 >= 6 )
      goto LABEL_43;
  }
  v17[18] = 0;
  if ( v17 )
  {
    if ( *(__int64 *)v17 < 0 )
    {
      *v17 |= 2u;
      _enable();
      sub_14034EE30(v17, v19, v16);
      _disable();
    }
    v20 = *((_DWORD *)v17 + 22);
    *((_DWORD *)v17 + 22) = 0;
    v17[17] = 0;
    *(_QWORD *)v17 = 0LL;
    *((_BYTE *)v15 + 792) |= 1 << v17[16];
    _enable();
    if ( v20 )
      sub_14022B568((ULONG_PTR)v15, BugCheckParameter2, v20);
    return v4;
  }
LABEL_43:
  if ( (*((_DWORD *)v15 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, BugCheckParameter2, (unsigned int)v16, 0LL);
  _enable();
  return v4;
}

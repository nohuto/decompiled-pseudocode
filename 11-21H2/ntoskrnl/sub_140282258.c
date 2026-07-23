/*
 * XREFs of sub_140282258 @ 0x140282258
 * Callers:
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

bool __fastcall sub_140282258(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rsi
  bool v3; // bp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ecx
  char *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d

  v1 = *(_QWORD *)(a1 + 528);
  v2 = v1 + 1216;
  ExAcquirePushLockExclusiveEx(v1 + 1216, 0LL);
  v3 = *(_QWORD *)(v1 + 1192) == (_QWORD)KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 1216), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1 + 1216);
  CurrentThread = KeGetCurrentThread();
  if ( v2 - qword_140C50630 < 0x8000000000LL )
    v5 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v5 = -1;
  _disable();
  v6 = (char *)CurrentThread + 1696;
  v7 = 0LL;
  v8 = v2 & 0x7FFFFFFFFFFFFFFCLL;
  while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != v8
       || !v6[18]
       || (*(_DWORD *)v6 & 1) != 0
       || *((_DWORD *)v6 + 2) != v5 )
  {
    v7 = (unsigned int)(v7 + 1);
    v6 += 96;
    if ( (unsigned int)v7 >= 6 )
      goto LABEL_17;
  }
  v6[18] = 0;
  if ( v6 )
  {
    if ( *(__int64 *)v6 < 0 )
    {
      *v6 |= 2u;
      _enable();
      sub_14034EE30(v6, v7, v8);
      _disable();
    }
    v9 = *((_DWORD *)v6 + 22);
    *((_DWORD *)v6 + 22) = 0;
    v6[17] = 0;
    *(_QWORD *)v6 = 0LL;
    *((_BYTE *)CurrentThread + 792) |= 1 << v6[16];
    _enable();
    if ( v9 )
      sub_14022B568((ULONG_PTR)CurrentThread, v2, v9);
    return v3;
  }
LABEL_17:
  if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, v5, 0LL);
  _enable();
  return v3;
}

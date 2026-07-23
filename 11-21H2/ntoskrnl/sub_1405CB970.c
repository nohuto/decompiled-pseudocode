/*
 * XREFs of sub_1405CB970 @ 0x1405CB970
 * Callers:
 *     sub_1405C9C94 @ 0x1405C9C94 (sub_1405C9C94.c)
 *     sub_14098C2AC @ 0x14098C2AC (sub_14098C2AC.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void sub_1405CB970()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rax
  struct _KTHREAD *v2; // rsi
  unsigned int v3; // ebp
  unsigned int v4; // ecx
  __int64 v5; // rdi
  unsigned int v6; // edx
  int v7; // r8d
  struct _KTHREAD *v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // ecx
  int v11; // r9d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23CB8, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23B98, 0LL);
  for ( i = qword_140C23B80; (ULONG_PTR *)i != &qword_140C23B80; i = *(_QWORD *)i )
    _InterlockedAnd((volatile signed __int32 *)(i + 824), 0xFFFFFFBF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23B98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C23B98);
  v2 = KeGetCurrentThread();
  v3 = -1;
  if ( (unsigned __int64)&qword_140C23B98 - qword_140C50630 >= 0x8000000000LL )
    v4 = -1;
  else
    v4 = sub_140287F30(*((_QWORD *)v2 + 23));
  _disable();
  v5 = (__int64)v2 + 1696;
  v6 = 0;
  while ( (*(_QWORD *)v5 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C23B98 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v5 + 18)
       || (*(_DWORD *)v5 & 1) != 0
       || *(_DWORD *)(v5 + 8) != v4 )
  {
    ++v6;
    v5 += 96LL;
    if ( v6 >= 6 )
      goto LABEL_15;
  }
  *(_BYTE *)(v5 + 18) = 0;
  if ( !v5 )
  {
LABEL_15:
    if ( (*((_DWORD *)v2 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v2, (ULONG_PTR)&qword_140C23B98, v4, 0LL);
    _enable();
    goto LABEL_23;
  }
  if ( *(__int64 *)v5 < 0 )
  {
    *(_BYTE *)v5 |= 2u;
    _enable();
    sub_14034EE30(v5);
    _disable();
  }
  v7 = *(_DWORD *)(v5 + 88);
  *(_DWORD *)(v5 + 88) = 0;
  *(_BYTE *)(v5 + 17) = 0;
  *(_QWORD *)v5 = 0LL;
  *((_BYTE *)v2 + 792) |= 1 << *(_BYTE *)(v5 + 16);
  _enable();
  if ( v7 )
    sub_14022B568((ULONG_PTR)v2, (__int64)&qword_140C23B98, v7);
LABEL_23:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23CB8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C23CB8);
  v8 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C23CB8 - qword_140C50630 < 0x8000000000LL )
    v3 = sub_140287F30(*((_QWORD *)v8 + 23));
  _disable();
  v9 = (__int64)v8 + 1696;
  v10 = 0;
  while ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C23CB8 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v9 + 18)
       || (*(_DWORD *)v9 & 1) != 0
       || *(_DWORD *)(v9 + 8) != v3 )
  {
    ++v10;
    v9 += 96LL;
    if ( v10 >= 6 )
      goto LABEL_33;
  }
  *(_BYTE *)(v9 + 18) = 0;
  if ( !v9 )
  {
LABEL_33:
    if ( (*((_DWORD *)v8 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, (ULONG_PTR)&qword_140C23CB8, v3, 0LL);
    _enable();
    goto LABEL_41;
  }
  if ( *(__int64 *)v9 < 0 )
  {
    *(_BYTE *)v9 |= 2u;
    _enable();
    sub_14034EE30(v9);
    _disable();
  }
  v11 = *(_DWORD *)(v9 + 88);
  *(_DWORD *)(v9 + 88) = 0;
  *(_BYTE *)(v9 + 17) = 0;
  *(_QWORD *)v9 = 0LL;
  *((_BYTE *)v8 + 792) |= 1 << *(_BYTE *)(v9 + 16);
  _enable();
  if ( v11 )
    sub_14022B568((ULONG_PTR)v8, (__int64)&qword_140C23CB8, v11);
LABEL_41:
  KeLeaveCriticalRegion();
}

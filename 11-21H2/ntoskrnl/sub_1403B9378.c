/*
 * XREFs of sub_1403B9378 @ 0x1403B9378
 * Callers:
 *     sub_140823318 @ 0x140823318 (sub_140823318.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_1403B9378(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  __int64 *v4; // rcx
  struct _KTHREAD *v5; // rdi
  unsigned int v6; // ecx
  __int64 v7; // rbx
  unsigned int v8; // edx
  int v9; // r9d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C20B30, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C20A30, 0LL);
  if ( off_140C02BB0 == a1 )
    off_140C02BB0 = (__int64 *)*a1;
  v3 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v4 = (__int64 *)a1[1], (__int64 *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C20A30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C20A30);
  v5 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C20A30 - qword_140C50630 >= 0x8000000000LL )
    v6 = -1;
  else
    v6 = sub_140287F30(*((_QWORD *)v5 + 23));
  _disable();
  v7 = (__int64)v5 + 1696;
  v8 = 0;
  while ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C20A30 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v7 + 18)
       || (*(_DWORD *)v7 & 1) != 0
       || *(_DWORD *)(v7 + 8) != v6 )
  {
    ++v8;
    v7 += 96LL;
    if ( v8 >= 6 )
      goto LABEL_15;
  }
  *(_BYTE *)(v7 + 18) = 0;
  if ( !v7 )
  {
LABEL_15:
    if ( (*((_DWORD *)v5 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, (ULONG_PTR)&qword_140C20A30, v6, 0LL);
    _enable();
    goto LABEL_17;
  }
  if ( *(__int64 *)v7 < 0 )
  {
    *(_BYTE *)v7 |= 2u;
    _enable();
    sub_14034EE30(v7);
    _disable();
  }
  v9 = *(_DWORD *)(v7 + 88);
  *(_DWORD *)(v7 + 88) = 0;
  *(_BYTE *)(v7 + 17) = 0;
  *(_QWORD *)v7 = 0LL;
  *((_BYTE *)v5 + 792) |= 1 << *(_BYTE *)(v7 + 16);
  _enable();
  if ( v9 )
    sub_14022B568((ULONG_PTR)v5, (__int64)&qword_140C20A30, v9);
LABEL_17:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C20B30, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C20B30);
  sub_1402AFC00((ULONG_PTR)&qword_140C20B30);
  KeLeaveCriticalRegion();
}

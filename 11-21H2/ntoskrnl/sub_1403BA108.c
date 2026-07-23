/*
 * XREFs of sub_1403BA108 @ 0x1403BA108
 * Callers:
 *     sub_140824268 @ 0x140824268 (sub_140824268.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_1403BA108(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 **v4; // rax
  char v5; // di
  struct _KTHREAD *v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rbx
  unsigned int v9; // edx
  int v10; // r8d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C20B30, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C20A30, 0LL);
  if ( off_140C02BB0 == &qword_140C20A40 )
    off_140C02BB0 = a2;
  v4 = (__int64 **)qword_140C20A48;
  if ( *(__int64 **)qword_140C20A48 != &qword_140C20A40 )
    __fastfail(3u);
  *a2 = (__int64)&qword_140C20A40;
  a2[1] = (__int64)v4;
  *v4 = a2;
  qword_140C20A48 = (__int64)a2;
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C20A30, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C20A30);
  v6 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C20A30 - qword_140C50630 < 0x8000000000LL )
    v7 = sub_140287F30(*((_QWORD *)v6 + 23));
  else
    v7 = -1;
  _disable();
  v8 = (__int64)v6 + 1696;
  v9 = 0;
  while ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C20A30 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v8 + 18)
       || (*(_DWORD *)v8 & 1) != 0
       || *(_DWORD *)(v8 + 8) != v7 )
  {
    ++v9;
    v8 += 96LL;
    if ( v9 >= 6 )
      goto LABEL_21;
  }
  *(_BYTE *)(v8 + 18) = 0;
  if ( v8 )
  {
    if ( *(__int64 *)v8 < 0 )
    {
      *(_BYTE *)v8 |= 2u;
      _enable();
      sub_14034EE30(v8);
      _disable();
    }
    v10 = *(_DWORD *)(v8 + 88);
    *(_DWORD *)(v8 + 88) = 0;
    *(_BYTE *)(v8 + 17) = 0;
    *(_QWORD *)v8 = 0LL;
    *((_BYTE *)v6 + 792) |= 1 << *(_BYTE *)(v8 + 16);
    _enable();
    if ( v10 )
      sub_14022B568((ULONG_PTR)v6, (__int64)&qword_140C20A30, v10);
    goto LABEL_17;
  }
LABEL_21:
  if ( (*((_DWORD *)v6 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)&qword_140C20A30, v7, 0LL);
  _enable();
LABEL_17:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C20B30, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C20B30);
  sub_1402AFC00((ULONG_PTR)&qword_140C20B30);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}

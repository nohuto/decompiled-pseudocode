/*
 * XREFs of sub_1403BA838 @ 0x1403BA838
 * Callers:
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_1403BA838(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  struct _KTHREAD *v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rbx
  unsigned int v9; // edx
  int v10; // r9d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23B98, 0LL);
  v4 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v5 = (_QWORD *)a2[1], (_QWORD *)*v5 != a2) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23B98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C23B98);
  v6 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C23B98 - qword_140C50630 >= 0x8000000000LL )
    v7 = -1;
  else
    v7 = sub_140287F30(*((_QWORD *)v6 + 23));
  _disable();
  v8 = (__int64)v6 + 1696;
  v9 = 0;
  while ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C23B98 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v8 + 18)
       || (*(_DWORD *)v8 & 1) != 0
       || *(_DWORD *)(v8 + 8) != v7 )
  {
    ++v9;
    v8 += 96LL;
    if ( v9 >= 6 )
      goto LABEL_13;
  }
  *(_BYTE *)(v8 + 18) = 0;
  if ( !v8 )
  {
LABEL_13:
    if ( (*((_DWORD *)v6 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)&qword_140C23B98, v7, 0LL);
    _enable();
    goto LABEL_15;
  }
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
    sub_14022B568((ULONG_PTR)v6, (__int64)&qword_140C23B98, v10);
LABEL_15:
  KeLeaveCriticalRegion();
}

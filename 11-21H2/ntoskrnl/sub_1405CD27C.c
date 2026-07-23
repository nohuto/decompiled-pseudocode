/*
 * XREFs of sub_1405CD27C @ 0x1405CD27C
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14039734C @ 0x14039734C (sub_14039734C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char sub_1405CD27C()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v1; // rdi
  unsigned int v2; // ecx
  __int64 v3; // rbx
  unsigned int v4; // edx
  int v5; // r9d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23B98, 0LL);
  byte_140D01520 = 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23B98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C23B98);
  v1 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C23B98 - qword_140C50630 >= 0x8000000000LL )
    v2 = -1;
  else
    v2 = sub_140287F30(*((_QWORD *)v1 + 23));
  _disable();
  v3 = (__int64)v1 + 1696;
  v4 = 0;
  while ( (*(_QWORD *)v3 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C23B98 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v3 + 18)
       || (*(_DWORD *)v3 & 1) != 0
       || *(_DWORD *)(v3 + 8) != v2 )
  {
    ++v4;
    v3 += 96LL;
    if ( v4 >= 6 )
      goto LABEL_12;
  }
  *(_BYTE *)(v3 + 18) = 0;
  if ( !v3 )
  {
LABEL_12:
    if ( (*((_DWORD *)v1 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v1, (ULONG_PTR)&qword_140C23B98, v2, 0LL);
    _enable();
    goto LABEL_20;
  }
  if ( *(__int64 *)v3 < 0 )
  {
    *(_BYTE *)v3 |= 2u;
    _enable();
    sub_14034EE30(v3);
    _disable();
  }
  v5 = *(_DWORD *)(v3 + 88);
  *(_DWORD *)(v3 + 88) = 0;
  *(_BYTE *)(v3 + 17) = 0;
  *(_QWORD *)v3 = 0LL;
  *((_BYTE *)v1 + 792) |= 1 << *(_BYTE *)(v3 + 16);
  _enable();
  if ( v5 )
    sub_14022B568((ULONG_PTR)v1, (__int64)&qword_140C23B98, v5);
LABEL_20:
  sub_1402F9540((__int64)KeGetCurrentThread());
  return sub_14039734C(4u);
}

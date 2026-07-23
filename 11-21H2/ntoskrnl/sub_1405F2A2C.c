/*
 * XREFs of sub_1405F2A2C @ 0x1405F2A2C
 * Callers:
 *     sub_1409C5570 @ 0x1409C5570 (sub_1409C5570.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char sub_1405F2A2C()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v1; // ecx
  __int64 v2; // rbx
  unsigned int v3; // edx
  int v4; // r9d

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1BBE8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C1BBE8);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C1BBE8 - qword_140C50630 >= 0x8000000000LL )
    v1 = -1;
  else
    v1 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v2 = (__int64)CurrentThread + 1696;
  v3 = 0;
  while ( (*(_QWORD *)v2 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C1BBE8 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v2 + 18)
       || (*(_DWORD *)v2 & 1) != 0
       || *(_DWORD *)(v2 + 8) != v1 )
  {
    ++v3;
    v2 += 96LL;
    if ( v3 >= 6 )
      goto LABEL_12;
  }
  *(_BYTE *)(v2 + 18) = 0;
  if ( !v2 )
  {
LABEL_12:
    if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C1BBE8, v1, 0LL);
    _enable();
    return sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( *(__int64 *)v2 < 0 )
  {
    *(_BYTE *)v2 |= 2u;
    _enable();
    sub_14034EE30(v2);
    _disable();
  }
  v4 = *(_DWORD *)(v2 + 88);
  *(_DWORD *)(v2 + 88) = 0;
  *(_BYTE *)(v2 + 17) = 0;
  *(_QWORD *)v2 = 0LL;
  *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v2 + 16);
  _enable();
  if ( v4 )
    sub_14022B568((ULONG_PTR)CurrentThread, (__int64)&qword_140C1BBE8, v4);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}

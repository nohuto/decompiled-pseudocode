/*
 * XREFs of sub_1405E081C @ 0x1405E081C
 * Callers:
 *     sub_1409AD870 @ 0x1409AD870 (sub_1409AD870.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_1405E081C(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ecx
  __int64 v4; // rbx
  unsigned int v5; // edx
  int v6; // r9d

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3B150, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D3B150);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140D3B150 - qword_140C50630 >= 0x8000000000LL )
    v3 = -1;
  else
    v3 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v4 = (__int64)CurrentThread + 1696;
  v5 = 0;
  while ( (*(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140D3B150 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v4 + 18)
       || (*(_DWORD *)v4 & 1) != 0
       || *(_DWORD *)(v4 + 8) != v3 )
  {
    ++v5;
    v4 += 96LL;
    if ( v5 >= 6 )
      goto LABEL_12;
  }
  *(_BYTE *)(v4 + 18) = 0;
  if ( !v4 )
  {
LABEL_12:
    if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140D3B150, v3, 0LL);
    _enable();
    return sub_1402F9540(a1);
  }
  if ( *(__int64 *)v4 < 0 )
  {
    *(_BYTE *)v4 |= 2u;
    _enable();
    sub_14034EE30(v4);
    _disable();
  }
  v6 = *(_DWORD *)(v4 + 88);
  *(_DWORD *)(v4 + 88) = 0;
  *(_BYTE *)(v4 + 17) = 0;
  *(_QWORD *)v4 = 0LL;
  *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v4 + 16);
  _enable();
  if ( v6 )
    sub_14022B568((ULONG_PTR)CurrentThread, (__int64)&qword_140D3B150, v6);
  return sub_1402F9540(a1);
}

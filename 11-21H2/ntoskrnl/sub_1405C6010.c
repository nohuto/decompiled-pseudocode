/*
 * XREFs of sub_1405C6010 @ 0x1405C6010
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall sub_1405C6010(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v3; // ecx
  __int64 v4; // rbx
  unsigned int v5; // edx
  int v6; // r8d

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 >= 0x8000000000LL )
    v3 = -1;
  else
    v3 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v4 = (__int64)CurrentThread + 1696;
  v5 = 0;
  while ( (*(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
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
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, v3, 0LL);
    _enable();
    goto LABEL_20;
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
    sub_14022B568((ULONG_PTR)CurrentThread, BugCheckParameter2, v6);
LABEL_20:
  KeLeaveCriticalRegion();
}

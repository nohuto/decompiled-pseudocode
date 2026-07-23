/*
 * XREFs of sub_1405C6380 @ 0x1405C6380
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 *     sub_140986F94 @ 0x140986F94 (sub_140986F94.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1405C6380(unsigned int Priority)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _KTHREAD *v4; // rdi
  unsigned int v5; // ecx
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // r9d

  if ( Priority > 0x1F )
  {
    return 32;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E960, 0LL);
    if ( Thread )
      v3 = KeSetPriorityThread(Thread, Priority);
    else
      v3 = 33;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E960, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4E960);
    v4 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C4E960 - qword_140C50630 >= 0x8000000000LL )
      v5 = -1;
    else
      v5 = sub_140287F30(*((_QWORD *)v4 + 23));
    _disable();
    v6 = (__int64)v4 + 1696;
    v7 = 0;
    while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C4E960 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v6 + 18)
         || (*(_DWORD *)v6 & 1) != 0
         || *(_DWORD *)(v6 + 8) != v5 )
    {
      ++v7;
      v6 += 96LL;
      if ( v7 >= 6 )
        goto LABEL_16;
    }
    *(_BYTE *)(v6 + 18) = 0;
    if ( !v6 )
    {
LABEL_16:
      if ( (*((_DWORD *)v4 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v4, (ULONG_PTR)&qword_140C4E960, v5, 0LL);
      _enable();
      goto LABEL_24;
    }
    if ( *(__int64 *)v6 < 0 )
    {
      *(_BYTE *)v6 |= 2u;
      _enable();
      sub_14034EE30(v6);
      _disable();
    }
    v8 = *(_DWORD *)(v6 + 88);
    *(_DWORD *)(v6 + 88) = 0;
    *(_BYTE *)(v6 + 17) = 0;
    *(_QWORD *)v6 = 0LL;
    *((_BYTE *)v4 + 792) |= 1 << *(_BYTE *)(v6 + 16);
    _enable();
    if ( v8 )
      sub_14022B568((ULONG_PTR)v4, (__int64)&qword_140C4E960, v8);
LABEL_24:
    KeLeaveCriticalRegion();
  }
  return v3;
}

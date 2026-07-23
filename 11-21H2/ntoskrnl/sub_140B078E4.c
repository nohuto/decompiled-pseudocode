/*
 * XREFs of sub_140B078E4 @ 0x140B078E4
 * Callers:
 *     sub_14082BD64 @ 0x14082BD64 (sub_14082BD64.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_1402693C8 @ 0x1402693C8 (sub_1402693C8.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char sub_140B078E4()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdi
  char v2; // bl
  struct _KTHREAD *v3; // rdi
  unsigned int v4; // ecx
  __int64 v5; // rbx
  unsigned int v6; // edx
  _QWORD *v7; // rax
  int v9; // r9d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53498, 0LL);
  v1 = sub_1402693C8(6);
  if ( v1 < qword_140C4F070 )
    KeResetEvent(qword_140C55080);
  else
    KeSetEvent(qword_140C55080, 0, 0);
  if ( v1 <= qword_140C4F068 )
    KeSetEvent(qword_140C55078, 0, 0);
  else
    KeResetEvent(qword_140C55078);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53498, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C53498);
  v3 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C53498 - qword_140C50630 >= 0x8000000000LL )
    v4 = -1;
  else
    v4 = sub_140287F30(*((_QWORD *)v3 + 23));
  _disable();
  v5 = (__int64)v3 + 1696;
  v6 = 0;
  while ( (*(_QWORD *)v5 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C53498 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v5 + 18)
       || (*(_DWORD *)v5 & 1) != 0
       || *(_DWORD *)(v5 + 8) != v4 )
  {
    ++v6;
    v5 += 96LL;
    if ( v6 >= 6 )
      goto LABEL_14;
  }
  *(_BYTE *)(v5 + 18) = 0;
  if ( !v5 )
  {
LABEL_14:
    LODWORD(v7) = *((_DWORD *)v3 + 30);
    if ( ((unsigned int)v7 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v3, (ULONG_PTR)&qword_140C53498, v4, 0LL);
    _enable();
    goto LABEL_16;
  }
  if ( *(__int64 *)v5 < 0 )
  {
    *(_BYTE *)v5 |= 2u;
    _enable();
    sub_14034EE30(v5);
    _disable();
  }
  v9 = *(_DWORD *)(v5 + 88);
  *(_DWORD *)(v5 + 88) = 0;
  *(_BYTE *)(v5 + 17) = 0;
  *(_QWORD *)v5 = 0LL;
  LOBYTE(v7) = *(_BYTE *)(v5 + 16);
  *((_BYTE *)v3 + 792) |= 1 << (char)v7;
  _enable();
  if ( v9 )
    LOBYTE(v7) = sub_14022B568((ULONG_PTR)v3, (__int64)&qword_140C53498, v9);
LABEL_16:
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    v7 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v7 != v7 )
      LOBYTE(v7) = KiCheckForKernelApcDelivery();
  }
  return (char)v7;
}

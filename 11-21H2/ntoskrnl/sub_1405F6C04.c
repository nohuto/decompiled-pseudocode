/*
 * XREFs of sub_1405F6C04 @ 0x1405F6C04
 * Callers:
 *     sub_140236EC0 @ 0x140236EC0 (sub_140236EC0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405F64CC @ 0x1405F64CC (sub_1405F64CC.c)
 */

char __fastcall sub_1405F6C04(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rsi
  char *v4; // rdx
  struct _KTHREAD *v5; // rdi
  unsigned int v6; // ecx
  __int64 v7; // rbx
  unsigned int v8; // edx
  int v9; // r9d
  struct _KTHREAD *v10; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v3 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v4 = *(char **)(a1 + 448);
  if ( v4 )
    sub_1405F64CC(a1 + 448, v4);
  *(_OWORD *)(a1 + 448) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  v5 = KeGetCurrentThread();
  if ( v3 - qword_140C50630 >= 0x8000000000LL )
    v6 = -1;
  else
    v6 = sub_140287F30(*((_QWORD *)v5 + 23));
  _disable();
  v7 = (__int64)v5 + 1696;
  v8 = 0;
  while ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v7 + 18)
       || (*(_DWORD *)v7 & 1) != 0
       || *(_DWORD *)(v7 + 8) != v6 )
  {
    ++v8;
    v7 += 96LL;
    if ( v8 >= 6 )
      goto LABEL_14;
  }
  *(_BYTE *)(v7 + 18) = 0;
  if ( !v7 )
  {
LABEL_14:
    if ( (*((_DWORD *)v5 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, v3, v6, 0LL);
    _enable();
    goto LABEL_22;
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
    sub_14022B568((ULONG_PTR)v5, v3, v9);
LABEL_22:
  v10 = KeGetCurrentThread();
  if ( (*((_WORD *)v10 + 243))++ == 0xFFFF )
  {
    v10 = (struct _KTHREAD *)((char *)v10 + 152);
    if ( *(struct _KTHREAD **)v10 != v10 )
      LOBYTE(v10) = KiCheckForKernelApcDelivery();
  }
  return (char)v10;
}

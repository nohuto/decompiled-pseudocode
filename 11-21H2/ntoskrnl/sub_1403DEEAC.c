/*
 * XREFs of sub_1403DEEAC @ 0x1403DEEAC
 * Callers:
 *     sub_1406F9808 @ 0x1406F9808 (sub_1406F9808.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_1403DEEAC(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // ecx
  __int64 v6; // rbx
  unsigned int v7; // edx
  _QWORD *v8; // rax
  int v10; // r9d

  v3 = a1 + 184;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 184), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 184);
  CurrentThread = KeGetCurrentThread();
  if ( v3 - qword_140C50630 >= 0x8000000000LL )
    v5 = -1;
  else
    v5 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v6 = (__int64)CurrentThread + 1696;
  v7 = 0;
  while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v6 + 18)
       || (*(_DWORD *)v6 & 1) != 0
       || *(_DWORD *)(v6 + 8) != v5 )
  {
    ++v7;
    v6 += 96LL;
    if ( v7 >= 6 )
      goto LABEL_11;
  }
  *(_BYTE *)(v6 + 18) = 0;
  if ( !v6 )
  {
LABEL_11:
    LODWORD(v8) = *((_DWORD *)CurrentThread + 30);
    if ( ((unsigned int)v8 & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, v5, 0LL);
    _enable();
    goto LABEL_13;
  }
  if ( *(__int64 *)v6 < 0 )
  {
    *(_BYTE *)v6 |= 2u;
    _enable();
    sub_14034EE30(v6);
    _disable();
  }
  v10 = *(_DWORD *)(v6 + 88);
  *(_DWORD *)(v6 + 88) = 0;
  *(_BYTE *)(v6 + 17) = 0;
  *(_QWORD *)v6 = 0LL;
  LOBYTE(v8) = *(_BYTE *)(v6 + 16);
  *((_BYTE *)CurrentThread + 792) |= 1 << (char)v8;
  _enable();
  if ( v10 )
    LOBYTE(v8) = sub_14022B568((ULONG_PTR)CurrentThread, v3, v10);
LABEL_13:
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v8 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v8 != v8 )
      LOBYTE(v8) = KiCheckForKernelApcDelivery();
  }
  return (char)v8;
}

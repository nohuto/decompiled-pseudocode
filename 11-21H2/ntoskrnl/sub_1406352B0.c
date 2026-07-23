/*
 * XREFs of sub_1406352B0 @ 0x1406352B0
 * Callers:
 *     sub_1402E18F8 @ 0x1402E18F8 (sub_1402E18F8.c)
 *     sub_140635144 @ 0x140635144 (sub_140635144.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406355B0 @ 0x1406355B0 (sub_1406355B0.c)
 */

void __fastcall sub_1406352B0(__int64 a1)
{
  ULONG_PTR v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v4; // ecx
  __int64 v5; // rbx
  unsigned int v6; // edx
  int v7; // r9d

  if ( *(_DWORD *)(a1 + 1180) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 1168), 0)
    && !*(_DWORD *)(a1 + 1136)
    && KeGetEffectiveIrql() < 2u )
  {
    v2 = a1 + 1144;
    ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
    sub_1406355B0(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1144);
    CurrentThread = KeGetCurrentThread();
    if ( v2 - qword_140C50630 >= 0x8000000000LL )
      v4 = -1;
    else
      v4 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    _disable();
    v5 = (__int64)CurrentThread + 1696;
    v6 = 0;
    while ( (*(_QWORD *)v5 & 0x7FFFFFFFFFFFFFFCLL) != (v2 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v5 + 18)
         || (*(_DWORD *)v5 & 1) != 0
         || *(_DWORD *)(v5 + 8) != v4 )
    {
      ++v6;
      v5 += 96LL;
      if ( v6 >= 6 )
        goto LABEL_16;
    }
    *(_BYTE *)(v5 + 18) = 0;
    if ( !v5 )
    {
LABEL_16:
      if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, v4, 0LL);
      _enable();
      return;
    }
    if ( *(__int64 *)v5 < 0 )
    {
      *(_BYTE *)v5 |= 2u;
      _enable();
      sub_14034EE30(v5);
      _disable();
    }
    v7 = *(_DWORD *)(v5 + 88);
    *(_DWORD *)(v5 + 88) = 0;
    *(_BYTE *)(v5 + 17) = 0;
    *(_QWORD *)v5 = 0LL;
    *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v5 + 16);
    _enable();
    if ( v7 )
      sub_14022B568((ULONG_PTR)CurrentThread, v2, v7);
  }
}

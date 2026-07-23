/*
 * XREFs of sub_140634F90 @ 0x140634F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140634D24 @ 0x140634D24 (sub_140634D24.c)
 *     sub_1406355B0 @ 0x1406355B0 (sub_1406355B0.c)
 */

void __fastcall sub_140634F90(unsigned int *a1)
{
  signed __int32 i; // eax
  bool v3; // zf
  unsigned int v4; // eax
  unsigned __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v7; // ecx
  __int64 v8; // rbx
  unsigned int v9; // edx
  int v10; // r8d

  for ( i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 284, 0xFFFFFFFF);
        ;
        i = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 284, 0xFFFFFFFF) )
  {
    v3 = i == 2;
    v4 = a1[292];
    if ( !v3 )
      break;
    if ( v4 )
      sub_140634D24((__int64)a1);
  }
  if ( !v4 )
  {
    v5 = (unsigned __int64)(a1 + 286);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 286), 0LL);
    sub_1406355B0(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 143, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 286);
    CurrentThread = KeGetCurrentThread();
    if ( v5 - qword_140C50630 >= 0x8000000000LL )
      v7 = -1;
    else
      v7 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    _disable();
    v8 = (__int64)CurrentThread + 1696;
    v9 = 0;
    while ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) != (v5 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v8 + 18)
         || (*(_DWORD *)v8 & 1) != 0
         || *(_DWORD *)(v8 + 8) != v7 )
    {
      ++v9;
      v8 += 96LL;
      if ( v9 >= 6 )
        goto LABEL_18;
    }
    *(_BYTE *)(v8 + 18) = 0;
    if ( !v8 )
    {
LABEL_18:
      if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)(a1 + 286), v7, 0LL);
      _enable();
      goto LABEL_26;
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
    *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v8 + 16);
    _enable();
    if ( v10 )
      sub_14022B568((ULONG_PTR)CurrentThread, (__int64)(a1 + 286), v10);
  }
LABEL_26:
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
    1u);
}

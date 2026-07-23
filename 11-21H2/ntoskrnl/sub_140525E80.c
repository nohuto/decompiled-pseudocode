/*
 * XREFs of sub_140525E80 @ 0x140525E80
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140525E80(KSPIN_LOCK *a1)
{
  _QWORD *v1; // rbp
  ULONG_PTR v3; // rsi
  unsigned __int8 CurrentIrql; // r15
  __int64 v5; // r9
  KSPIN_LOCK i; // rdi
  KSPIN_LOCK v7; // rax
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v15; // ecx
  __int64 v16; // rbx
  unsigned int v17; // edx
  int v18; // r8d
  char v20; // [rsp+60h] [rbp+8h]

  v1 = (_QWORD *)a1[3];
  v20 = 0;
  if ( byte_140C4BCBC )
    return 3221225659LL;
  v3 = (ULONG_PTR)(v1 + 50);
  if ( !v1[39] || !v1[40] )
    return 3221225659LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 50), 0LL);
  sub_14042A5E0(v1[2], a1[5]);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KeAcquireSpinLockAtDpcLevel(a1 + 2);
  for ( i = a1[14]; (KSPIN_LOCK *)i != a1 + 14; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 40) )
    {
      v20 = 1;
      v7 = i + 52;
      *(_BYTE *)(i + 40) = 0;
      v8 = 512LL;
      do
      {
        *(_DWORD *)(v7 - 4) = 0;
        *(_DWORD *)v7 &= ~2u;
        *(_BYTE *)(v7 + 20) = 0;
        v7 += 32LL;
        --v8;
      }
      while ( v8 );
      sub_14042A5E0(v1[2], a1[5]);
    }
  }
  KeReleaseSpinLockFromDpcLevel(a1 + 2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
        *(_DWORD *)(v11 + 20) &= v12;
        if ( v13 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  CurrentThread = KeGetCurrentThread();
  if ( v3 - qword_140C50630 >= 0x8000000000LL )
    v15 = -1;
  else
    v15 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v16 = (__int64)CurrentThread + 1696;
  v17 = 0;
  while ( (*(_QWORD *)v16 & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v16 + 18)
       || (*(_DWORD *)v16 & 1) != 0
       || *(_DWORD *)(v16 + 8) != v15 )
  {
    ++v17;
    v16 += 96LL;
    if ( v17 >= 6 )
      goto LABEL_33;
  }
  *(_BYTE *)(v16 + 18) = 0;
  if ( !v16 )
  {
LABEL_33:
    if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, v15, 0LL);
    _enable();
    return v20 != 0 ? 0 : 0xC0000225;
  }
  if ( *(__int64 *)v16 < 0 )
  {
    *(_BYTE *)v16 |= 2u;
    _enable();
    sub_14034EE30(v16);
    _disable();
  }
  v18 = *(_DWORD *)(v16 + 88);
  *(_DWORD *)(v16 + 88) = 0;
  *(_BYTE *)(v16 + 17) = 0;
  *(_QWORD *)v16 = 0LL;
  *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v16 + 16);
  _enable();
  if ( v18 )
    sub_14022B568((ULONG_PTR)CurrentThread, v3, v18);
  return v20 != 0 ? 0 : 0xC0000225;
}

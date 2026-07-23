/*
 * XREFs of sub_140524EB0 @ 0x140524EB0
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
 */

__int64 __fastcall sub_140524EB0(KSPIN_LOCK *a1, _DWORD *a2)
{
  KSPIN_LOCK v2; // rax
  char v3; // r12
  ULONG_PTR v6; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // r9
  KSPIN_LOCK *v9; // r14
  __int64 **v10; // rdi
  __int64 *i; // r8
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v18; // ecx
  __int64 v19; // rbx
  unsigned int v20; // edx
  int v21; // r8d

  v2 = a1[3];
  v3 = 0;
  if ( byte_140C4BCBC )
    return 3221225659LL;
  v6 = v2 + 400;
  if ( !*(_QWORD *)(v2 + 312) || !*(_QWORD *)(v2 + 320) )
    return 3221225659LL;
  ExAcquirePushLockExclusiveEx(v2 + 400, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v9 = a1 + 2;
  KeAcquireSpinLockAtDpcLevel(a1 + 2);
  v10 = (__int64 **)(a1 + 14);
  for ( i = *v10; i != (__int64 *)v10; i = (__int64 *)*i )
  {
    if ( !a2 || *(_DWORD *)(i[4] + 16) == *a2 )
    {
      *((_BYTE *)i + 40) = 1;
      v3 = 1;
    }
  }
  KeReleaseSpinLockFromDpcLevel(v9);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  CurrentThread = KeGetCurrentThread();
  if ( v6 - qword_140C50630 >= 0x8000000000LL )
    v18 = -1;
  else
    v18 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v19 = (__int64)CurrentThread + 1696;
  v20 = 0;
  while ( (*(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL) != (v6 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v19 + 18)
       || (*(_DWORD *)v19 & 1) != 0
       || *(_DWORD *)(v19 + 8) != v18 )
  {
    ++v20;
    v19 += 96LL;
    if ( v20 >= 6 )
      goto LABEL_32;
  }
  *(_BYTE *)(v19 + 18) = 0;
  if ( !v19 )
  {
LABEL_32:
    if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, v18, 0LL);
    _enable();
    return v3 == 0 ? 0xC0000225 : 0;
  }
  if ( *(__int64 *)v19 < 0 )
  {
    *(_BYTE *)v19 |= 2u;
    _enable();
    sub_14034EE30(v19);
    _disable();
  }
  v21 = *(_DWORD *)(v19 + 88);
  *(_DWORD *)(v19 + 88) = 0;
  *(_BYTE *)(v19 + 17) = 0;
  *(_QWORD *)v19 = 0LL;
  *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v19 + 16);
  _enable();
  if ( v21 )
    sub_14022B568((ULONG_PTR)CurrentThread, v6, v21);
  return v3 == 0 ? 0xC0000225 : 0;
}

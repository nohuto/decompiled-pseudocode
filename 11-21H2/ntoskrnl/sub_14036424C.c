/*
 * XREFs of sub_14036424C @ 0x14036424C
 * Callers:
 *     sub_14034A490 @ 0x14034A490 (sub_14034A490.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140365AF4 @ 0x140365AF4 (sub_140365AF4.c)
 *     sub_140365BA0 @ 0x140365BA0 (sub_140365BA0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14036424C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  int v3; // r14d
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // r15
  __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v10; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rdi
  unsigned int v17; // edx
  int v18; // r8d
  struct _KTHREAD *v19; // rcx

  v2 = (_QWORD *)(a1 + 24);
  v3 = a2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v5 = a1 + 16;
  v6 = (unsigned __int8)sub_140365AF4(a1 + 16, a2);
  if ( (_QWORD *)*v2 == v2 )
    v7 = 0LL;
  else
    v7 = sub_140365BA0(a1, *v2, 2LL);
  if ( v3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    CurrentThread = KeGetCurrentThread();
    if ( v5 - qword_140C50630 < 0x8000000000LL )
      v10 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v10 = -1;
    _disable();
    v16 = (__int64)CurrentThread + 1696;
    v17 = 0;
    while ( (*(_QWORD *)v16 & 0x7FFFFFFFFFFFFFFCLL) != (v5 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v16 + 18)
         || (*(_DWORD *)v16 & 1) != 0
         || *(_DWORD *)(v16 + 8) != v10 )
    {
      ++v17;
      v16 += 96LL;
      if ( v17 >= 6 )
        goto LABEL_28;
    }
    *(_BYTE *)(v16 + 18) = 0;
    if ( !v16 )
    {
LABEL_28:
      if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, v10, 0LL);
      _enable();
      goto LABEL_34;
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
      sub_14022B568((ULONG_PTR)CurrentThread, v5, v18);
LABEL_34:
    v19 = KeGetCurrentThread();
    v15 = (*((_WORD *)v19 + 243))++ == 0xFFFF;
    if ( v15 && *((struct _KTHREAD **)v19 + 19) != (struct _KTHREAD *)((char *)v19 + 152) )
      KiCheckForKernelApcDelivery();
  }
  return v7;
}

/*
 * XREFs of sub_14036E5F0 @ 0x14036E5F0
 * Callers:
 *     sub_14034BFE0 @ 0x14034BFE0 (sub_14034BFE0.c)
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_14036E388 @ 0x14036E388 (sub_14036E388.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 */

__int64 __fastcall sub_14036E5F0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // rcx
  ULONG_PTR v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r15
  unsigned __int8 CurrentIrql; // si
  int *v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned int v17; // r14d
  struct _KTHREAD *v19; // rdi
  unsigned int v20; // r8d
  __int64 v21; // rbx
  unsigned int i; // ecx
  int v23; // r8d
  struct _KTHREAD *v24; // rcx
  bool v25; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v29; // r8
  int v30; // eax
  unsigned __int8 v31; // [rsp+48h] [rbp-40h]

  _BitScanForward64(&v6, a3);
  _BitScanReverse64(&v8, a3);
  v9 = a2 + 24;
  v10 = (unsigned int)a4;
  v11 = a2 + (unsigned int)((_DWORD)v6 << 12);
  v12 = ((1LL << ((unsigned __int8)v8 - (unsigned __int8)v6 + 1)) - 1) << v6;
  if ( *(_DWORD *)(a1 + 8) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      a3 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = a3;
    }
    v14 = (int *)(a2 + 24);
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      sub_140461A66(v14, CurrentIrql);
    else
      sub_14030F870(v14, CurrentIrql, a3, a4);
    v31 = CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v31 = 0;
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
    CurrentIrql = 0;
  }
  v15 = a1 ^ *(_QWORD *)(a1 + 128);
  if ( !a5 )
  {
    sub_14042A5E0(v15, v11);
    *(_QWORD *)(a2 + 16) &= ~v12;
    v16 = -(int)v10;
LABEL_8:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v16);
    CurrentIrql = v31;
    v17 = 0;
    goto LABEL_9;
  }
  v17 = sub_14042A5E0(v15, v11);
  if ( (v17 & 0x80000000) == 0 )
  {
    *(_QWORD *)(a2 + 16) |= v12;
    v16 = v10;
    goto LABEL_8;
  }
LABEL_9:
  if ( *(_DWORD *)(a1 + 8) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v9);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = *((_QWORD *)CurrentPrcb + 4375);
          CurrentIrql = v31;
          v30 = ~(unsigned __int16)(-1LL << (v31 + 1));
          v25 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v30;
          if ( v25 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return v17;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  v19 = KeGetCurrentThread();
  if ( v9 - qword_140C50630 < 0x8000000000LL )
    v20 = sub_140287F30(*((_QWORD *)v19 + 23));
  else
    v20 = -1;
  _disable();
  v21 = (__int64)v19 + 1696;
  for ( i = 0; i < 6; ++i )
  {
    if ( (*(_QWORD *)v21 & 0x7FFFFFFFFFFFFFFCLL) == (v9 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_BYTE *)(v21 + 18)
      && (*(_DWORD *)v21 & 1) == 0
      && *(_DWORD *)(v21 + 8) == v20 )
    {
      *(_BYTE *)(v21 + 18) = 0;
      if ( *(__int64 *)v21 < 0 )
      {
        *(_BYTE *)v21 |= 2u;
        _enable();
        sub_14034EE30(v21);
        _disable();
      }
      v23 = *(_DWORD *)(v21 + 88);
      *(_DWORD *)(v21 + 88) = 0;
      *(_BYTE *)(v21 + 17) = 0;
      *(_QWORD *)v21 = 0LL;
      *((_BYTE *)v19 + 792) |= 1 << *(_BYTE *)(v21 + 16);
      _enable();
      if ( v23 )
        sub_14022B568((ULONG_PTR)v19, v9, v23);
      goto LABEL_26;
    }
    v21 += 96LL;
  }
  if ( (*((_DWORD *)v19 + 30) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v19, v9, v20, 0LL);
  _enable();
LABEL_26:
  v24 = KeGetCurrentThread();
  v25 = (*((_WORD *)v24 + 243))++ == 0xFFFF;
  if ( !v25 || *((struct _KTHREAD **)v24 + 19) == (struct _KTHREAD *)((char *)v24 + 152) )
    return v17;
  KiCheckForKernelApcDelivery();
  return v17;
}

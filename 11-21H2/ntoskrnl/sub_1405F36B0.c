/*
 * XREFs of sub_1405F36B0 @ 0x1405F36B0
 * Callers:
 *     sub_1405F30C0 @ 0x1405F30C0 (sub_1405F30C0.c)
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405F3924 @ 0x1405F3924 (sub_1405F3924.c)
 */

unsigned __int64 __fastcall sub_1405F36B0(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
{
  char v6; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  bool v14; // zf
  int v15; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // edx
  signed __int32 v21[18]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a3;
  v8 = (unsigned __int8)sub_1405F3924(a1, a3);
  v9 = *(_QWORD *)(a1 + 72);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= a1 + 72;
    else
      v9 = 0LL;
  }
  while ( 1 )
  {
    if ( !v9 )
    {
      v12 = -1LL;
      goto LABEL_16;
    }
    v10 = *(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < v10 )
    {
      v11 = *(_QWORD *)v9;
      goto LABEL_10;
    }
    if ( a2 <= v10 )
      break;
    v11 = *(_QWORD *)(v9 + 8);
LABEL_10:
    if ( (*(_BYTE *)(a1 + 80) & 1) != 0 && v11 )
      v9 ^= v11;
    else
      v9 = v11;
  }
  if ( a4 )
  {
    if ( (*(_BYTE *)(v9 + 32) & 1) != 0 )
    {
      _InterlockedOr(v21, 0);
      v15 = 1;
    }
    else
    {
      v15 = 0;
    }
    *a4 = v15;
  }
  v12 = (*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFF000uLL) - (unsigned __int16)*(_DWORD *)(v9 + 24);
LABEL_16:
  if ( (v6 & 1) == 0 )
  {
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = *((_QWORD *)CurrentPrcb + 4375);
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v14 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v14 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 64));
      sub_1402AFC00(a1 + 64);
      CurrentThread = KeGetCurrentThread();
      v14 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v14 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
    }
  }
  return v12;
}

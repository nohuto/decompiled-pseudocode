/*
 * XREFs of sub_14023CD70 @ 0x14023CD70
 * Callers:
 *     sub_140351E90 @ 0x140351E90 (sub_140351E90.c)
 * Callees:
 *     sub_14023CDE0 @ 0x14023CDE0 (sub_14023CDE0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140371F30 @ 0x140371F30 (sub_140371F30.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14023CD70(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rax
  ULONG_PTR v7; // rdi
  volatile LONG *v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf

  v4 = *a4;
  if ( (_DWORD)v4 == -1 )
  {
    v9 = (volatile LONG *)(a1 + 2144);
    v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 2144));
    v7 = sub_140371F30(a1, a4, 0LL, 0LL);
    ExReleaseSpinLockSharedFromDpcLevel(v9);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
  }
  else
  {
    v7 = a1 + 48 * (v4 + 45);
  }
  return sub_14023CDE0(v7);
}

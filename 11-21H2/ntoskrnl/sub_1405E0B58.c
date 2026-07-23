/*
 * XREFs of sub_1405E0B58 @ 0x1405E0B58
 * Callers:
 *     sub_1405B379C @ 0x1405B379C (sub_1405B379C.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405E0B58(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v3; // al
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  int v9; // edx
  bool v10; // zf

  v1 = (volatile LONG *)(a1 + 1648);
  v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1648));
  v4 = *(_QWORD *)(a1 + 1696);
  v5 = v3;
  ExReleaseSpinLockSharedFromDpcLevel(v1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v4;
}

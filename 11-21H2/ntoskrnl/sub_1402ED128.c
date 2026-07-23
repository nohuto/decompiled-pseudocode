/*
 * XREFs of sub_1402ED128 @ 0x1402ED128
 * Callers:
 *     sub_1402464E0 @ 0x1402464E0 (sub_1402464E0.c)
 *     sub_140252ED0 @ 0x140252ED0 (sub_140252ED0.c)
 *     sub_140271020 @ 0x140271020 (sub_140271020.c)
 *     sub_1402724C0 @ 0x1402724C0 (sub_1402724C0.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 *     sub_1402ED194 @ 0x1402ED194 (sub_1402ED194.c)
 *     sub_14030B950 @ 0x14030B950 (sub_14030B950.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_14031E900 @ 0x14031E900 (sub_14031E900.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_14031FD60 @ 0x14031FD60 (sub_14031FD60.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_1403265B0 @ 0x1403265B0 (sub_1403265B0.c)
 *     sub_140339370 @ 0x140339370 (sub_140339370.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_14033D80C @ 0x14033D80C (sub_14033D80C.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_140395958 @ 0x140395958 (sub_140395958.c)
 *     sub_140580CE0 @ 0x140580CE0 (sub_140580CE0.c)
 *     sub_1405943E4 @ 0x1405943E4 (sub_1405943E4.c)
 *     sub_1405A6DAC @ 0x1405A6DAC (sub_1405A6DAC.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall sub_1402ED128(char a1)
{
  int v1; // r8d
  bool v2; // zf
  volatile LONG *v3; // rcx
  char v4; // bl

  v1 = a1 & 1;
  v2 = (a1 & 2) == 0;
  v3 = (volatile LONG *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 284LL);
  if ( !v2 )
  {
    if ( v1 )
    {
      v4 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v3);
      return v4;
    }
    return ExAcquireSpinLockExclusive(v3);
  }
  if ( !v1 )
    return ExAcquireSpinLockShared(v3);
  v4 = 17;
  ExAcquireSpinLockSharedAtDpcLevel(v3);
  return v4;
}

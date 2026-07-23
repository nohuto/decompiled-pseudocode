/*
 * XREFs of sub_1402806E0 @ 0x1402806E0
 * Callers:
 *     sub_1402464E0 @ 0x1402464E0 (sub_1402464E0.c)
 *     sub_140252ED0 @ 0x140252ED0 (sub_140252ED0.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_140271020 @ 0x140271020 (sub_140271020.c)
 *     sub_1402724C0 @ 0x1402724C0 (sub_1402724C0.c)
 *     sub_1402803FC @ 0x1402803FC (sub_1402803FC.c)
 *     sub_1402804F0 @ 0x1402804F0 (sub_1402804F0.c)
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
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_1403927C4 @ 0x1403927C4 (sub_1403927C4.c)
 *     sub_140395958 @ 0x140395958 (sub_140395958.c)
 *     sub_140580CE0 @ 0x140580CE0 (sub_140580CE0.c)
 *     sub_1405943E4 @ 0x1405943E4 (sub_1405943E4.c)
 *     sub_1405A6DAC @ 0x1405A6DAC (sub_1405A6DAC.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1402806E0(char a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // edx
  bool v4; // zf
  volatile LONG *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r8
  int v9; // eax

  v2 = a2;
  v3 = a1 & 1;
  v4 = (a1 & 2) == 0;
  v5 = (volatile LONG *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 284LL);
  if ( v4 )
  {
    if ( v3 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(v5);
      return;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v5);
  }
  else
  {
    if ( v3 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      return;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v4 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v4 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
}

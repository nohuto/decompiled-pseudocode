/*
 * XREFs of sub_140216544 @ 0x140216544
 * Callers:
 *     sub_140201144 @ 0x140201144 (sub_140201144.c)
 *     sub_1402137E4 @ 0x1402137E4 (sub_1402137E4.c)
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_1405910C0 @ 0x1405910C0 (sub_1405910C0.c)
 *     sub_140591814 @ 0x140591814 (sub_140591814.c)
 *     sub_140591AD0 @ 0x140591AD0 (sub_140591AD0.c)
 *     sub_140591C4C @ 0x140591C4C (sub_140591C4C.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_140216544(unsigned __int8 a1, char a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf

  v2 = a1;
  if ( (a2 & 1) != 0 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4199) + 12488LL)
                                                      + 128LL));
  }
  else
  {
    v4 = qword_140C506E0;
    v5 = 0;
    if ( word_140D05000 != 1 )
    {
      do
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v4 + 112) + 128LL));
        v4 += 120LL;
        ++v5;
      }
      while ( v5 < (unsigned int)(unsigned __int16)word_140D05000 - 1 );
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v4 + 112) + 128LL));
  }
  if ( (a2 & 4) == 0 )
  {
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
          v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= v9;
          if ( v10 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}

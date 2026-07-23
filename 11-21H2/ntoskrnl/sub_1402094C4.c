/*
 * XREFs of sub_1402094C4 @ 0x1402094C4
 * Callers:
 *     sub_140683890 @ 0x140683890 (sub_140683890.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402094C4(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  volatile LONG *v5; // rbp
  signed __int8 v6; // cf
  volatile signed __int32 **v7; // rbx
  unsigned int v8; // r14d
  volatile signed __int32 *i; // rax
  __int64 v11; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // edx
  bool v16; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v5 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( a2 )
    v6 = _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 2u);
  else
    v6 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 2u);
  v7 = (volatile signed __int32 **)(a1 + 48);
  v8 = v6;
  for ( i = *v7; i != (volatile signed __int32 *)v7; i = *(volatile signed __int32 **)i )
  {
    if ( a2 )
      _interlockedbittestandset(i - 160, 8u);
    else
      _interlockedbittestandreset(i - 160, 8u);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
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
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}

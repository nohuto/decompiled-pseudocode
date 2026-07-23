/*
 * XREFs of sub_1402443D8 @ 0x1402443D8
 * Callers:
 *     sub_140580DB8 @ 0x140580DB8 (sub_140580DB8.c)
 *     sub_1406C03F0 @ 0x1406C03F0 (sub_1406C03F0.c)
 * Callees:
 *     sub_140244508 @ 0x140244508 (sub_140244508.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall sub_1402443D8(__int64 a1, char a2)
{
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v6; // r12
  __int64 v7; // r8
  int v8; // ecx
  unsigned int v9; // esi
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  __int64 v13; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v13 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v8 = *(_DWORD *)(a1 + 888);
  v9 = v8 + ((*(_DWORD *)(a1 + 632) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 72) = sub_1402F5718(0LL);
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 3u);
  }
  else
  {
    *(_DWORD *)(a1 + 888) = v8 + 1;
    if ( v8 )
      goto LABEL_7;
  }
  v10 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v10; i = (_QWORD *)*i )
  {
    LOBYTE(v7) = a2;
    sub_140244508(CurrentPrcb, i - 95, v7);
  }
LABEL_7:
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  sub_1402B0820((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v9;
}

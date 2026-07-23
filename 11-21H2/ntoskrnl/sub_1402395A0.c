/*
 * XREFs of sub_1402395A0 @ 0x1402395A0
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402395A0(__int64 a1, __int64 a2, _DWORD *a3, _OWORD *a4, _WORD *a5)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  __int64 v11; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  sub_140300030(a2, *(unsigned __int16 *)(a2 + 2), a1 + 80);
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 636);
  if ( a4 )
  {
    *a4 = *(_OWORD *)(a1 + 772);
    a4[1] = *(_OWORD *)(a1 + 788);
    a4[2] = *(_OWORD *)(a1 + 804);
    a4[3] = *(_OWORD *)(a1 + 820);
  }
  if ( a5 )
    *a5 = *(_WORD *)(a1 + 1040);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
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
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

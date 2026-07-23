/*
 * XREFs of sub_1402DC05C @ 0x1402DC05C
 * Callers:
 *     sub_140297AE0 @ 0x140297AE0 (sub_140297AE0.c)
 *     sub_1402DBFAC @ 0x1402DBFAC (sub_1402DBFAC.c)
 *     RtlPcToFileName @ 0x1403D6E30 (RtlPcToFileName.c)
 *     sub_140595F4C @ 0x140595F4C (sub_140595F4C.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_1402DC05C(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v3; // r9
  int v4; // eax
  bool v5; // zf

  v1 = a1;
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140D311C0);
  if ( (unsigned __int8)v1 < 0xFu )
  {
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v3 = *((_QWORD *)CurrentPrcb + 4375);
      v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
      v5 = (v4 & *(_DWORD *)(v3 + 20)) == 0;
      *(_DWORD *)(v3 + 20) &= v4;
      if ( v5 )
        sub_140418E4C(CurrentPrcb);
    }
    __writecr8(v1);
  }
}

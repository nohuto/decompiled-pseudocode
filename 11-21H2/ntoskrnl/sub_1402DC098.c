/*
 * XREFs of sub_1402DC098 @ 0x1402DC098
 * Callers:
 *     sub_140297AE0 @ 0x140297AE0 (sub_140297AE0.c)
 *     sub_1402DBFAC @ 0x1402DBFAC (sub_1402DBFAC.c)
 *     RtlPcToFileName @ 0x1403D6E30 (RtlPcToFileName.c)
 *     sub_140595F4C @ 0x140595F4C (sub_140595F4C.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall sub_1402DC098(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v3; // dl
  __int64 v4; // r9

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    v3 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && v3 <= 0xFu )
      {
        v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v4 + 20) |= ~((unsigned __int16)(1LL << (v3 + 1)) - 1) & 0xFFFC;
      }
    }
  }
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140D311C0);
  *a1 = CurrentIrql;
}

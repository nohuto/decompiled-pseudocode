/*
 * XREFs of RtlQueryPointerMapping @ 0x1405E7640
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405E7B68 @ 0x1405E7B68 (sub_1405E7B68.c)
 */

__int64 __fastcall RtlQueryPointerMapping(__int64 a1, _QWORD *a2)
{
  unsigned __int8 v4; // al
  unsigned __int64 Root; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf

  v4 = sub_1405E7B68(&dword_140D04904);
  Root = (unsigned __int64)stru_140C0D780.Root;
  v6 = v4;
  if ( ((__int64)stru_140C0D780.Min & 1) != 0 && stru_140C0D780.Root )
    Root = (unsigned __int64)&stru_140C0D780 ^ (unsigned __int64)stru_140C0D780.Root;
  while ( Root )
  {
    if ( a1 - *(_QWORD *)(Root + 24) >= 0 )
    {
      if ( a1 - *(_QWORD *)(Root + 24) <= 0 )
      {
        *a2 = *(_QWORD *)(Root + 32);
        break;
      }
      v7 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v7 = *(_QWORD *)Root;
    }
    if ( ((__int64)stru_140C0D780.Min & 1) != 0 && v7 )
      Root ^= v7;
    else
      Root = v7;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140D04904);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return Root == 0 ? 0xC0000225 : 0;
}

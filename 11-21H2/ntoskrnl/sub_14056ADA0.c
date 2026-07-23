/*
 * XREFs of sub_14056ADA0 @ 0x14056ADA0
 * Callers:
 *     sub_140428D90 @ 0x140428D90 (sub_140428D90.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_14056ADA0()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v1; // r9
  unsigned __int64 v2; // rax
  unsigned __int8 v3; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v5; // r8
  int v6; // eax
  bool v7; // zf
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v1 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v1 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v2 = __readmsr(0x570u);
  if ( (v2 & 1) != 0 )
  {
    __writemsr(0x570u, v2 & 0xFFFFFFFFFFFFFFFEuLL);
    __writemsr(0x561u, 0LL);
    __writemsr(0x571u, 0LL);
    __writemsr(0x570u, v2);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v3 = KeGetCurrentIrql();
      if ( v3 <= 0xFu && CurrentIrql <= 0xFu && v3 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

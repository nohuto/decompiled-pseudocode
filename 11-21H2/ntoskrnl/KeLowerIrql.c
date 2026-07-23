/*
 * XREFs of KeLowerIrql @ 0x1402B1E10
 * Callers:
 *     sub_140432080 @ 0x140432080 (sub_140432080.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __stdcall KeLowerIrql(KIRQL NewIrql)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v4; // r9
  int v5; // eax
  bool v6; // zf

  v1 = NewIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && NewIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v4 = *((_QWORD *)CurrentPrcb + 4375);
        v5 = ~(unsigned __int16)(-1LL << (NewIrql + 1));
        v6 = (v5 & *(_DWORD *)(v4 + 20)) == 0;
        *(_DWORD *)(v4 + 20) &= v5;
        if ( v6 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v1);
}

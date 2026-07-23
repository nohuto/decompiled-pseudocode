/*
 * XREFs of sub_1405129C8 @ 0x1405129C8
 * Callers:
 *     IoFreeMapRegisters @ 0x140456A30 (IoFreeMapRegisters.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045746C @ 0x14045746C (sub_14045746C.c)
 *     sub_140512444 @ 0x140512444 (sub_140512444.c)
 */

void __fastcall sub_1405129C8(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r14
  char v5; // bp
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf

  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 && a2 )
  {
    v5 = 0;
    CurrentIrql = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v5 = 1;
    }
    if ( a3 )
      sub_14045746C(a1, a2, a3);
    sub_140512444(v3, *(_BYTE *)(a1 + 434));
    if ( v5 )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v8 = KeGetCurrentIrql();
          if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v10 = *((_QWORD *)CurrentPrcb + 4375);
            v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
            *(_DWORD *)(v10 + 20) &= v11;
            if ( v12 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
}

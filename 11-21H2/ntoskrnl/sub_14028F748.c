/*
 * XREFs of sub_14028F748 @ 0x14028F748
 * Callers:
 *     sub_14025CE50 @ 0x14025CE50 (sub_14025CE50.c)
 *     sub_14028F718 @ 0x14028F718 (sub_14028F718.c)
 * Callees:
 *     sub_140229D30 @ 0x140229D30 (sub_140229D30.c)
 *     sub_14024E928 @ 0x14024E928 (sub_14024E928.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14028F748(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KDPC *CurrentPrcb; // rdi
  __int64 result; // rax
  __int64 v5; // r9
  _QWORD *v6; // r8
  PVOID *p_DpcData; // rdx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
  if ( !*(_BYTE *)(a1 + 871) || a2 )
  {
    if ( !*(_BYTE *)(a1 + 793) || !a2 )
      goto LABEL_4;
    v6 = (_QWORD *)(a1 + 808);
    p_DpcData = &CurrentPrcb[557].DpcData;
  }
  else
  {
    v6 = (_QWORD *)(a1 + 816);
    p_DpcData = &CurrentPrcb[557].SystemArgument2;
  }
  if ( (unsigned int)sub_14024E928(a1, p_DpcData, v6) )
    sub_140229D30(CurrentPrcb);
LABEL_4:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = *((_QWORD *)v9 + 4375);
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C(v9);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

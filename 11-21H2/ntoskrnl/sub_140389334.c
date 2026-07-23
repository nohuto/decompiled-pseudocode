/*
 * XREFs of sub_140389334 @ 0x140389334
 * Callers:
 *     sub_1403892D0 @ 0x1403892D0 (sub_1403892D0.c)
 *     sub_14056A19C @ 0x14056A19C (sub_14056A19C.c)
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140389334(PVOID **a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // r10
  PVOID *v5; // rax
  PVOID *v6; // r11
  PVOID *v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  struct _KPRCB *CurrentPrcb; // r9
  int v12; // eax
  __int64 v13; // r8
  bool v14; // zf

  CurrentIrql = KeGetCurrentIrql();
  v5 = *a1;
  v6 = &qword_140C2BD30;
  if ( *a1 == &qword_140C2BD30 )
    goto LABEL_9;
  if ( v5 )
    goto LABEL_6;
  if ( CurrentIrql < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
  }
  *a2 = CurrentIrql;
  v5 = (PVOID *)qword_140C2BD30;
  if ( qword_140C2BD30 )
  {
LABEL_6:
    *a3 = v5[1];
    v7 = (PVOID *)*v5;
    result = 1LL;
    if ( v7 )
      v6 = v7;
    *a1 = v6;
  }
  else
  {
LABEL_9:
    v9 = *a2;
    if ( (unsigned __int8)v9 < 2u )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = (v12 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v12;
          if ( v14 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      __writecr8(v9);
    }
    return 0LL;
  }
  return result;
}

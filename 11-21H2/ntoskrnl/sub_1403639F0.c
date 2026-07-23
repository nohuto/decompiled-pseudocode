/*
 * XREFs of sub_1403639F0 @ 0x1403639F0
 * Callers:
 *     sub_14025AFF0 @ 0x14025AFF0 (sub_14025AFF0.c)
 *     sub_140363850 @ 0x140363850 (sub_140363850.c)
 * Callees:
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140365DD0 @ 0x140365DD0 (sub_140365DD0.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 */

__int64 __fastcall sub_1403639F0(__int64 a1, struct _EX_RUNDOWN_REF **a2, ULONG_PTR *a3)
{
  struct _EX_RUNDOWN_REF *v5; // rax
  unsigned int v6; // ebx
  struct _EX_RUNDOWN_REF *v7; // rdi

  v5 = (struct _EX_RUNDOWN_REF *)sub_140365DD0();
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    if ( sub_140347810(v5 + 21) )
    {
      *a3 = v7[20].Count;
      *a2 = v7;
    }
    else
    {
      v6 = -1073741431;
      sub_140366814(v7);
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v6;
}

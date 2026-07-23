/*
 * XREFs of sub_140266BBC @ 0x140266BBC
 * Callers:
 *     sub_140266B8C @ 0x140266B8C (sub_140266B8C.c)
 *     KeQueryEffectivePriorityThread @ 0x140385140 (KeQueryEffectivePriorityThread.c)
 *     sub_1403C1398 @ 0x1403C1398 (sub_1403C1398.c)
 * Callees:
 *     sub_1402103E0 @ 0x1402103E0 (sub_1402103E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

bool __fastcall sub_140266BBC(__int64 a1, struct _KPRCB *a2)
{
  int v4; // ebx
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KPRCB *v10; // r9
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return 0;
  v4 = 0;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v6 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v8 = *(_QWORD *)(a1 + 104);
  if ( v8 )
  {
    v9 = *((unsigned int *)CurrentPrcb + 54) + v8;
    if ( v9 )
    {
      if ( a2 )
      {
        v4 = sub_1402103E0(a1, v9, 0LL, 0, 0LL);
      }
      else
      {
        do
        {
          v4 = (*(unsigned __int8 *)(v9 + 112) >> 3) & 1;
          if ( v4 )
            break;
          v9 = *(_QWORD *)(v9 + 408);
        }
        while ( v9 );
      }
    }
  }
  if ( CurrentIrql < 2u )
  {
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v10 = KeGetCurrentPrcb();
      v11 = *((_QWORD *)v10 + 4375);
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
      *(_DWORD *)(v11 + 20) &= v12;
      if ( v13 )
        sub_140418E4C(v10);
    }
    __writecr8(CurrentIrql);
  }
  return v4 != 0;
}

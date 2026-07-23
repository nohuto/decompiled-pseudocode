/*
 * XREFs of sub_1405254E0 @ 0x1405254E0
 * Callers:
 *     <none>
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405254E0(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3)
{
  char v3; // bp
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // r9
  struct _EX_RUNDOWN_REF *v6; // rdi
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v9; // r8
  int v10; // eax
  bool v11; // zf

  v3 = 0;
  CurrentIrql = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    v3 = 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
  }
  v6 = a2 + 9;
  if ( a3 )
  {
    sub_14042A5E0(*(_QWORD *)(a2[3].Count + 16), a2[5].Count);
    _InterlockedExchange64((volatile __int64 *)v6, 0LL);
  }
  else
  {
    ExWaitForRundownProtectionRelease(a2 + 9);
    ExRundownCompleted(v6);
  }
  if ( v3 )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v7 = KeGetCurrentIrql();
        if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = *((_QWORD *)CurrentPrcb + 4375);
          v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
          *(_DWORD *)(v9 + 20) &= v10;
          if ( v11 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return 0LL;
}

/*
 * XREFs of MiUseLowIoPriorityForModifiedPages @ 0x140222ED8
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x14021F234 (MiAdjustModifiedPageLoad.c)
 *     MiStoreUpdateMemoryConditions @ 0x140222F70 (MiStoreUpdateMemoryConditions.c)
 *     MiModifiedPageWriter @ 0x1403B2940 (MiModifiedPageWriter.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x1402204FC (MiGetStandbyRepurposed.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14025BD60 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiUseLowIoPriorityForModifiedPages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v3; // r11
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned int StandbyRepurposed; // eax
  unsigned int v7; // r10d
  _BOOL8 result; // rax

  result = 0;
  if ( !*(_DWORD *)(a1 + 824) && !*(_DWORD *)(a1 + 1184) )
  {
    v1 = *(_QWORD *)(a1 + 17040);
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
    v4 = v1 >> 2;
    v5 = AvailablePagesBelowPriority;
    if ( *(_QWORD *)(v3 + 17824) < 3 * v4 && (AvailablePagesBelowPriority > 0x40000 || AvailablePagesBelowPriority > v4) )
    {
      StandbyRepurposed = MiGetStandbyRepurposed(v3, 1u);
      if ( (v7 < StandbyRepurposed ? StandbyRepurposed - v7 : 0) < v5 >> 2 )
        return 1;
    }
  }
  return result;
}

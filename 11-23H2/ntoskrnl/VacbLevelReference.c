/*
 * XREFs of VacbLevelReference @ 0x1402F35D8
 * Callers:
 *     CcAdjustVacbLevelLockCount @ 0x1402075C0 (CcAdjustVacbLevelLockCount.c)
 *     CcExtendVacbArray @ 0x1402F2A44 (CcExtendVacbArray.c)
 *     CcSetVacbLargeOffset @ 0x1402F2EB0 (CcSetVacbLargeOffset.c)
 *     CcCalculateVacbLevelLockCount @ 0x1402F4C4C (CcCalculateVacbLevelLockCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VacbLevelReference(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = 0LL;
  if ( !a3 )
    v3 = 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
  return a2 + v3 + 1024;
}

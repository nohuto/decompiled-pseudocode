/*
 * XREFs of GetResourceDirectoryEntry @ 0x18006C0B4
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BDFC (WerEscalationReadImageVersionInfoForModuleBase.c)
 * Callees:
 *     ValidatePointer @ 0x18006C078 (ValidatePointer.c)
 */

__int64 __fastcall GetResourceDirectoryEntry(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  BOOL v3; // eax
  __int64 v4; // rdx

  if ( a3 >= *(unsigned __int16 *)(a2 + 12) + (unsigned int)*(unsigned __int16 *)(a2 + 14) )
    return 0LL;
  v3 = ValidatePointer(a1, a2 + 8LL * a3 + 16, 8LL);
  return v4 & -(__int64)v3;
}

/*
 * XREFs of GetResourceDirectoryEntry @ 0x1800532DC
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180053020 (WerEscalationReadImageVersionInfoForModuleBase.c)
 * Callees:
 *     ValidatePointer @ 0x18005329C (ValidatePointer.c)
 */

__int64 __fastcall GetResourceDirectoryEntry(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdx

  if ( a3 < *(unsigned __int16 *)(a2 + 12) + (unsigned int)*(unsigned __int16 *)(a2 + 14)
    && ValidatePointer(a1, a2 + 8LL * a3 + 16, 8LL) )
  {
    return v3;
  }
  else
  {
    return 0LL;
  }
}

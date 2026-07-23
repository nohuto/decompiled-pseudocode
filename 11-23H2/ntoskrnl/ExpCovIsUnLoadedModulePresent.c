/*
 * XREFs of ExpCovIsUnLoadedModulePresent @ 0x140A067A4
 * Callers:
 *     ExpCovQueryInformation @ 0x140A06A3C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140A072E4 (ExpCovResetInformation.c)
 * Callees:
 *     ExpCovIsModulePresent @ 0x140A066FC (ExpCovIsModulePresent.c)
 */

bool __fastcall ExpCovIsUnLoadedModulePresent(__int64 a1, int a2, const UNICODE_STRING *a3, void *a4)
{
  __int64 v5; // rdx

  v5 = *(_QWORD *)(a1 + 56);
  return v5 && ExpCovIsModulePresent(a1 + 16, v5, a2, a3, a4);
}

/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x1405EEC28
 * Callers:
 *     RtlGuardRestoreContext @ 0x140294C30 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlpControlFlowGuardEnforced @ 0x140294CA4 (RtlpControlFlowGuardEnforced.c)
 *     RtlPcToFileHeader @ 0x1403870E0 (RtlPcToFileHeader.c)
 *     bsearch_s @ 0x1403E1950 (bsearch_s.c)
 *     RtlFailFast2 @ 0x14042ABB0 (RtlFailFast2.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075AEA4 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1)
{
  __int64 Config; // rax
  rsize_t v3; // r8
  int Key; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  Key = 0;
  v6 = 0LL;
  if ( (unsigned int)RtlpControlFlowGuardEnforced() )
  {
    RtlPcToFileHeader(a1, &v6);
    if ( !v6
      || (Config = LdrImageDirectoryEntryToLoadConfig(v6)) != 0
      && *(_DWORD *)Config >= 0xC0u
      && (*(_DWORD *)(Config + 144) & 0x10000) != 0
      && ((Key = a1 - v6, (v3 = *(_QWORD *)(Config + 184)) == 0)
       || !bsearch_s(
             &Key,
             *(const void **)(Config + 176),
             v3,
             (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
             (int (__cdecl *)(void *, const void *, const void *))RtlpTargetCompare,
             0LL)) )
    {
      RtlFailFast2(0x26u);
    }
  }
  return 0LL;
}

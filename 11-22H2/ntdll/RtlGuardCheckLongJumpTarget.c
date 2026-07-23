/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x18006DBC0
 * Callers:
 *     RtlGuardRestoreContext @ 0x18006DA50 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020CE0 (RtlpxLookupFunctionTable.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002BA28 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     RtlQueryProtectedPolicy @ 0x180084650 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x180091830 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800A3E40 (RtlFailFast2.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  bool v4; // bp
  int v6; // eax
  char v7; // bl
  _DWORD *Config; // rax
  rsize_t v9; // r8
  unsigned __int64 PolicyValue; // [rsp+30h] [rbp-28h] BYREF
  PVOID BaseOfImage[4]; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  v4 = IsFastFail;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( !v6 )
  {
    if ( !IsLongJumpTarget )
      return 0;
    v7 = 1;
LABEL_15:
    *(_BYTE *)IsLongJumpTarget = v7;
    return 0;
  }
  v7 = 0;
  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_180199520 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_180199520 + 1)
                                  + (unsigned __int64)(unsigned int)qword_180199530 )
  {
    RtlpxLookupFunctionTable(PcValue, (__int64 *)BaseOfImage);
  }
  else
  {
    *(_OWORD *)BaseOfImage = xmmword_180199520;
  }
  if ( BaseOfImage[1] )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage[1]);
    if ( !Config
      || *Config < 0xC0u
      || (Config[36] & 0x10000) == 0
      || (Key = (_DWORD)PcValue - LODWORD(BaseOfImage[1]), (v9 = *((_QWORD *)Config + 23)) != 0)
      && bsearch_s(
           &Key,
           *((const void **)Config + 22),
           v9,
           (unsigned int)((Config[36] >> 28) + 4),
           RtlpTargetCompare,
           0LL) )
    {
LABEL_10:
      v7 = 1;
      goto LABEL_11;
    }
  }
  else if ( RtlQueryProtectedPolicy((PGUID)&stru_1801586B8, &PolicyValue) >= 0 && PolicyValue )
  {
    goto LABEL_10;
  }
  if ( !v4 )
    RtlFailFast2(38LL, PcValue);
LABEL_11:
  if ( IsLongJumpTarget )
    goto LABEL_15;
  return 0;
}

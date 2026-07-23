/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x18006DBC0
 * Callers:
 *     RtlGuardRestoreContext @ 0x18006DA50 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020B00 (RtlpxLookupFunctionTable.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002B858 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforced @ 0x18002C3A0 (LdrControlFlowGuardEnforced.c)
 *     RtlQueryProtectedPolicy @ 0x180084E50 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x180092030 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800A5EF0 (RtlFailFast2.c)
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
  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18019C530 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18019C530 + 1)
                                  + (unsigned __int64)(unsigned int)qword_18019C540 )
  {
    RtlpxLookupFunctionTable(PcValue, (__int64 *)BaseOfImage);
  }
  else
  {
    *(_OWORD *)BaseOfImage = xmmword_18019C530;
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
  else if ( RtlQueryProtectedPolicy((PGUID)&stru_18015ACF8, &PolicyValue) >= 0 && PolicyValue )
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

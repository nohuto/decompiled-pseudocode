/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x180034D40
 * Callers:
 *     RtlGuardRestoreContext @ 0x180035390 (RtlGuardRestoreContext.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180034A60 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 *     RtlQueryProtectedPolicy @ 0x180087FB0 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x180096840 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800A9000 (RtlFailFast2.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  bool v4; // bp
  int v6; // eax
  char v8; // bl
  _DWORD *Config; // rax
  rsize_t v10; // r8
  unsigned __int64 PolicyValue; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h]
  int Key; // [rsp+78h] [rbp+20h] BYREF

  v4 = IsFastFail;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    v8 = 0;
    if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_18018F510 + 1)
      || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_18018F510 + 1)
                                    + (unsigned __int64)(unsigned int)qword_18018F520 )
    {
      RtlpxLookupFunctionTable(PcValue);
    }
    else
    {
      v12 = xmmword_18018F510;
    }
    if ( *((_QWORD *)&v12 + 1) )
    {
      Config = LdrImageDirectoryEntryToLoadConfig(*((void **)&v12 + 1));
      if ( !Config
        || *Config < 0xC0u
        || (Config[36] & 0x10000) == 0
        || (Key = (_DWORD)PcValue - DWORD2(v12), (v10 = *((_QWORD *)Config + 23)) != 0)
        && bsearch_s(
             &Key,
             *((const void **)Config + 22),
             v10,
             (unsigned int)((Config[36] >> 28) + 4),
             RtlpTargetCompare,
             0LL) )
      {
LABEL_12:
        v8 = 1;
        goto LABEL_13;
      }
    }
    else if ( RtlQueryProtectedPolicy((PGUID)&stru_18014E520, &PolicyValue) >= 0 && PolicyValue )
    {
      goto LABEL_12;
    }
    if ( !v4 )
      RtlFailFast2(38LL, PcValue);
LABEL_13:
    if ( !IsLongJumpTarget )
      return 0;
LABEL_14:
    *(_BYTE *)IsLongJumpTarget = v8;
    return 0;
  }
  if ( IsLongJumpTarget )
  {
    v8 = 1;
    goto LABEL_14;
  }
  return 0;
}

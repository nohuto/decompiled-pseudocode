/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x18006DCC0
 * Callers:
 *     RtlGuardRestoreContext @ 0x18006DA50 (RtlGuardRestoreContext.c)
 *     RcFrameConsolidation @ 0x1800A36F0 (RcFrameConsolidation.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020CE0 (RtlpxLookupFunctionTable.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x18002BA28 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforced @ 0x18002C570 (LdrControlFlowGuardEnforced.c)
 *     bsearch_s @ 0x180091830 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800A3E40 (RtlFailFast2.c)
 */

__int64 __fastcall RtlGuardCheckExceptionHandler(unsigned __int64 a1, char a2, char *a3)
{
  char v6; // bl
  unsigned __int64 v7; // rbp
  _DWORD *Config; // rax
  const void **v9; // rdx
  rsize_t v10; // r8
  unsigned int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  int Key; // [rsp+88h] [rbp+20h] BYREF

  if ( !LdrControlFlowGuardEnforced() )
  {
    if ( !a3 )
      return 0LL;
    v6 = 1;
LABEL_16:
    *a3 = v6;
    return 0LL;
  }
  v6 = 0;
  if ( a1 < *((_QWORD *)&xmmword_180199520 + 1)
    || a1 >= *((_QWORD *)&xmmword_180199520 + 1) + (unsigned __int64)(unsigned int)qword_180199530 )
  {
    RtlpxLookupFunctionTable(a1, (__int64 *)&v13);
  }
  else
  {
    v13 = xmmword_180199520;
  }
  v7 = *((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1)
    && (Config = LdrImageDirectoryEntryToLoadConfig(*((unsigned __int64 *)&v13 + 1)), (v9 = (const void **)Config) != 0LL)
    && *Config >= 0x118u
    && (Config[36] & 0x400000) != 0
    && *((_QWORD *)Config + 33) > v7
    && ((Key = a1 - v7, v10 = *((_QWORD *)Config + 34), v11 = (Config[36] >> 28) + 4, !v10)
     || !bsearch_s(&Key, v9[33], v10, v11, RtlpTargetCompare, 0LL)) )
  {
    if ( !a2 )
      RtlFailFast2(38LL, a1);
  }
  else
  {
    v6 = 1;
  }
  if ( a3 )
    goto LABEL_16;
  return 0LL;
}

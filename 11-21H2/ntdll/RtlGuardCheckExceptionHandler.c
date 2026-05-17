/*
 * XREFs of RtlGuardCheckExceptionHandler @ 0x180032BD0
 * Callers:
 *     RtlGuardRestoreContext @ 0x180035390 (RtlGuardRestoreContext.c)
 *     RcFrameConsolidation @ 0x1800A88B0 (RcFrameConsolidation.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180034A60 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 *     bsearch_s @ 0x180096840 (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800A9000 (RtlFailFast2.c)
 */

__int64 __fastcall RtlGuardCheckExceptionHandler(unsigned __int64 a1, char a2, char *a3)
{
  char v6; // bl
  unsigned __int64 v7; // rbp
  __int64 Config; // rax
  __int64 v9; // rdx
  rsize_t v10; // r8
  unsigned int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  int Key; // [rsp+88h] [rbp+20h] BYREF

  if ( !(unsigned int)LdrControlFlowGuardEnforced() )
  {
    if ( !a3 )
      return 0LL;
    v6 = 1;
LABEL_16:
    *a3 = v6;
    return 0LL;
  }
  v6 = 0;
  if ( a1 < *((_QWORD *)&xmmword_18018F510 + 1)
    || a1 >= *((_QWORD *)&xmmword_18018F510 + 1) + (unsigned __int64)(unsigned int)qword_18018F520 )
  {
    RtlpxLookupFunctionTable(a1, &v13);
  }
  else
  {
    v13 = xmmword_18018F510;
  }
  v7 = *((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1)
    && (Config = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v13 + 1)), (v9 = Config) != 0)
    && *(_DWORD *)Config >= 0x118u
    && (*(_DWORD *)(Config + 144) & 0x400000) != 0
    && *(_QWORD *)(Config + 264) > v7
    && ((Key = a1 - v7, v10 = *(_QWORD *)(Config + 272), v11 = (*(_DWORD *)(Config + 144) >> 28) + 4, !v10)
     || !bsearch_s(&Key, *(const void **)(v9 + 264), v10, v11, RtlpTargetCompare, 0LL)) )
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

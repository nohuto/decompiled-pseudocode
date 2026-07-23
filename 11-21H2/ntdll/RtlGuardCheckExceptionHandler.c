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

__int64 __fastcall RtlGuardCheckExceptionHandler(PVOID BaseAddress, char a2, char *a3)
{
  int v6; // eax
  char v7; // bl
  __int64 Config; // rax
  __int64 v9; // rdx
  rsize_t v10; // r8
  unsigned int v11; // eax
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]
  int Key; // [rsp+88h] [rbp+20h] BYREF

  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( !v6 )
  {
    if ( !a3 )
      return 0LL;
    v7 = 1;
LABEL_16:
    *a3 = v7;
    return 0LL;
  }
  v7 = 0;
  if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18018F510 + 1)
    || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_18018F510 + 1)
                                      + (unsigned __int64)(unsigned int)qword_18018F520 )
  {
    RtlpxLookupFunctionTable(BaseAddress);
  }
  else
  {
    v13 = *((_QWORD *)&xmmword_18018F510 + 1);
  }
  if ( v13
    && (Config = LdrImageDirectoryEntryToLoadConfig(v13), (v9 = Config) != 0)
    && *(_DWORD *)Config >= 0x118u
    && (*(_DWORD *)(Config + 144) & 0x400000) != 0
    && *(_QWORD *)(Config + 264) > v13
    && ((Key = (_DWORD)BaseAddress - v13,
         v10 = *(_QWORD *)(Config + 272),
         v11 = (*(_DWORD *)(Config + 144) >> 28) + 4,
         !v10)
     || !bsearch_s(&Key, *(const void **)(v9 + 264), v10, v11, RtlpTargetCompare, 0LL)) )
  {
    if ( !a2 )
      RtlFailFast2(38LL, BaseAddress);
  }
  else
  {
    v7 = 1;
  }
  if ( a3 )
    goto LABEL_16;
  return 0LL;
}

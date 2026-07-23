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

__int64 __fastcall RtlGuardCheckExceptionHandler(PVOID BaseAddress, char a2, char *a3)
{
  int v6; // eax
  char v7; // bl
  PVOID v8; // rbp
  _DWORD *Config; // rax
  const void **v10; // rdx
  rsize_t v11; // r8
  unsigned int v12; // eax
  PVOID BaseOfImage[7]; // [rsp+30h] [rbp-38h] BYREF
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
  if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_180199520 + 1)
    || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_180199520 + 1)
                                      + (unsigned __int64)(unsigned int)qword_180199530 )
  {
    RtlpxLookupFunctionTable(BaseAddress, (__int64 *)BaseOfImage);
  }
  else
  {
    *(_OWORD *)BaseOfImage = xmmword_180199520;
  }
  v8 = BaseOfImage[1];
  if ( BaseOfImage[1]
    && (Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage[1]), (v10 = (const void **)Config) != 0LL)
    && *Config >= 0x118u
    && (Config[36] & 0x400000) != 0
    && *((_QWORD *)Config + 33) > (unsigned __int64)v8
    && ((Key = (_DWORD)BaseAddress - (_DWORD)v8, v11 = *((_QWORD *)Config + 34), v12 = (Config[36] >> 28) + 4, !v11)
     || !bsearch_s(&Key, v10[33], v11, v12, RtlpTargetCompare, 0LL)) )
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

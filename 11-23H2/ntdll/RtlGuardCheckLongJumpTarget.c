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

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, char a2, char *a3)
{
  char v6; // bl
  _DWORD *Config; // rax
  rsize_t v8; // r8
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  if ( !LdrControlFlowGuardEnforced() )
  {
    if ( !a3 )
      return 0LL;
    v6 = 1;
LABEL_15:
    *a3 = v6;
    return 0LL;
  }
  v6 = 0;
  if ( a1 < *((_QWORD *)&xmmword_18019C530 + 1)
    || a1 >= *((_QWORD *)&xmmword_18019C530 + 1) + (unsigned __int64)(unsigned int)qword_18019C540 )
  {
    RtlpxLookupFunctionTable(a1, (__int64 *)&v11);
  }
  else
  {
    v11 = xmmword_18019C530;
  }
  if ( *((_QWORD *)&v11 + 1) )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(*((unsigned __int64 *)&v11 + 1));
    if ( !Config
      || *Config < 0xC0u
      || (Config[36] & 0x10000) == 0
      || (Key = a1 - DWORD2(v11), (v8 = *((_QWORD *)Config + 23)) != 0)
      && bsearch_s(
           &Key,
           *((const void **)Config + 22),
           v8,
           (unsigned int)((Config[36] >> 28) + 4),
           RtlpTargetCompare,
           0LL) )
    {
LABEL_10:
      v6 = 1;
      goto LABEL_11;
    }
  }
  else if ( (int)RtlQueryProtectedPolicy(&unk_18015AC78) >= 0 && v10 )
  {
    goto LABEL_10;
  }
  if ( !a2 )
    RtlFailFast2(38LL, a1);
LABEL_11:
  if ( a3 )
    goto LABEL_15;
  return 0LL;
}

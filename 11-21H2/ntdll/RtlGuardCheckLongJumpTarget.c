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

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, char a2, char *a3)
{
  char v7; // bl
  _DWORD *Config; // rax
  rsize_t v9; // r8
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  int Key; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    v7 = 0;
    if ( a1 < *((_QWORD *)&xmmword_18018F510 + 1)
      || a1 >= *((_QWORD *)&xmmword_18018F510 + 1) + (unsigned __int64)(unsigned int)qword_18018F520 )
    {
      RtlpxLookupFunctionTable(a1, &v11);
    }
    else
    {
      v11 = xmmword_18018F510;
    }
    if ( *((_QWORD *)&v11 + 1) )
    {
      Config = LdrImageDirectoryEntryToLoadConfig(*((__int64 *)&v11 + 1));
      if ( !Config
        || *Config < 0xC0u
        || (Config[36] & 0x10000) == 0
        || (Key = a1 - DWORD2(v11), (v9 = *((_QWORD *)Config + 23)) != 0)
        && bsearch_s(
             &Key,
             *((const void **)Config + 22),
             v9,
             (unsigned int)((Config[36] >> 28) + 4),
             RtlpTargetCompare,
             0LL) )
      {
LABEL_12:
        v7 = 1;
        goto LABEL_13;
      }
    }
    else if ( (int)RtlQueryProtectedPolicy(&unk_18014E520) >= 0 && v10 )
    {
      goto LABEL_12;
    }
    if ( !a2 )
      RtlFailFast2(38LL, a1);
LABEL_13:
    if ( !a3 )
      return 0LL;
LABEL_14:
    *a3 = v7;
    return 0LL;
  }
  if ( a3 )
  {
    v7 = 1;
    goto LABEL_14;
  }
  return 0LL;
}

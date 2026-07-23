/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1402DEB90
 * Callers:
 *     sub_140779850 @ 0x140779850 (sub_140779850.c)
 * Callees:
 *     sub_1402DEC9C @ 0x1402DEC9C (sub_1402DEC9C.c)
 *     sub_1402DF210 @ 0x1402DF210 (sub_1402DF210.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall RtlEnumerateGenericTableLikeADirectory(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_MATCH_FUNCTION MatchFunction,
        PVOID MatchData,
        ULONG NextFlag,
        PVOID *RestartKey,
        PULONG DeleteCount,
        PVOID Buffer)
{
  bool v7; // zf
  PVOID *v9; // rsi
  PVOID *v11; // rbx
  PULONG v12; // r14
  PVOID *v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // eax

  v7 = Table->NumberGenericTableElements == 0;
  v9 = RestartKey;
  v11 = (PVOID *)*RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( v7 )
  {
    *v9 = 0LL;
    return 0LL;
  }
  v12 = DeleteCount;
  if ( *DeleteCount == Table->DeleteCount )
  {
    if ( v11 )
      goto LABEL_4;
  }
  else
  {
    RestartKey = 0LL;
  }
  v19 = sub_1402DF210(Table, Buffer, &RestartKey);
  if ( v19 != 1 )
  {
    if ( v19 != 3 )
    {
      v11 = RestartKey;
      goto LABEL_7;
    }
    v13 = RestartKey;
    goto LABEL_6;
  }
  v11 = RestartKey;
LABEL_4:
  if ( NextFlag )
  {
    v13 = v11;
LABEL_6:
    v11 = (PVOID *)sub_1402DEC9C(v13, MatchFunction, MatchData, *(_QWORD *)&NextFlag);
  }
LABEL_7:
  if ( v11 )
  {
    while ( 1 )
    {
      v15 = sub_14042A5E0(Table, v11 + 4);
      if ( v15 != -1073741198 )
        break;
      v11 = (PVOID *)sub_1402DEC9C(v11, v14, v16, v17);
      if ( !v11 )
        return 0LL;
    }
    *v9 = v11;
    *v12 = Table->DeleteCount;
    if ( !v15 )
      return v11 + 4;
  }
  return 0LL;
}

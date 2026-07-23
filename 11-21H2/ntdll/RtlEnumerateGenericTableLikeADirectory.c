/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1801030F0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x18005FE6C (FindNodeOrParent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RealSuccessor @ 0x1801030A8 (RealSuccessor.c)
 */

PVOID __cdecl RtlEnumerateGenericTableLikeADirectory(
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
  PVOID *v12; // rbx
  PULONG v14; // r14
  __int64 (__fastcall *v15)(PRTL_AVL_TABLE, PVOID *, PVOID); // r15
  int NodeOrParent; // eax
  PVOID *v17; // rcx
  int v18; // ecx

  v7 = Table->NumberGenericTableElements == 0;
  v9 = RestartKey;
  v12 = (PVOID *)*RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( v7 )
  {
    *v9 = 0LL;
    return 0LL;
  }
  v14 = DeleteCount;
  v15 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))MatchAll;
  if ( MatchFunction )
    v15 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))MatchFunction;
  if ( *DeleteCount == Table->DeleteCount )
  {
    if ( v12 )
      goto LABEL_14;
  }
  else
  {
    RestartKey = 0LL;
  }
  NodeOrParent = FindNodeOrParent((__int64)Table, (__int64)Buffer, &RestartKey);
  if ( NodeOrParent != 1 )
  {
    if ( NodeOrParent == 3 )
    {
      v17 = RestartKey;
LABEL_16:
      v12 = (PVOID *)RealSuccessor(v17);
      goto LABEL_17;
    }
    v12 = RestartKey;
    goto LABEL_17;
  }
  v12 = RestartKey;
LABEL_14:
  if ( NextFlag )
  {
    v17 = v12;
    goto LABEL_16;
  }
LABEL_17:
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    v18 = v15(Table, v12 + 4, MatchData);
    if ( v18 != -1073741198 )
      break;
    v12 = (PVOID *)RealSuccessor(v12);
    if ( !v12 )
      return 0LL;
  }
  *v9 = v12;
  *v14 = Table->DeleteCount;
  if ( v18 )
    return 0LL;
  return v12 + 4;
}

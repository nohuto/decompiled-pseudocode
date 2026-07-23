/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1801041F0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x18006AF5C (FindNodeOrParent_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RealSuccessor @ 0x1801041A4 (RealSuccessor.c)
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
  PVOID *v7; // r14
  void *v8; // rdi
  PVOID *v12; // rbx
  PULONG v14; // r15
  __int64 (__fastcall *v15)(PRTL_AVL_TABLE, PVOID *, PVOID); // r12
  int NodeOrParent_0; // eax
  PVOID *v17; // rcx
  int v18; // eax

  v7 = RestartKey;
  v8 = 0LL;
  v12 = (PVOID *)*RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *v7 = 0LL;
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
  NodeOrParent_0 = FindNodeOrParent_0((__int64)Table, (__int64)Buffer, &RestartKey);
  if ( NodeOrParent_0 != 1 )
  {
    if ( NodeOrParent_0 != 3 )
    {
      v12 = RestartKey;
      goto LABEL_17;
    }
    v17 = RestartKey;
    goto LABEL_16;
  }
  v12 = RestartKey;
LABEL_14:
  if ( !NextFlag )
    goto LABEL_17;
  v17 = v12;
LABEL_16:
  v12 = (PVOID *)RealSuccessor(v17);
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
  *v7 = v12;
  if ( !v18 )
    v8 = v12 + 4;
  *v14 = Table->DeleteCount;
  return v8;
}

/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x140371950
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1407FB710 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     RealSuccessor @ 0x140371A5C (RealSuccessor.c)
 *     FindNodeOrParent_0 @ 0x140371AA0 (FindNodeOrParent_0.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
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
  PVOID *v7; // r14
  void *v8; // rdi
  PVOID *v12; // rbx
  PULONG v13; // r15
  __int64 (__fastcall *v14)(PRTL_AVL_TABLE, PVOID *, PVOID); // r12
  PVOID *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int NodeOrParent_0; // eax

  v7 = RestartKey;
  v8 = 0LL;
  v12 = (PVOID *)*RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *v7 = 0LL;
    return 0LL;
  }
  v13 = DeleteCount;
  v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))PdcCreateWatchdogAroundClientCall;
  if ( MatchFunction )
    v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))MatchFunction;
  if ( *DeleteCount == Table->DeleteCount )
  {
    if ( v12 )
    {
LABEL_6:
      if ( !NextFlag )
        goto LABEL_9;
      v15 = v12;
      goto LABEL_8;
    }
  }
  else
  {
    RestartKey = 0LL;
  }
  NodeOrParent_0 = FindNodeOrParent_0(Table, Buffer, &RestartKey);
  if ( NodeOrParent_0 == 1 )
  {
    v12 = RestartKey;
    goto LABEL_6;
  }
  if ( NodeOrParent_0 == 3 )
  {
    v15 = RestartKey;
LABEL_8:
    v12 = (PVOID *)RealSuccessor(v15, MatchFunction, MatchData, *(_QWORD *)&NextFlag);
    goto LABEL_9;
  }
  v12 = RestartKey;
LABEL_9:
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    v16 = v14(Table, v12 + 4, MatchData);
    if ( v16 != -1073741198 )
      break;
    v12 = (PVOID *)RealSuccessor(v12, v17, v18, v19);
    if ( !v12 )
      return 0LL;
  }
  *v7 = v12;
  if ( !v16 )
    v8 = v12 + 4;
  *v13 = Table->DeleteCount;
  return v8;
}

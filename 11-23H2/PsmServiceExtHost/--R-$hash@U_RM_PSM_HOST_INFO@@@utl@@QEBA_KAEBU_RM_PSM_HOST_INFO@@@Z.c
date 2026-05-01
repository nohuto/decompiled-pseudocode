/*
 * XREFs of ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x18002ECEC
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E038 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??$_FindFirst@U_FindFirstFind@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@U_RM_PSM_HOST_INFO@@@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEBA?AU_FindFirstFind@01@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18004F378 (--$_FindFirst@U_FindFirstFind@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@U.c)
 *     ?_FindInsertPos@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AU_InsertPosResult@12@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18004F854 (-_FindInsertPos@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall utl::hash<_RM_PSM_HOST_INFO>::operator()(__int64 a1, unsigned __int64 a2)
{
  WCHAR *v2; // rsi
  WCHAR *v3; // rbx
  __int64 v4; // rdi
  WCHAR v5; // cx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  WCHAR v12; // [rsp+30h] [rbp+8h]

  v2 = (WCHAR *)(a2 + 464);
  v3 = (WCHAR *)a2;
  v4 = 314159LL;
  if ( a2 < a2 + 464 )
  {
    do
    {
      v5 = *v3++;
      v12 = RtlUpcaseUnicodeChar(v5);
      v4 = HIBYTE(v12) + 37 * ((unsigned __int8)v12 + 37 * v4);
    }
    while ( v3 < v2 );
  }
  v6 = 11LL;
  do
  {
    v7 = *(unsigned __int8 *)v2;
    v2 += 4;
    v8 = *((unsigned __int8 *)v2 - 3)
       + 37
       * (*((unsigned __int8 *)v2 - 4)
        + 37
        * (*((unsigned __int8 *)v2 - 5)
         + 37 * (*((unsigned __int8 *)v2 - 6) + 37 * (*((unsigned __int8 *)v2 - 7) + 37 * (v7 + 37 * v4)))));
    v9 = *((unsigned __int8 *)v2 - 2);
    v10 = *((unsigned __int8 *)v2 - 1);
    v4 = v10 + 37 * (v9 + 37 * v8);
    --v6;
  }
  while ( v6 );
  return v10 + 37 * (v9 + 37 * v8);
}

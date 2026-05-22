/*
 * XREFs of ?GetAndRemoveInitialCursorPositionForInputType@SystemCursorController2@@QEAA_NW4InputType@@PEAH1@Z @ 0x180110F10
 * Callers:
 *     ?OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1801144F0 (-OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x180050040 (--$_Try_emplace@AEBW4InputType@@$$V@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_co.c)
 *     ??$_Find_last@W4InputType@@@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@PEAX@std@@@1@AEBW4InputType@@_K@Z @ 0x180050170 (--$_Find_last@W4InputType@@@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_compare@W4.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBW4InputType@@@Z @ 0x180111C40 (-erase@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_compare@W4InputType@@U-$hash@W4.c)
 */

char __fastcall SystemCursorController2::GetAndRemoveInitialCursorPositionForInputType(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4)
{
  float *v4; // rbx
  unsigned __int64 appended; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  *a3 = 0;
  *a4 = 0;
  v4 = (float *)(a1 + 96);
  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v14, 4uLL);
  v9 = std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::_Find_last<enum InputType>(
         v4,
         v13,
         &v14,
         appended)[1];
  if ( !v9 )
    v9 = *((_QWORD *)v4 + 1);
  if ( v9 == *(_QWORD *)(a1 + 104) )
    return 0;
  v10 = std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::_Try_emplace<enum InputType const &,>(
          v4,
          (__int64)v13,
          (const unsigned __int8 *)&v14);
  v11 = *(_QWORD *)v10;
  *a3 = *(_DWORD *)(*(_QWORD *)v10 + 20LL);
  *a4 = *(_DWORD *)(v11 + 24);
  std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::erase(
    v4,
    &v14);
  return 1;
}

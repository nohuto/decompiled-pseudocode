/*
 * XREFs of ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x140063EF8
 * Callers:
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x1400645C4 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_tr.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x140066868 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
        __int64 a1,
        char *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // cl
  unsigned __int16 v6; // r9
  signed __int64 v7; // rdx
  bool v8; // cc
  unsigned __int16 v9; // r9

  v3 = a3[2];
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  v4 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    a2 = *(char **)a2;
  if ( v4 != v3 )
    return 1;
  v5 = 0;
  if ( v4 )
  {
    v6 = *(_WORD *)a2;
    if ( *(_WORD *)a2 >= *(_WORD *)a3 )
    {
      v7 = a2 - (char *)a3;
      v8 = v6 <= *(_WORD *)a3;
      do
      {
        if ( !v8 )
          break;
        if ( v4 == 1 )
          return v5;
        a3 = (_QWORD *)((char *)a3 + 2);
        --v4;
        v9 = *(_WORD *)((char *)a3 + v7);
        v8 = v9 <= *(_WORD *)a3;
      }
      while ( v9 >= *(_WORD *)a3 );
    }
    return 1;
  }
  return v5;
}

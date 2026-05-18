/*
 * XREFs of ?GetKeys@JsonConfigurationManager@Utils@Spectre@@UEBA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800DE810
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAXXZ @ 0x18001F6D0 (-_Tidy@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-.c)
 *     ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800DD700 (--$_Insert_range@V-$move_iterator@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::GetKeys(_QWORD **a1, __int64 a2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v9[4]; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = (__int64 *)*a1[18];
  while ( !*((_BYTE *)v4 + 25) )
  {
    ((void (__fastcall *)(_QWORD **, __int64 *, __int64 *))(*a1)[25])(a1, v9, v4 + 4);
    std::vector<std::wstring>::_Insert_range<std::move_iterator<std::wstring *>>(
      (char **)a2,
      *(char **)(a2 + 8),
      v9[0],
      v9[1]);
    std::vector<std::wstring>::_Tidy((__int64)v9);
    v5 = (__int64 **)v4[2];
    if ( *((_BYTE *)v5 + 25) )
    {
      for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v4 = i;
      v4 = i;
    }
    else
    {
      v4 = (__int64 *)v4[2];
      for ( j = *v5; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v4 = j;
    }
  }
  return a2;
}

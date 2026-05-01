/*
 * XREFs of ??$_Uninitialized_move@PEAUservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@QEAU123@0PEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18017AE50
 * Callers:
 *     ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x18009D3E4 (--$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@Uservice_des.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$10 @ 0x18021A068 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_18021A068.c)
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$12 @ 0x18021A115 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_18021A115.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x18017C508 (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 */

_OWORD *__fastcall std::_Uninitialized_move<winrt::immersive_shell_component::service_description *>(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  _OWORD *v3; // rbx
  __int64 v5; // rax
  char *v6; // r8
  __int64 v7; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 16;
    v6 = (char *)a3 - a1;
    do
    {
      *v3 = *(_OWORD *)(v5 - 16);
      v7 = *(_QWORD *)v5;
      v3 += 2;
      *(_QWORD *)v5 = 0LL;
      *(_QWORD *)&v6[v5] = v7;
      *(_DWORD *)&v6[v5 + 8] = *(_DWORD *)(v5 + 8);
      v5 += 32LL;
    }
    while ( v5 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v3, v3);
  return v3;
}

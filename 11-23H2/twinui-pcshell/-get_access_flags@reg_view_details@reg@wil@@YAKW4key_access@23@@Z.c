/*
 * XREFs of ?get_access_flags@reg_view_details@reg@wil@@YAKW4key_access@23@@Z @ 0x1801F0F00
 * Callers:
 *     ?open_unique_key@reg@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@PEAUHKEY__@@PEBGW4key_access@12@@Z @ 0x1801F1030 (-open_unique_key@reg@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P.c)
 *     ?create_key@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBAXPEBGPEAPEAUHKEY__@@W4key_access@34@@Z @ 0x1802496C8 (-create_key@-$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBAXPEBGPEAPEAUH.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::reg::reg_view_details::get_access_flags(int a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
    return 131097LL;
  if ( a1 != 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x69,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
      a4);
  return 983103LL;
}

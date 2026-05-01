/*
 * XREFs of ??B?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@1@XZ @ 0x1803D4BA8
 * Callers:
 *     ??$_Find_unchecked1@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@Uhstring@winrt@@@std@@YA?AV?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@0@V10@V10@AEBUhstring@winrt@@U?$integral_constant@_N$0A@@0@@Z @ 0x1801E6E24 (--$_Find_unchecked1@V-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@V-$basi.c)
 *     ??R_lambda_e618d2e1a4350f330cc93ddf3d982686_@@QEBA@XZ @ 0x180250390 (--R_lambda_e618d2e1a4350f330cc93ddf3d982686_@@QEBA@XZ.c)
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x180272C08 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 *     ?TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@I@Z @ 0x18072840C (-TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::operator std::basic_string_view<unsigned short>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rax

  v2 = a1;
  if ( a1[3] >= 8uLL )
    v2 = (_QWORD *)*a1;
  *a2 = v2;
  a2[1] = a1[2];
  return a2;
}

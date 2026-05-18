/*
 * XREFs of ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___::_ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___ @ 0x1800DE030
 * Callers:
 *     ?TriggerHandlers@JsonConfigurationManager@Utils@Spectre@@AEAAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800DEF80 (-TriggerHandlers@JsonConfigurationManager@Utils@Spectre@@AEAAXAEBV-$basic_string@_WU-$char_trait.c)
 *     _Spectre::Utils::JsonConfigurationManager::TriggerHandlers_::_1_::dtor$0 @ 0x1800F2001 (_Spectre--Utils--JsonConfigurationManager--TriggerHandlers_--_1_--dtor$0.c)
 * Callees:
 *     ?store@?$_Atomic_storage@J$03@std@@QEAAXJ@Z @ 0x180038E68 (-store@-$_Atomic_storage@J$03@std@@QEAAXJ@Z.c)
 */

volatile __int32 *__fastcall ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___::_ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___(
        _QWORD **a1)
{
  _QWORD *v1; // rcx
  volatile __int32 *result; // rax

  v1 = *a1;
  if ( v1 )
    return std::_Atomic_storage<long,4>::store(*v1 + 256LL, 0);
  return result;
}

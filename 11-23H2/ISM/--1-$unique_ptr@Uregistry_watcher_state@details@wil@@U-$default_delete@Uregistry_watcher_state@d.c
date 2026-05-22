/*
 * XREFs of ??1?$unique_ptr@Uregistry_watcher_state@details@wil@@U?$default_delete@Uregistry_watcher_state@details@wil@@@wistd@@@wistd@@QEAA@XZ @ 0x1801DC5E0
 * Callers:
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1801E29E0 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 * Callees:
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1801DD9FC (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

wil::details::registry_watcher_state *__fastcall wistd::unique_ptr<wil::details::registry_watcher_state,wistd::default_delete<wil::details::registry_watcher_state>>::~unique_ptr<wil::details::registry_watcher_state,wistd::default_delete<wil::details::registry_watcher_state>>(
        wil::details::registry_watcher_state **a1,
        unsigned int a2)
{
  wil::details::registry_watcher_state *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (wil::details::registry_watcher_state *)wil::details::registry_watcher_state::`scalar deleting destructor'(
                                                     result,
                                                     a2);
  return result;
}

/*
 * XREFs of ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x1800442B8
 * Callers:
 *     ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x180043E40 (-InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ.c)
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x1801198F0 (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}

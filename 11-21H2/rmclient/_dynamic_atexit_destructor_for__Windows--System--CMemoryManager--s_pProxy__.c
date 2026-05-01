/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_pProxy__ @ 0x180017070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__Windows::System::CMemoryManager::s_pProxy__()
{
  ModernResourceManagerProxy *v0; // rcx
  __int64 result; // rax

  v0 = Windows::System::CMemoryManager::s_pProxy;
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    Windows::System::CMemoryManager::s_pProxy = 0LL;
    return (*(__int64 (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v0 + 16LL))(v0);
  }
  return result;
}

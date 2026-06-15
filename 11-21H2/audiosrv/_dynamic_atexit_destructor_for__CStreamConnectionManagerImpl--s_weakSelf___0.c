/*
 * XREFs of _dynamic_atexit_destructor_for__CStreamConnectionManagerImpl::s_weakSelf___0 @ 0x180072AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005DFD0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__CStreamConnectionManagerImpl::s_weakSelf___0()
{
  if ( *((_QWORD *)&CStreamConnectionManagerImpl::s_weakSelf + 1) )
    std::_Ref_count_base::_Decwref(*((std::_Ref_count_base **)&CStreamConnectionManagerImpl::s_weakSelf + 1));
}

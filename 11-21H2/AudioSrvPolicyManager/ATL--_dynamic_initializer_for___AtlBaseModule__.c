/*
 * XREFs of ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800410B8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int ATL::_dynamic_initializer_for___AtlBaseModule__()
{
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_18005B0F8);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlBaseModule__);
}

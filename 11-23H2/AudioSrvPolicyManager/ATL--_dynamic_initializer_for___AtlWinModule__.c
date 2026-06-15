/*
 * XREFs of ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180014750 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int ATL::_dynamic_initializer_for___AtlWinModule__()
{
  int v0; // eax
  int v1; // ecx

  v0 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_180060CB8);
  v1 = ATL::_AtlWinModule;
  if ( v0 < 0 )
    v1 = 0;
  ATL::_AtlWinModule = v1;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlWinModule__);
}

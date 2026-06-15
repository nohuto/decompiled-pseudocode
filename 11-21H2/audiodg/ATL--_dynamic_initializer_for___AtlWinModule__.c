/*
 * XREFs of ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001420
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x14002DCDC (--0CAtlWinModule@ATL@@QEAA@XZ.c)
 */

int __fastcall ATL::_dynamic_initializer_for___AtlWinModule__(ATL::CAtlWinModule *a1)
{
  ATL::CAtlWinModule::CAtlWinModule(a1);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlWinModule__);
}

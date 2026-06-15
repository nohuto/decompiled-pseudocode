/*
 * XREFs of ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001C10
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAtlComModule@ATL@@QEAA@XZ @ 0x180042A18 (--0CAtlComModule@ATL@@QEAA@XZ.c)
 */

int __fastcall ATL::_dynamic_initializer_for___AtlComModule__(ATL::CAtlComModule *a1)
{
  ATL::CAtlComModule::CAtlComModule(a1);
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for___AtlComModule__);
}

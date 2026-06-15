/*
 * XREFs of ?SetSpatialStreamGrantCount@CProcessSubmix@@UEAAJ_KI_J@Z @ 0x1400633D0
 * Callers:
 *     ?SetSpatialStreamGrantCount@CProcessSubmix@@WBA@EAAJ_KI_J@Z @ 0x140033BB0 (-SetSpatialStreamGrantCount@CProcessSubmix@@WBA@EAAJ_KI_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::SetSpatialStreamGrantCount(
        CProcessSubmix *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  return CSubmixImpl::SetSpatialStreamGrantCount((CProcessSubmix *)((char *)this + 16), a2, a3, a4);
}

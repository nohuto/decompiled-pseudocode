/*
 * XREFs of ?SetSpatialStreamGrantCount@CStreamGroup@@UEAAJ_KI_J@Z @ 0x1400523E0
 * Callers:
 *     ?SetSpatialStreamGrantCount@CStreamGroup@@WBI@EAAJ_KI_J@Z @ 0x14002F9B0 (-SetSpatialStreamGrantCount@CStreamGroup@@WBI@EAAJ_KI_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::SetSpatialStreamGrantCount(
        CStreamGroup *this,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  return CSubmixImpl::SetSpatialStreamGrantCount((CStreamGroup *)((char *)this + 24), a2, a3, a4);
}

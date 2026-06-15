/*
 * XREFs of ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x180065F90
 * Callers:
 *     ?Release@AudioDeviceMgr@@W7EAAKXZ @ 0x180077E20 (-Release@AudioDeviceMgr@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceMgr@@WBA@EAAKXZ @ 0x180077E40 (-Release@AudioDeviceMgr@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::Release(AudioDeviceMgr *this)
{
  return CUnknown::Release((AudioDeviceMgr *)((char *)this + 16));
}

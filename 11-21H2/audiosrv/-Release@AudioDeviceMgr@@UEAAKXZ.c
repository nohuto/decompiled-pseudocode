/*
 * XREFs of ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x18005C210
 * Callers:
 *     ?Release@AudioDeviceMgr@@W7EAAKXZ @ 0x18006C420 (-Release@AudioDeviceMgr@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceMgr@@WBA@EAAKXZ @ 0x18006C440 (-Release@AudioDeviceMgr@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall AudioDeviceMgr::Release(AudioDeviceMgr *this)
{
  return CUnknown::Release((AudioDeviceMgr *)((char *)this + 16));
}

/*
 * XREFs of ?AddRef@AudioDeviceMgr@@UEAAKXZ @ 0x18004F870
 * Callers:
 *     ?AddRef@AudioDeviceMgr@@W7EAAKXZ @ 0x180077D70 (-AddRef@AudioDeviceMgr@@W7EAAKXZ.c)
 *     ?AddRef@AudioDeviceMgr@@WBA@EAAKXZ @ 0x180077D90 (-AddRef@AudioDeviceMgr@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::AddRef(AudioDeviceMgr *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}

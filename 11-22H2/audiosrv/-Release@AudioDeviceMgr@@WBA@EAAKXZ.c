/*
 * XREFs of ?Release@AudioDeviceMgr@@WBA@EAAKXZ @ 0x180077E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::Release(__int64 a1)
{
  return AudioDeviceMgr::Release((AudioDeviceMgr *)(a1 - 16));
}

/*
 * XREFs of ?GetMixSplitConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14004A294
 * Callers:
 *     ?AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400085F0 (-AddPipeToMixSplitConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     <none>
 */

const struct CConnectionInstance *__fastcall CPipeInstance::GetMixSplitConnection(CPipeInstance *this)
{
  return (const struct CConnectionInstance *)CPipeInstance::GetMixSplitConnection_Internal((__int64)this, 0);
}

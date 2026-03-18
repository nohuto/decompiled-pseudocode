/*
 * XREFs of UsbhPdoArmedForWake @ 0x1C003CA78
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000EB10 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 */

bool __fastcall UsbhPdoArmedForWake(__int64 a1)
{
  return PdoExt(a1)[588] >= 0;
}

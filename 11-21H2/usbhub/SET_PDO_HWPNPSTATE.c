/*
 * XREFs of SET_PDO_HWPNPSTATE @ 0x1C0035D18
 * Callers:
 *     UsbhQueryBusRelations @ 0x1C000B7A0 (UsbhQueryBusRelations.c)
 *     UsbhBusConnectPdo @ 0x1C001DE04 (UsbhBusConnectPdo.c)
 *     UsbhDeregisterPdo @ 0x1C0036B38 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003975C (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0039DEC (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C003A10C (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003A7CC (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003AA28 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhCreatePdo @ 0x1C0052C50 (UsbhCreatePdo.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0053618 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C00537BC (UsbhDeletePdo.c)
 * Callees:
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 */

_DWORD *__fastcall SET_PDO_HWPNPSTATE(__int64 a1, int a2, int a3)
{
  _DWORD *result; // rax
  __int64 v6; // r9

  result = PdoExt(a1);
  v6 = ((unsigned __int8)result[1] + 1) & 7;
  result[1] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)result + v6 + 16) = a3;
  *(_DWORD *)((char *)result + v6 + 20) = result[281];
  *(_DWORD *)((char *)result + v6 + 24) = a2;
  result[281] = a2;
  return result;
}

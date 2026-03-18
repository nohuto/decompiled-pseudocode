/*
 * XREFs of UsbhPindicatorWorker @ 0x1C002EA80
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C000F370 (UsbhGetPortData.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C002F004 (Usbh_PIND_Timeout_Action.c)
 */

__int64 __fastcall UsbhPindicatorWorker(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  FdoExt(a1);
  result = UsbhGetPortData(a1, a2);
  if ( result )
    return Usbh_PIND_Timeout_Action(a1, result, a3);
  return result;
}

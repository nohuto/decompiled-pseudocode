/*
 * XREFs of USBParseFindDescriptor @ 0x1C003475C
 * Callers:
 *     USBParseGetUnit @ 0x1C002A12C (USBParseGetUnit.c)
 *     USBParseConvertControlUnits @ 0x1C0033A0C (USBParseConvertControlUnits.c)
 *     USBParseConvertMIDIJacksAndElements @ 0x1C0033EE0 (USBParseConvertMIDIJacksAndElements.c)
 *     USBParseGetInterfaceIdforPin @ 0x1C0034C1C (USBParseGetInterfaceIdforPin.c)
 * Callees:
 *     <none>
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseFindDescriptor(__int64 a1, void *a2, ULONG a3, void *a4)
{
  PUSB_COMMON_DESCRIPTOR v4; // r11
  PUSB_COMMON_DESCRIPTOR v5; // rax

  v4 = 0LL;
  if ( (unsigned __int64)a2 + a3 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
  {
    v5 = USBD_ParseDescriptors(a2, a3, a4, 36);
    v4 = v5;
    if ( v5 )
    {
      if ( v5->bLength < 4u )
        return 0LL;
    }
  }
  return v4;
}

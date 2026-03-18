/*
 * XREFs of ?FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@EE@Z @ 0x1C005BD40
 * Callers:
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C006078C (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 * Callees:
 *     ?FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z @ 0x1C005BD14 (-FxUsbFindDescriptorType@@YAPEAU_USB_COMMON_DESCRIPTOR@@PEAX_K0J@Z.c)
 */

_USB_COMMON_DESCRIPTOR *__fastcall FxUsbParseConfigurationDescriptor(
        _USB_CONFIGURATION_DESCRIPTOR *ConfigDesc,
        unsigned __int8 InterfaceNumber,
        unsigned __int8 AlternateSetting)
{
  unsigned __int64 wTotalLength; // rdx
  _USB_CONFIGURATION_DESCRIPTOR *v6; // rbx
  _USB_COMMON_DESCRIPTOR *DescriptorType; // rax
  _USB_COMMON_DESCRIPTOR *v8; // r11
  _USB_COMMON_DESCRIPTOR *v9; // rcx

  wTotalLength = ConfigDesc->wTotalLength;
  v6 = ConfigDesc;
  do
  {
    DescriptorType = FxUsbFindDescriptorType((char *)v6, wTotalLength, &ConfigDesc->bLength, 4);
    if ( !DescriptorType )
      break;
    v9 = DescriptorType;
    v8 = 0LL;
    if ( DescriptorType[1].bLength != InterfaceNumber )
      v9 = 0LL;
    if ( DescriptorType[1].bDescriptorType == AlternateSetting )
      v8 = v9;
    ConfigDesc = (_USB_CONFIGURATION_DESCRIPTOR *)(&DescriptorType->bLength + DescriptorType->bLength);
  }
  while ( !v8 );
  return v8;
}

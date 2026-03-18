/*
 * XREFs of ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C005A468
 * Callers:
 *     imp_WdfUsbTargetPipeGetInformation @ 0x1C0056D40 (imp_WdfUsbTargetPipeGetInformation.c)
 *     ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C005EF18 (-GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     ?GetMaxPacketSize@FxUsbPipe@@QEAAKXZ @ 0x1C000ED60 (-GetMaxPacketSize@FxUsbPipe@@QEAAKXZ.c)
 *     ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x1C005EF70 (-GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ.c)
 */

void __fastcall FxUsbPipe::GetInformation(FxUsbPipe *this, _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  int MaxPacketSize; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  _WDF_USB_PIPE_TYPE v7; // eax

  MaxPacketSize = FxUsbPipe::GetMaxPacketSize(this);
  *(_DWORD *)(v5 + 4) = MaxPacketSize;
  *(_BYTE *)(v5 + 8) = *(_BYTE *)(v4 + 386);
  *(_BYTE *)(v5 + 9) = *(_BYTE *)(v4 + 387);
  v6 = *(int *)(v4 + 388);
  if ( v6 >= 4 )
    v7 = WdfUsbPipeTypeInvalid;
  else
    v7 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[v6];
  PipeInformation->PipeType = v7;
  PipeInformation->MaximumTransferSize = *(_DWORD *)(v4 + 400);
  PipeInformation->SettingIndex = FxUsbInterface::GetConfiguredSettingIndex(*(FxUsbInterface **)(v4 + 368));
}

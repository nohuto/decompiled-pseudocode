/*
 * XREFs of USBHwGetDescriptor @ 0x1C0032134
 * Callers:
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C0031F60 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwGetAudioDeviceDescriptor @ 0x1C0032094 (USBHwGetAudioDeviceDescriptor.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C0033770 (USBHwSyncGetStringDescriptor.c)
 * Callees:
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0038A60 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwGetDescriptor(__int64 a1, UCHAR a2, UCHAR a3, USHORT a4, ULONG *a5, void *a6)
{
  int v10; // edi
  struct _URB *Pool2; // rax
  struct _URB *v12; // rbx

  v10 = -1073741670;
  Pool2 = (struct _URB *)ExAllocatePool2(64LL, 136LL, 1096972357LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    Pool2->UrbSelectConfiguration.Interface.InterfaceHandle = 0LL;
    Pool2->UrbControlTransfer.UrbLink = 0LL;
    *(_DWORD *)&Pool2->UrbHeader.Length = 721032;
    Pool2->UrbControlTransfer.SetupPacket[3] = a2;
    Pool2->UrbControlTransfer.SetupPacket[2] = a3;
    Pool2->UrbControlTransfer.TransferBufferLength = *a5;
    Pool2->UrbSelectInterface.Interface.InterfaceHandle = a6;
    Pool2->UrbControlDescriptorRequest.LanguageId = a4;
    v10 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), Pool2, 0LL);
    if ( v10 >= 0 )
      *a5 = v12->UrbControlTransfer.TransferBufferLength;
    ExFreePool(v12);
  }
  return (unsigned int)v10;
}

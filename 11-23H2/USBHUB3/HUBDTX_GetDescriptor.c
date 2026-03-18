/*
 * XREFs of HUBDTX_GetDescriptor @ 0x1C002A5B8
 * Callers:
 *     HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice @ 0x1C00213F0 (HUBDSM_SendingGetDeviceDescriptorRequestForExemptSecureBioDevice.c)
 *     HUBDSM_GettingLanguageIdStringDescriptor @ 0x1C00215A0 (HUBDSM_GettingLanguageIdStringDescriptor.c)
 *     HUBDSM_GettingMSOSDescriptor @ 0x1C0021A10 (HUBDSM_GettingMSOSDescriptor.c)
 *     HUBDSM_GettingAlternateModeStringDescriptor @ 0x1C00226B0 (HUBDSM_GettingAlternateModeStringDescriptor.c)
 *     HUBDSM_GettingBillboardStringDescriptor @ 0x1C0022770 (HUBDSM_GettingBillboardStringDescriptor.c)
 *     HUBDSM_GettingDeviceQualifierDescriptor @ 0x1C0022FF0 (HUBDSM_GettingDeviceQualifierDescriptor.c)
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C002A9C4 (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x1C002AA84 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C002AB88 (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x1C002AC18 (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C002AD8C (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C002B554 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x1C002B658 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x1C002B734 (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 * Callees:
 *     HUBMISC_ControlTransfer @ 0x1C0032684 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_GetDescriptor(__int64 a1, __int64 a2, int a3, char a4, char a5, __int16 a6)
{
  char v6; // al

  v6 = *(_BYTE *)(a1 + 400) & 0x1C;
  *(_BYTE *)(a1 + 401) = 6;
  *(_BYTE *)(a1 + 403) = a4;
  *(_BYTE *)(a1 + 400) = v6 | 0x80;
  *(_BYTE *)(a1 + 402) = a5;
  *(_WORD *)(a1 + 404) = a6;
  *(_WORD *)(a1 + 406) = a3;
  return HUBMISC_ControlTransfer(
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 24),
           a1,
           (int)a1 + 248,
           (__int64)HUBDTX_ControlTransferComplete,
           a2,
           a3,
           1,
           *(_BYTE *)(a1 + 1512));
}

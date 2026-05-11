/*
 * XREFs of USBDeviceStop @ 0x1C00332F0
 * Callers:
 *     USBDeviceSurpriseRemove @ 0x1C00333D0 (USBDeviceSurpriseRemove.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     USBHwStopAllMIDIPipes @ 0x1C0035A30 (USBHwStopAllMIDIPipes.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0035AA4 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBDeviceStop(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ebx
  __int64 v4; // rbp
  struct _URB *Pool2; // rax
  struct _URB *v6; // rdi
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 72);
  if ( *(_QWORD *)(v4 + 192) == v4 + 192 || (v3 = USBHwStopAllMIDIPipes(), v3 >= 0) )
  {
    if ( !*(_BYTE *)(v1 + 67) )
    {
      v3 = -1073741670;
      Pool2 = (struct _URB *)ExAllocatePool2(64LL, 88LL, 1096972357LL);
      v6 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)&Pool2->UrbHeader.Length = 88;
        Pool2->UrbSelectInterface.ConfigurationHandle = 0LL;
        v3 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), Pool2, 0LL);
        ExFreePool(v6);
      }
    }
  }
  v7 = *(_QWORD *)(v4 + 56);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(v7 + 24))(*(_QWORD *)(v7 + 8));
  return (unsigned int)v3;
}

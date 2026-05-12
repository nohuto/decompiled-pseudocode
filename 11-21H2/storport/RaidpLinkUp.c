/*
 * XREFs of RaidpLinkUp @ 0x1C0042180
 * Callers:
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C004110C (McTemplateK0pq_EtwWriteTransfer.c)
 *     StorPortResume @ 0x1C0043E80 (StorPortResume.c)
 */

char __fastcall RaidpLinkUp(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // di
  int v6; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 56);
    McTemplateK0pq_EtwWriteTransfer(a1, &EventLinkUp, a3, *(_QWORD *)(a1 + 576) + 16LL, v6);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 1948), 1);
  v4 = StorPortResume(*(_QWORD *)(a1 + 576) + 16LL);
  if ( v4 )
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 32), BusRelations);
  return v4;
}

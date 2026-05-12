/*
 * XREFs of sub_1C0073864 @ 0x1C0073864
 * Callers:
 *     sub_1C0073170 @ 0x1C0073170 (sub_1C0073170.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

NTSTATUS __fastcall sub_1C0073864(__int64 a1, char a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  PIRP v7; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( KeGetCurrentIrql() )
    return -1073741496;
  if ( !a3 )
    return -1073741811;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  memset_0(a3, 0, 0x22CuLL);
  *a3 = 28;
  *(_QWORD *)(a3 + 1) = 0x4B53494449534353LL;
  a3[6] = 528;
  a3[4] = 1770763;
  a3[7] = 33;
  *((_BYTE *)a3 + 32) = a2;
  *(_DWORD *)((char *)a3 + 33) = -1035010047;
  *((_BYTE *)a3 + 38) = -80;
  *((_BYTE *)a3 + 40) = *(_BYTE *)(a1 + 97);
  v7 = IoBuildDeviceIoControlRequest(
         0x4D008u,
         *(PDEVICE_OBJECT *)(a1 + 8),
         a3,
         0x3Cu,
         a3,
         0x22Cu,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v7 )
    return -1073741670;
  v7->IoStatus.Status = -1073741637;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 )
  {
    if ( IoStatusBlock.Information >= 0x2C && *a3 == 28 )
    {
      if ( a3[6] < 0x10u )
        return -1073741637;
    }
    else
    {
      return -1073741637;
    }
  }
  return result;
}

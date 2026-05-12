/*
 * XREFs of sub_1C00219F8 @ 0x1C00219F8
 * Callers:
 *     sub_1C00216E4 @ 0x1C00216E4 (sub_1C00216E4.c)
 *     sub_1C00729D8 @ 0x1C00729D8 (sub_1C00729D8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1C00219F8(__int64 a1, int a2, unsigned int a3, _DWORD *a4, ULONG InputBufferLength)
{
  PIRP v7; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  if ( InputBufferLength < (unsigned __int64)a3 + 48 )
    return -1073741789;
  a4[1] = 0;
  *a4 = 50;
  a4[5] = 0;
  a4[4] = a2;
  a4[7] = a3;
  a4[2] = 3;
  a4[3] = 2;
  a4[6] = 40;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v7 = IoBuildDeviceIoControlRequest(
         0x2D1400u,
         *(PDEVICE_OBJECT *)(a1 + 8),
         a4,
         InputBufferLength,
         a4,
         InputBufferLength,
         0,
         &Object,
         &IoStatusBlock);
  if ( !v7 )
    return -1073741670;
  v7->IoStatus.Status = -1073741637;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 && (*a4 != 48 || a4[1] != 48 || a4[6] < 0x28u) )
    return -1073741637;
  return result;
}

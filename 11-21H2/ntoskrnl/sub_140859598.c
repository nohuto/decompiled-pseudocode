/*
 * XREFs of sub_140859598 @ 0x140859598
 * Callers:
 *     sub_1406CF970 @ 0x1406CF970 (sub_1406CF970.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 * Callees:
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 */

__int64 __fastcall sub_140859598(_QWORD *a1)
{
  NTSTATUS v2; // ebx
  PDEVICE_OBJECT v3; // rdx
  struct _DEVICE_OBJECT *v4; // rcx
  PDEVICE_OBJECT v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = IoCreateDevice(qword_140C46250, 4u, 0LL, 4u, 0x80u, 0, &v6);
  if ( v2 < 0 )
  {
    v4 = v6;
  }
  else
  {
    v3 = v6;
    *a1 = v6;
    *(_DWORD *)v3->DeviceExtension = 0;
    v4 = 0LL;
  }
  if ( v4 )
    IoDeleteDevice(v4);
  return (unsigned int)v2;
}

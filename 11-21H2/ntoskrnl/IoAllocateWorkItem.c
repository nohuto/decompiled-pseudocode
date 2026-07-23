/*
 * XREFs of IoAllocateWorkItem @ 0x1402DE6E0
 * Callers:
 *     sub_1402DE684 @ 0x1402DE684 (sub_1402DE684.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

PIO_WORKITEM __stdcall IoAllocateWorkItem(PDEVICE_OBJECT DeviceObject)
{
  PIO_WORKITEM result; // rax

  result = (PIO_WORKITEM)ExAllocatePool2(64LL, 88LL, 538996553LL);
  if ( result )
  {
    *((_QWORD *)result + 7) = 0LL;
    *((_QWORD *)result + 5) = DeviceObject;
    *((_DWORD *)result + 16) = 1;
    *(_QWORD *)result = 0LL;
    *((_QWORD *)result + 2) = sub_1402F8870;
    *((_QWORD *)result + 3) = result;
  }
  return result;
}

/*
 * XREFs of sub_140948150 @ 0x140948150
 * Callers:
 *     sub_140948260 @ 0x140948260 (sub_140948260.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_140948150(PDEVICE_OBJECT DeviceObject, _BYTE *a2)
{
  NTSTATUS result; // eax
  _WORD *Pool2; // rdi
  NTSTATUS DeviceProperty; // ebx
  const wchar_t *v7; // rbx
  ULONG BufferLength; // [rsp+48h] [rbp+10h] BYREF

  BufferLength = 0;
  *a2 = 0;
  result = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, 0, 0LL, &BufferLength);
  if ( result == -1073741789 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, BufferLength, 538996816LL);
    if ( Pool2 )
    {
      DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength, Pool2, &BufferLength);
      if ( DeviceProperty < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return DeviceProperty;
      }
      else
      {
        v7 = Pool2;
        if ( *Pool2 )
        {
          while ( wcsicmp(v7, L"ACPI\\PNP0A03") && wcsicmp(v7, L"ACPI\\PNP0A08") )
          {
            while ( *v7 )
              ++v7;
            if ( !*++v7 )
              goto LABEL_9;
          }
          *a2 = 1;
        }
LABEL_9:
        ExFreePoolWithTag(Pool2, 0);
        return 0;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}

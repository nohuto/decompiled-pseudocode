/*
 * XREFs of ?PmConstructDeviceLocationVhd@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0026718
 * Callers:
 *     ?PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C001F3AC (-PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

__int64 __fastcall PmConstructDeviceLocationVhd(struct _DEVICE_EXTENSION *a1)
{
  ULONG v1; // ebp
  __int64 i; // rdx
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  WCHAR *Pool2; // rax
  WCHAR *v7; // rdi

  v1 = 64;
  for ( i = 64LL; ; i = v1 )
  {
    Pool2 = (WCHAR *)ExAllocatePool2(66LL, i, 1112108368LL);
    v7 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v4 = PmSendDeviceControl(*((PDEVICE_OBJECT *)a1 + 2), 0x2D5928u, 0LL, 0, Pool2, v1, 0);
    v5 = v4;
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)a1 + 28, v7);
      return v5;
    }
    if ( v4 != -1073741789 )
      break;
    v1 += 64;
    ExFreePoolWithTag(v7, 0);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v5;
}

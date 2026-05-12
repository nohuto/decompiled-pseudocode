/*
 * XREFs of PmEtwControlStart @ 0x1C001E5EC
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C000EFC4 (McTemplateK0qq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall PmEtwControlStart(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  NTSTATUS result; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v8 = 0LL;
  result = IoGetActivityIdIrp(a2, &v8);
  if ( result >= 0 && (Microsoft_Windows_PartitionEnableBits & 1) != 0 )
  {
    LODWORD(v7) = *(_DWORD *)(v2 + 24);
    return McTemplateK0qq_EtwWriteTransfer(v6, v5, &v8, *(_DWORD *)(a1 + 168), v7);
  }
  return result;
}

/*
 * XREFs of PmEtwControlComplete @ 0x1C001E574
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C000F038 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall PmEtwControlComplete(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  NTSTATUS result; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  GUID v9; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v9 = 0LL;
  result = IoGetActivityIdIrp(a2, &v9);
  if ( result >= 0 && (Microsoft_Windows_PartitionEnableBits & 1) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(v8, v7, &v9, *(_DWORD *)(a1 + 168), *(_DWORD *)(v3 + 24), a3);
  return result;
}

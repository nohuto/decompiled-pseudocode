/*
 * XREFs of PiSwDeviceInterfaceSetState @ 0x14076341C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14076308C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x140860758 (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     McTemplateK0zzzt_EtwWriteTransfer @ 0x140563F5C (McTemplateK0zzzt_EtwWriteTransfer.c)
 *     IoSetDeviceInterfaceState @ 0x140769100 (IoSetDeviceInterfaceState.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140788E8C (_CmSetDeviceInterfacePathFormat.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceInterfaceSetState(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  NTSTATUS PWSTR; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  DestinationString = 0LL;
  v4 = *(_QWORD *)(a1 + 120);
  PWSTR = 0;
  if ( !v4 || (v8 = *(_QWORD *)(v4 + 64)) == 0 || (*(_DWORD *)(v8 + 8) & 1) == 0 || *(_BYTE *)(a2 + 36) == a3 )
  {
LABEL_10:
    *(_BYTE *)(a2 + 36) = a3;
    return (unsigned int)PWSTR;
  }
  PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16));
  if ( PWSTR >= 0 )
  {
    LOBYTE(v10) = 1;
    PWSTR = CmSetDeviceInterfacePathFormat(v9, 0LL, v10);
    if ( PWSTR >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      PWSTR = IoSetDeviceInterfaceState(&DestinationString, a3);
      if ( PWSTR >= 0 )
      {
        if ( (byte_140C0DD4C & 2) != 0 )
          McTemplateK0zzzt_EtwWriteTransfer(
            v12,
            v11,
            v13,
            *(const wchar_t **)(a1 + 8),
            *(const wchar_t **)(a1 + 16),
            0LL,
            a3);
        goto LABEL_10;
      }
    }
  }
  return (unsigned int)PWSTR;
}

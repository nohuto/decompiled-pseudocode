/*
 * XREFs of PiSwDeviceInterfacesUpdateState @ 0x14081A3E0
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x140818DA0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessRemove @ 0x1409678D0 (PiSwProcessRemove.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     McTemplateK0zzzt_EtwWriteTransfer @ 0x140564720 (McTemplateK0zzzt_EtwWriteTransfer.c)
 *     PnpAllocatePWSTR @ 0x1406CCC6C (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14077DB00 (_CmSetDeviceInterfacePathFormat.c)
 *     IoSetDeviceInterfaceState @ 0x140793850 (IoSetDeviceInterfaceState.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceInterfacesUpdateState(__int64 a1, char a2)
{
  __int64 *v2; // r14
  __int64 *v4; // rdi
  WCHAR *v5; // rbx
  NTSTATUS v6; // esi
  int PWSTR; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+70h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 184);
  v4 = *(__int64 **)(a1 + 184);
  v5 = 0LL;
  v6 = 0;
  SourceString = 0LL;
  DestinationString = 0LL;
  if ( v4 == (__int64 *)(a1 + 184) )
    return (unsigned int)v6;
  while ( !*((_BYTE *)v4 + 36) )
  {
LABEL_4:
    v4 = (__int64 *)*v4;
    if ( v4 == v2 )
      goto LABEL_5;
  }
  PWSTR = PnpAllocatePWSTR((NTSTRSAFE_PCWSTR)v4[2], 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString);
  v5 = (WCHAR *)SourceString;
  v6 = PWSTR;
  if ( PWSTR >= 0 )
  {
    v6 = CmSetDeviceInterfacePathFormat(v10, (__int64 *)SourceString, 1);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v5);
      v6 = IoSetDeviceInterfaceState(&DestinationString, a2);
      if ( v6 >= 0 )
      {
        if ( (byte_140C0E20C & 8) != 0 )
          McTemplateK0zzzt_EtwWriteTransfer(
            v12,
            v11,
            v13,
            *(const wchar_t **)(a1 + 8),
            *(const wchar_t **)(a1 + 16),
            v5,
            a2);
        ExFreePoolWithTag(v5, 0x57706E50u);
        v5 = 0LL;
        SourceString = 0LL;
        goto LABEL_4;
      }
    }
  }
LABEL_5:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x57706E50u);
  return (unsigned int)v6;
}

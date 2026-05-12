/*
 * XREFs of StorAdapterDeviceRegistryKeyProxy @ 0x1C0042200
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidNtStatusToStorStatus @ 0x1C00194BC (RaidNtStatusToStorStatus.c)
 *     PortRegistryReadDeviceKey @ 0x1C0086BBC (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C0086D80 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall StorAdapterDeviceRegistryKeyProxy(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rsi
  const char *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  int v7; // r12d
  _DWORD *Adapter; // rdi
  NTSTATUS v12; // eax
  int v13; // ecx
  __int64 v14; // rcx
  int DeviceKey; // eax
  int v16; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v18; // [rsp+40h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v20; // [rsp+A8h] [rbp+48h]
  const char *SourceString; // [rsp+B0h] [rbp+50h]

  v3 = 0LL;
  v4 = *(const char **)a3;
  v5 = 0LL;
  v6 = 0LL;
  SourceString = *(const char **)(a3 + 8);
  v7 = 0;
  v20 = *(_DWORD *)(a3 + 16);
  v18 = 0LL;
  UnicodeString = 0LL;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a3 + 24);
    v5 = *(_QWORD *)(a3 + 32);
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 24);
    v7 = *(_DWORD *)(a3 + 32);
  }
  if ( KeGetCurrentIrql() )
    return 3238002696LL;
  Adapter = RaidpPortGetAdapter(a1);
  if ( !Adapter )
    return 3238002694LL;
  if ( v4
    && (DestinationString = 0LL,
        RtlInitAnsiString(&DestinationString, v4),
        v12 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u),
        v12 < 0)
    || (DestinationString = 0LL,
        RtlInitAnsiString(&DestinationString, SourceString),
        v12 = RtlAnsiStringToUnicodeString(&v18, &DestinationString, 1u),
        v12 < 0) )
  {
    v13 = v12;
  }
  else
  {
    v14 = *((_QWORD *)Adapter + 4);
    if ( a2 )
      DeviceKey = PortRegistryReadDeviceKey(
                    v14,
                    (unsigned __int64)&UnicodeString & -(__int64)(v4 != 0LL),
                    (unsigned int)&v18,
                    v20,
                    v3,
                    v5);
    else
      DeviceKey = PortRegistryWriteDeviceKey(
                    v14,
                    (unsigned __int64)&UnicodeString & -(__int64)(v4 != 0LL),
                    (unsigned int)&v18,
                    v20,
                    v6,
                    v7);
    v16 = DeviceKey;
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    if ( v18.Buffer )
      RtlFreeUnicodeString(&v18);
    v13 = v16;
  }
  return RaidNtStatusToStorStatus(v13);
}

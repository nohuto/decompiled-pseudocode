/*
 * XREFs of StorPortRegistryWrite @ 0x1C0043D10
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     StorpPortRegistryValidate @ 0x1C0046F44 (StorpPortRegistryValidate.c)
 *     PortBuildRegKeyName @ 0x1C0068384 (PortBuildRegKeyName.c)
 *     PortMiniportRegistryWrite @ 0x1C006876C (PortMiniportRegistryWrite.c)
 */

bool __fastcall StorPortRegistryWrite(
        PVOID VirtualAddress,
        PCSZ SourceString,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  bool v9; // bl
  _DWORD *Adapter; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rsi
  int v13; // edx
  int v14; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  UnicodeString = 0LL;
  v9 = 0;
  if ( KeGetCurrentIrql() )
    return 0;
  if ( !MmIsAddressValid(VirtualAddress) )
    return 0;
  Adapter = RaidpPortGetAdapter((__int64)VirtualAddress);
  if ( !Adapter )
    return 0;
  v11 = Adapter + 470;
  v12 = *((_QWORD *)Adapter + 2);
  if ( !(unsigned __int8)StorpPortRegistryValidate(Adapter + 470, a5, &a6) )
    return 0;
  v14 = a6;
  v11[13] = v13 - v11[8];
  v11[11] = v14;
  if ( (int)PortBuildRegKeyName((PCUNICODE_STRING)(v12 + 40), &Destination) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitAnsiString(&DestinationString, SourceString);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      v9 = (int)((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))PortMiniportRegistryWrite)(
                  &Destination,
                  &UnicodeString,
                  a4,
                  v11) >= 0;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v9;
}

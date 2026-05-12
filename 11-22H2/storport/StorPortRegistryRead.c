/*
 * XREFs of StorPortRegistryRead @ 0x1C00469A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     StorpPortRegistryValidate @ 0x1C0049F74 (StorpPortRegistryValidate.c)
 *     PortBuildRegKeyName @ 0x1C0077BC0 (PortBuildRegKeyName.c)
 *     PortMiniportRegistryRead @ 0x1C0077D84 (PortMiniportRegistryRead.c)
 */

char __fastcall StorPortRegistryRead(
        PVOID VirtualAddress,
        PCSZ SourceString,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int *a6)
{
  _DWORD *Adapter; // rax
  _DWORD *v10; // rdi
  __int64 v11; // r14
  int v12; // edx
  int v13; // eax
  char v14; // si
  int v15; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  UnicodeString = 0LL;
  if ( KeGetCurrentIrql()
    || !MmIsAddressValid(VirtualAddress)
    || (Adapter = RaidpPortGetAdapter((__int64)VirtualAddress)) == 0LL )
  {
    *a6 = 0;
    return 0;
  }
  v10 = Adapter + 486;
  v11 = *((_QWORD *)Adapter + 2);
  if ( !(unsigned __int8)StorpPortRegistryValidate(Adapter + 486, a5, a6) )
    return 0;
  v13 = *a6;
  v10[13] = v12 - v10[8];
  v14 = 0;
  v10[11] = v13;
  *a6 = 0;
  if ( (int)PortBuildRegKeyName((PCUNICODE_STRING)(v11 + 40), &Destination) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitAnsiString(&DestinationString, SourceString);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      v15 = ((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))PortMiniportRegistryRead)(
              &Destination,
              &UnicodeString,
              a4,
              v10);
      if ( v15 < 0 )
      {
        if ( v15 == -1073741789 )
          *a6 = v10[12];
        else
          *a6 = 0;
      }
      else
      {
        v14 = 1;
        *a6 = v10[11];
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v14;
}

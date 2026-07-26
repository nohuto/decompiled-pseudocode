/*
 * XREFs of ndisIfWriteRegistry @ 0x1C013DFC8
 * Callers:
 *     NdisIfFreeNetLuidIndex @ 0x1C010FFD0 (NdisIfFreeNetLuidIndex.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0110F74 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

__int64 __fastcall ndisIfWriteRegistry(__int64 a1)
{
  ULONG v2; // ecx
  unsigned int RegistryKey; // ebx
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-29h] BYREF
  int ValueData; // [rsp+40h] [rbp-19h] BYREF
  _UNICODE_STRING String; // [rsp+48h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-1h] BYREF
  char v9; // [rsp+68h] [rbp+Fh] BYREF

  *(_QWORD *)&String.Length = 2621440LL;
  *(_QWORD *)&Destination.Length = 0LL;
  v2 = *(unsigned __int16 *)(a1 + 16);
  Destination.Buffer = 0LL;
  ValueData = 0;
  String.Buffer = (wchar_t *)&v9;
  DestinationString = 0LL;
  if ( RtlIntegerToUnicodeString(v2, 0xAu, &String) )
  {
    RegistryKey = -1073741670;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes\\");
    Destination.Length = 0;
    Destination.MaximumLength = String.Length + DestinationString.Length + 4;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination.MaximumLength, 538985550);
    if ( !Destination.Buffer )
      return (unsigned int)-1073741670;
    RtlCopyUnicodeString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &String);
    if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer)
      || (RegistryKey = RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer)) == 0 )
    {
      ValueData = *(unsigned __int16 *)(a1 + 16);
      RegistryKey = RtlWriteRegistryValue(1u, (PCWSTR)Destination.Buffer, L"IfType", 4u, &ValueData, 4u);
      if ( !RegistryKey )
        RegistryKey = RtlWriteRegistryValue(
                        1u,
                        (PCWSTR)Destination.Buffer,
                        L"IfUsedNetLuidIndices",
                        3u,
                        *(PVOID *)(a1 + 56),
                        *(_DWORD *)(a1 + 40));
    }
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return RegistryKey;
}

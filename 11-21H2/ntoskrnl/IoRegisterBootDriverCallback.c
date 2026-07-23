/*
 * XREFs of IoRegisterBootDriverCallback @ 0x140863630
 * Callers:
 *     <none>
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 */

PVOID __fastcall IoRegisterBootDriverCallback(PCALLBACK_FUNCTION CallbackFunction, PVOID CallbackContext)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( byte_140C46A78 )
    return 0LL;
  if ( !qword_140D686A8
    && (RtlInitUnicodeString(&DestinationString, L"\\Callback\\BootDriver"),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = &DestinationString,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ExCreateCallback(&qword_140D686A8, &ObjectAttributes, 1u, 1u) < 0) )
  {
    return 0LL;
  }
  else
  {
    return ExRegisterCallback(qword_140D686A8, CallbackFunction, CallbackContext);
  }
}

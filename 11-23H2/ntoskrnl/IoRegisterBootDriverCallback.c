/*
 * XREFs of IoRegisterBootDriverCallback @ 0x140863C80
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x140367A40 (ExRegisterCallback.c)
 *     ExCreateCallback @ 0x1407DC600 (ExCreateCallback.c)
 */

PVOID __fastcall IoRegisterBootDriverCallback(PCALLBACK_FUNCTION CallbackFunction, PVOID CallbackContext)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( PnpBootDriverCallbackRegistrationClosed )
    return 0LL;
  if ( !PnpBootDriverCallbackObject
    && (RtlInitUnicodeString(&DestinationString, L"\\Callback\\BootDriver"),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = &DestinationString,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ExCreateCallback(&PnpBootDriverCallbackObject, &ObjectAttributes, 1u, 1u) < 0) )
  {
    return 0LL;
  }
  else
  {
    return ExRegisterCallback(PnpBootDriverCallbackObject, CallbackFunction, CallbackContext);
  }
}

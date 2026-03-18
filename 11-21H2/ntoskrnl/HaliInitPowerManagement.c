/*
 * XREFs of HaliInitPowerManagement @ 0x14081E1F0
 * Callers:
 *     <none>
 * Callees:
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     HalpAcpiGetFacsMapping @ 0x1403B8198 (HalpAcpiGetFacsMapping.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     HalpPutAcpiHacksInRegistry @ 0x14081E700 (HalpPutAcpiHacksInRegistry.c)
 *     HalpPiix4Detect @ 0x140A53294 (HalpPiix4Detect.c)
 */

NTSTATUS __fastcall HaliInitPowerManagement(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 FacsMapping; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+70h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  LOBYTE(v4) = 1;
  HalpPiix4Detect(v4);
  HalpPutAcpiHacksInRegistry();
  ObjectAttributes.RootDirectory = 0LL;
  CallbackObject = 0LL;
  *a2 = &HalAcpiDispatchTable;
  PmAcpiDispatchTable = a1;
  off_140C01C10 = HaliSetWakeAlarm;
  ObjectAttributes.Attributes = 80;
  qword_140C02040 = (__int64)HaliInitializePlatformDebugTriggers;
  qword_140C02048 = (__int64)HaliRunPlatformDebugTriggers;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  if ( result >= 0 )
  {
    ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)HalpPowerStateCallback, 0LL);
    FacsMapping = HalpAcpiGetFacsMapping(v6);
    if ( FacsMapping )
      HalpWakeVector = FacsMapping + 12;
    return 0;
  }
  return result;
}

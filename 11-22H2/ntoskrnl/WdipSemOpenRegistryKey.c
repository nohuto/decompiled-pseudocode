/*
 * XREFs of WdipSemOpenRegistryKey @ 0x140833248
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x14083160C (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x14083193C (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x1408322D0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1408325D4 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140832854 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140832C60 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DE138 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall WdipSemOpenRegistryKey(PCWSTR SourceString, void *a2, HANDLE *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( !SourceString || !a3 )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes);
}

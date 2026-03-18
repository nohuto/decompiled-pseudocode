/*
 * XREFs of WdipSemOpenRegistryKey @ 0x1408316F8
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x14082FABC (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x14082FDEC (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x140830780 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140830A84 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140830D04 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140831110 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1409DE088 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14041AFA0 (ZwOpenKey.c)
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

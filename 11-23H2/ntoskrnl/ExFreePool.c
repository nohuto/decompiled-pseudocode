/*
 * XREFs of ExFreePool @ 0x140AAECC0
 * Callers:
 *     sub_1403E5A20 @ 0x1403E5A20 (sub_1403E5A20.c)
 *     sub_1403F1BE0 @ 0x1403F1BE0 (sub_1403F1BE0.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x140411B68 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpGetPersistedRegistryLocation @ 0x140411D88 (RtlpGetPersistedRegistryLocation.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140755D00 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlFreeAnsiString @ 0x140756A30 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758870 (RtlUnicodeStringToAnsiString.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x140773CE0 (RtlUpcaseUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1407B72A0 (RtlDuplicateUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x1407BE510 (RtlDowncaseUnicodeString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1407D0EF0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1407DAF30 (RtlOemStringToCountedUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1407FB330 (RtlCreateUnicodeString.c)
 *     CmpSetVersionData @ 0x14080BD58 (CmpSetVersionData.c)
 *     RtlUnicodeStringToOemString @ 0x140861430 (RtlUnicodeStringToOemString.c)
 *     RtlFreeOemString @ 0x1408621F0 (RtlFreeOemString.c)
 *     RtlOemStringToUnicodeString @ 0x14086B8D0 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140874310 (RtlUpcaseUnicodeStringToOemString.c)
 *     PiDrvDbQueryHiveFileName @ 0x140970D64 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971298 (PiDrvDbResolveSystemFilePath.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B8D30 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDEF8 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409C2530 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x1409C2640 (RtlUnicodeStringToUTF8String.c)
 *     KiFilterFiberContext @ 0x140B17C30 (KiFilterFiberContext.c)
 *     sub_140B19300 @ 0x140B19300 (sub_140B19300.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140323340 (ExFreeHeapPool.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __stdcall ExFreePool(PVOID P)
{
  if ( (unsigned __int64)P < 0xFFFF800000000000uLL || ((unsigned __int8)P & 0xF) != 0 )
    KeBugCheckEx(0xC2u, 0x99uLL, (ULONG_PTR)P, 0LL, 0LL);
  ExFreeHeapPool((ULONG_PTR)P);
}

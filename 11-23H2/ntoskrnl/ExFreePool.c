/*
 * XREFs of ExFreePool @ 0x140AAECC0
 * Callers:
 *     sub_1403E5840 @ 0x1403E5840 (sub_1403E5840.c)
 *     sub_1403F1A00 @ 0x1403F1A00 (sub_1403F1A00.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x140411928 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpGetPersistedRegistryLocation @ 0x140411B48 (RtlpGetPersistedRegistryLocation.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140755B10 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlFreeAnsiString @ 0x140756840 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140758680 (RtlUnicodeStringToAnsiString.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x140773AF0 (RtlUpcaseUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140773C00 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1407B6FC0 (RtlDuplicateUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x1407BE240 (RtlDowncaseUnicodeString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1407D0C20 (RtlUnicodeStringToCountedOemString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1407DAC60 (RtlOemStringToCountedUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1407FB060 (RtlCreateUnicodeString.c)
 *     CmpSetVersionData @ 0x14080BA88 (CmpSetVersionData.c)
 *     RtlUnicodeStringToOemString @ 0x1408611F0 (RtlUnicodeStringToOemString.c)
 *     RtlFreeOemString @ 0x140861FB0 (RtlFreeOemString.c)
 *     RtlOemStringToUnicodeString @ 0x14086B690 (RtlOemStringToUnicodeString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1408740D0 (RtlUpcaseUnicodeStringToOemString.c)
 *     PiDrvDbQueryHiveFileName @ 0x140970B64 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140971098 (PiDrvDbResolveSystemFilePath.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1409B8B30 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BDCF8 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409C2330 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x1409C2440 (RtlUnicodeStringToUTF8String.c)
 *     KiFilterFiberContext @ 0x140B17C30 (KiFilterFiberContext.c)
 *     sub_140B19300 @ 0x140B19300 (sub_140B19300.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1403230B0 (ExFreeHeapPool.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __stdcall ExFreePool(PVOID P)
{
  if ( (unsigned __int64)P < 0xFFFF800000000000uLL || ((unsigned __int8)P & 0xF) != 0 )
    KeBugCheckEx(0xC2u, 0x99uLL, (ULONG_PTR)P, 0LL, 0LL);
  ExFreeHeapPool((ULONG_PTR)P);
}

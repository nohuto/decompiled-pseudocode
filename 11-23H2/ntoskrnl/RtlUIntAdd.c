/*
 * XREFs of RtlUIntAdd @ 0x1402504DC
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BE544 (EtwpSetProviderTraitsCommon.c)
 *     CmpCheckKey @ 0x1406E0710 (CmpCheckKey.c)
 *     sub_1406EF570 @ 0x1406EF570 (sub_1406EF570.c)
 *     sub_140762F48 @ 0x140762F48 (sub_140762F48.c)
 *     sub_140763D64 @ 0x140763D64 (sub_140763D64.c)
 *     VrpUpdateKeyInformation @ 0x1407E0120 (VrpUpdateKeyInformation.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B490 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // eax
  UINT v4; // edx
  NTSTATUS result; // eax

  v3 = uAugend + uAddend;
  v4 = -1;
  if ( v3 >= uAugend )
    v4 = v3;
  result = v3 < uAugend ? 0xC0000095 : 0;
  *puResult = v4;
  return result;
}

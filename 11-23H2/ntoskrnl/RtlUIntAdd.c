/*
 * XREFs of RtlUIntAdd @ 0x1402505AC
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BE574 (EtwpSetProviderTraitsCommon.c)
 *     CmpCheckKey @ 0x1406E0740 (CmpCheckKey.c)
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 *     sub_140763138 @ 0x140763138 (sub_140763138.c)
 *     sub_140763F54 @ 0x140763F54 (sub_140763F54.c)
 *     SeValidSecurityDescriptor @ 0x1407B4150 (SeValidSecurityDescriptor.c)
 *     VrpUpdateKeyInformation @ 0x1407E03F0 (VrpUpdateKeyInformation.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B790 (FsRtlNotifyFilterReportChange.c)
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

/*
 * XREFs of RtlGetHotPatchSize @ 0x14067B208
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x140A3AAC4 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x140A764B8 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x140A766B4 (RtlEnumerateHotPatchPatches.c)
 *     RtlPatchContainsCallTarget @ 0x140A76944 (RtlPatchContainsCallTarget.c)
 *     RtlValidateHotPatchBase @ 0x140A76994 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x140AAD5E0 (RtlApplyHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetHotPatchSize(_DWORD *a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( *a1 >= 3u )
    return (unsigned int)(a1[6] + 2);
  return result;
}

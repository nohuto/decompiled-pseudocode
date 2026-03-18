/*
 * XREFs of RtlGetHotPatchSize @ 0x14067ACB8
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x140A3A814 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x140A76208 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x140A76404 (RtlEnumerateHotPatchPatches.c)
 *     RtlPatchContainsCallTarget @ 0x140A76694 (RtlPatchContainsCallTarget.c)
 *     RtlValidateHotPatchBase @ 0x140A766E4 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x140AAD770 (RtlApplyHotPatch.c)
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

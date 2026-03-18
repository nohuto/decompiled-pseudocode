/*
 * XREFs of RtlFindHotPatchBase @ 0x140A7649C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A34878 (MiApplyDriverHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x140A361B8 (MiCaptureHotPatchInfo.c)
 *     MiMapAndApplyPatchInSession @ 0x140A39FB4 (MiMapAndApplyPatchInSession.c)
 *     MiOpenHotPatchFile @ 0x140A3A350 (MiOpenHotPatchFile.c)
 *     MiPrepareToHotPatchImage @ 0x140A3A908 (MiPrepareToHotPatchImage.c)
 *     RtlFindHotPatchInformation @ 0x140A764CC (RtlFindHotPatchInformation.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlFindHotPatchBase(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  if ( a1[4] && (v1 = a1[3], (v2 = *(unsigned int *)((char *)a1 + v1)) != 0) && v2 + 32 <= (unsigned __int64)a1[1] )
    return (char *)a1 + v2;
  else
    return 0LL;
}

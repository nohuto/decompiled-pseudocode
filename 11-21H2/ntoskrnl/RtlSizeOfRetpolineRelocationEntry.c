/*
 * XREFs of RtlSizeOfRetpolineRelocationEntry @ 0x14023548C
 * Callers:
 *     RtlValidateRetpolineRelocation @ 0x140235054 (RtlValidateRetpolineRelocation.c)
 *     RtlCreateRetpolineRelocationInformation @ 0x140235150 (RtlCreateRetpolineRelocationInformation.c)
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x1402353E4 (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineRelocationEntry(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 - 3;
  if ( !v1 )
    return 4LL;
  if ( (unsigned __int64)(v1 - 1) < 2 )
    return 2LL;
  return 0xFFFFFFFFLL;
}

/*
 * XREFs of RtlSizeOfRetpolineIndirectFixup @ 0x14045F1E0
 * Callers:
 *     RtlCreateRetpolineRelocationInformation @ 0x140235150 (RtlCreateRetpolineRelocationInformation.c)
 *     RtlpConstructIndirectRelocationFixup @ 0x1405EF618 (RtlpConstructIndirectRelocationFixup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSizeOfRetpolineIndirectFixup(unsigned __int16 *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( (v1 & 0x4000) != 0 )
    return (v1 | 0xC000u) >> 13;
  else
    return 5LL;
}

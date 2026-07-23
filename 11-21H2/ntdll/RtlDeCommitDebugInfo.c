/*
 * XREFs of RtlDeCommitDebugInfo @ 0x1800E3520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl RtlDeCommitDebugInfo(PRTL_DEBUG_INFORMATION Buffer, PVOID p, SIZE_T Size)
{
  RtlpDeCommitQueryDebugInfo(Buffer, p, Size);
}

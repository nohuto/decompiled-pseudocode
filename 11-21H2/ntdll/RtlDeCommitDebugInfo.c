/*
 * XREFs of RtlDeCommitDebugInfo @ 0x1800E3520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlDeCommitDebugInfo(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpDeCommitQueryDebugInfo(a1, a2, a3);
}

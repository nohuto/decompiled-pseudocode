/*
 * XREFs of RtlApplyRXactNoFlush @ 0x18007FB40
 * Callers:
 *     <none>
 * Callees:
 *     RtlAbortRXact @ 0x18007FB70 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x18007FBB8 (RXactpCommit.c)
 */

__int64 __fastcall RtlApplyRXactNoFlush(__int64 a1)
{
  __int64 result; // rax

  result = RXactpCommit();
  if ( (int)result >= 0 )
    return RtlAbortRXact(a1);
  return result;
}

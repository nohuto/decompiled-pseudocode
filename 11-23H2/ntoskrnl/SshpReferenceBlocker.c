/*
 * XREFs of SshpReferenceBlocker @ 0x1407E8530
 * Callers:
 *     SleepstudyHelperSetBlockerParentHandle @ 0x14036B890 (SleepstudyHelperSetBlockerParentHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SshpReferenceBlocker(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 296);
  _InterlockedIncrement((volatile signed __int32 *)(result + 112));
  return result;
}

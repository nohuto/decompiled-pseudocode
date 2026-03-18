/*
 * XREFs of EtwTimLogProhibitFsctlSystemCalls @ 0x140659D84
 * Callers:
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x1409E8BEC (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall EtwTimLogProhibitFsctlSystemCalls(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // r8

  result = *(unsigned int *)(a2 + 2928);
  if ( (result & 4) != 0 )
  {
    v4 = MITIGATION_AUDIT_PROHIBIT_FSCTL_SYSTEM_CALLS;
    if ( a1 != 1 )
      v4 = MITIGATION_ENFORCE_PROHIBIT_FSCTL_SYSTEM_CALLS;
    result = EtwpTimLogMitigationForProcess(3LL, a1, v4, a2);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2928), 0xFFFFFFFB);
  }
  return result;
}

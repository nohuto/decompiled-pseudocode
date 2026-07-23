/*
 * XREFs of EtwTimLogProhibitDynamicCode @ 0x1409EA1D4
 * Callers:
 *     MiArbitraryCodeBlocked @ 0x14076BF64 (MiArbitraryCodeBlocked.c)
 * Callees:
 *     EtwpTimLogMitigationForProcess @ 0x1409EB9FC (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall EtwTimLogProhibitDynamicCode(unsigned int a1, __int64 a2)
{
  __int64 *v3; // r8
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 2512) & 0x800) != 0 )
  {
    v3 = MITIGATION_AUDIT_PROHIBIT_DYNAMIC_CODE;
    if ( a1 != 1 )
      v3 = MITIGATION_ENFORCE_PROHIBIT_DYNAMIC_CODE;
    result = EtwpTimLogMitigationForProcess(0LL, a1, v3, a2);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2512), 0xFFFFF7FF);
  }
  return result;
}

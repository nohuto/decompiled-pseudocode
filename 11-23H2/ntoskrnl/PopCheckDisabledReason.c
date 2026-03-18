/*
 * XREFs of PopCheckDisabledReason @ 0x140801AB0
 * Callers:
 *     PopEnableHiberFile @ 0x1408016DC (PopEnableHiberFile.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x1407A8888 (PopGetReasonListByReasonCode.c)
 */

char __fastcall PopCheckDisabledReason(int a1)
{
  __int64 ReasonListByReasonCode; // rcx
  char v2; // r10
  char v4; // al

  ReasonListByReasonCode = PopGetReasonListByReasonCode(a1);
  if ( ReasonListByReasonCode )
  {
    v4 = v2;
    if ( *(_BYTE *)(ReasonListByReasonCode + 19) != v2 )
      return 1;
    return v4;
  }
  return v2;
}

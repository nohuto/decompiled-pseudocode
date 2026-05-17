/*
 * XREFs of RtlUnlockBootStatusData @ 0x1800FACF0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x1800A1A80 (NtPowerInformation.c)
 */

__int64 __fastcall RtlUnlockBootStatusData(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return NtPowerInformation();
  return result;
}

/*
 * XREFs of RtlUnlockBootStatusData @ 0x1800F9680
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x1800A4C40 (NtPowerInformation.c)
 */

__int64 __fastcall RtlUnlockBootStatusData(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return NtPowerInformation();
  return result;
}

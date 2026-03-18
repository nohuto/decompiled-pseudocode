/*
 * XREFs of ExpWnfDeleteNameInstanceCallback @ 0x1407C92F0
 * Callers:
 *     ExpWnfFreeScopeInstance @ 0x1407CC964 (ExpWnfFreeScopeInstance.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 *     ExpWnfDeleteNameInstance @ 0x1407C9640 (ExpWnfDeleteNameInstance.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstanceCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a1 - 16;
  ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 - 16 + 8));
  return ExpWnfDeleteNameInstance(a2, v2, 0LL);
}

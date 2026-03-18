/*
 * XREFs of PopEtAppIdDereference @ 0x1407B2A20
 * Callers:
 *     PoEnergyContextCleanup @ 0x1407B0D20 (PoEnergyContextCleanup.c)
 *     PopEtGetProcessAppId @ 0x1407B1130 (PopEtGetProcessAppId.c)
 *     PopEtAggregateKeyCleanup @ 0x1407B29D8 (PopEtAggregateKeyCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1407B2AE0 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56, a1);
  return result;
}

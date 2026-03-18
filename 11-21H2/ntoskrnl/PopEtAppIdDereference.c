/*
 * XREFs of PopEtAppIdDereference @ 0x140674FE4
 * Callers:
 *     PopEtGetProcessAppId @ 0x140673C3C (PopEtGetProcessAppId.c)
 *     PopEtAggregateKeyCleanup @ 0x140674F0C (PopEtAggregateKeyCleanup.c)
 *     PoEnergyContextCleanup @ 0x1407E0DC4 (PoEnergyContextCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x140675014 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56);
  return result;
}

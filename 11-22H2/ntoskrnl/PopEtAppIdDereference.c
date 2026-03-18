/*
 * XREFs of PopEtAppIdDereference @ 0x1407B2FD0
 * Callers:
 *     PoEnergyContextCleanup @ 0x1407B12D0 (PoEnergyContextCleanup.c)
 *     PopEtGetProcessAppId @ 0x1407B16E0 (PopEtGetProcessAppId.c)
 *     PopEtAggregateKeyCleanup @ 0x1407B2F88 (PopEtAggregateKeyCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1407B3090 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56, a1);
  return result;
}

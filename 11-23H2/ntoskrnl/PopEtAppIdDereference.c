/*
 * XREFs of PopEtAppIdDereference @ 0x1407B2C10
 * Callers:
 *     PoEnergyContextCleanup @ 0x1407B0F10 (PoEnergyContextCleanup.c)
 *     PopEtGetProcessAppId @ 0x1407B1320 (PopEtGetProcessAppId.c)
 *     PopEtAggregateKeyCleanup @ 0x1407B2BC8 (PopEtAggregateKeyCleanup.c)
 * Callees:
 *     RtlInternEntryDereference @ 0x1407B2CD0 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAppIdDereference(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 24) )
    return RtlInternEntryDereference(PopEtGlobals + 56, a1);
  return result;
}

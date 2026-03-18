/*
 * XREFs of PopQueueDirectedDripsWork @ 0x1402501A0
 * Callers:
 *     PopDirectedDripsClearDisengageReason @ 0x1402500D4 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14025013C (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsNotify @ 0x140811764 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x14098BD1C (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopInitializeDirectedDrips @ 0x140B0348C (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C24048);
  v2 = _InterlockedOr64(&qword_140C24048, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C24058, 0, 0);
  return v2;
}

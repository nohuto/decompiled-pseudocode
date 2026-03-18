/*
 * XREFs of PopQueueDirectedDripsWork @ 0x14035E6A4
 * Callers:
 *     PopDirectedDripsSetDisengageReason @ 0x14035E5D4 (PopDirectedDripsSetDisengageReason.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14035E638 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsNotify @ 0x1408754E4 (PopDirectedDripsNotify.c)
 *     PopDirectedDripsIdleResiliencyCallback @ 0x140983630 (PopDirectedDripsIdleResiliencyCallback.c)
 *     PopInitializeDirectedDrips @ 0x140B51F08 (PopInitializeDirectedDrips.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 */

int __fastcall PopQueueDirectedDripsWork(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax

  _m_prefetchw(&qword_140C3F0E8);
  v2 = _InterlockedOr64(&qword_140C3F0E8, a2);
  if ( !v2 )
    LODWORD(v2) = KeSetEvent(&stru_140C3F0F8, 0, 0);
  return v2;
}

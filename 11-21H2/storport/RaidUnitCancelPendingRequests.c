/*
 * XREFs of RaidUnitCancelPendingRequests @ 0x1C001EDF4
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C0087538 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidRemoveIoQueue @ 0x1C001EE2C (RaidRemoveIoQueue.c)
 *     RaidCancelIrp @ 0x1C004E1A4 (RaidCancelIrp.c)
 */

__int64 __fastcall RaidUnitCancelPendingRequests(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a1 + 640;
  while ( 1 )
  {
    result = RaidRemoveIoQueue(v2);
    if ( !result )
      break;
    RaidCancelIrp(a1, 8LL, result);
  }
  return result;
}

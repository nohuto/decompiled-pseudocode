/*
 * XREFs of sub_140646180 @ 0x140646180
 * Callers:
 *     sub_1406460E0 @ 0x1406460E0 (sub_1406460E0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406460B8 @ 0x1406460B8 (sub_1406460B8.c)
 */

void sub_140646180()
{
  if ( stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters && sub_1406460B8(0) )
  {
    if ( stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters )
      sub_14042A5E0(stru_140C0E9A8.Queue.Wcb.CurrentIrp, &stru_140C0E9A8.AlignmentRequirement);
    _InterlockedExchange((volatile __int32 *)(&stru_140C0E9A8.Queue.Wcb.NumberOfMapRegisters + 1), 0);
  }
}

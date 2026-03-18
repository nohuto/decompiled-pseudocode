/*
 * XREFs of RtlAreAllAccessesGranted @ 0x1407CD270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreAllAccessesGranted(int a1, int a2)
{
  return (~a1 & a2) == 0;
}

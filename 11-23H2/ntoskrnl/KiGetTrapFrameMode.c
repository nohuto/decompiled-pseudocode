/*
 * XREFs of KiGetTrapFrameMode @ 0x1403D6530
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403E45D0 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}

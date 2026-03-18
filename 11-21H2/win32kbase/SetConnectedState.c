/*
 * XREFs of SetConnectedState @ 0x1C00C5A50
 * Callers:
 *     <none>
 * Callees:
 *     PowerConnectionEvent @ 0x1C007AD94 (PowerConnectionEvent.c)
 */

void __fastcall SetConnectedState(int a1, int a2)
{
  gbConnected = a1;
  if ( a2 != gbConnectCompleted )
  {
    gbConnectCompleted = a2;
    PowerConnectionEvent();
  }
}

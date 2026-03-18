/*
 * XREFs of SetConnectCompletedState @ 0x1C007AD40
 * Callers:
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C0078C50 (ReferenceDwmApiPort.c)
 *     PowerConnectionEvent @ 0x1C007AD94 (PowerConnectionEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  PVOID v1; // rcx

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent();
    if ( qword_1C029CA90 )
    {
      if ( (int)qword_1C029CA90() >= 0 )
      {
        v1 = ReferenceDwmApiPort();
        if ( qword_1C029CA98 )
          qword_1C029CA98(v1);
      }
    }
  }
}

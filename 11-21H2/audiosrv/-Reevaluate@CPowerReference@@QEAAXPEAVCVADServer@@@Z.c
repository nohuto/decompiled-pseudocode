/*
 * XREFs of ?Reevaluate@CPowerReference@@QEAAXPEAVCVADServer@@@Z @ 0x180104750
 * Callers:
 *     ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x1800EF720 (-ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x1800EF6D8 (-QueryState@CVADServer@@QEAAJPEAH00@Z.c)
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x1801031B0 (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 */

void __fastcall CPowerReference::Reevaluate(CPowerReference *this, struct CVADServer *a2)
{
  CPdcTimerActivation **v2; // r10
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+50h] [rbp+18h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  CVADServer::QueryState(a2, &v5, &v4, v3);
  if ( v4 )
  {
    if ( !v3[0] )
      return;
  }
  else if ( !v5 )
  {
    return;
  }
  if ( *v2 )
    CPdcTimerActivation::Renew(*v2);
}

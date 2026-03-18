/*
 * XREFs of ?IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ @ 0x1C007F79C
 * Callers:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C007E91C (-Connect@FxInterrupt@@QEAAJK@Z.c)
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C007ED80 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxInterrupt::IsSoftDisconnectCapable(FxInterrupt *this)
{
  bool result; // al

  result = 0;
  if ( this->m_UseSoftDisconnect && WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceRoutine )
  {
    if ( this->m_Interrupt )
      return this->m_Connected != 0;
  }
  return result;
}

/*
 * XREFs of ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800E8B90
 * Callers:
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x1800AFA64 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800B1AB4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTouchPressHoldVisual::IsOKToCleanup(CTouchPressHoldVisual *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 43) && !*((_QWORD *)this + 44) && !*((_QWORD *)this + 45) )
    return *((_QWORD *)this + 46) == 0LL;
  return result;
}

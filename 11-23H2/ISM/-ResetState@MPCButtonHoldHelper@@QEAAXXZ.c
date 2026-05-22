/*
 * XREFs of ?ResetState@MPCButtonHoldHelper@@QEAAXXZ @ 0x1800C8824
 * Callers:
 *     ?ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ @ 0x1800C8614 (-ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800C8840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MPCButtonHoldHelper::ResetState(MPCButtonHoldHelper *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    *((_WORD *)this + 4) = 0;
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
}

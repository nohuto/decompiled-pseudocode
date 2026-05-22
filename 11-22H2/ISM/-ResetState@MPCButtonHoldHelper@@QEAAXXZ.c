/*
 * XREFs of ?ResetState@MPCButtonHoldHelper@@QEAAXXZ @ 0x1800D7B74
 * Callers:
 *     ?ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ @ 0x1800D7964 (-ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800D7B90 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
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

/*
 * XREFs of ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x1800A3D8C
 * Callers:
 *     ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x1800A26C0 (-OnTimerTick@CAnimationClock@@EEAAXXZ.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800A41F4 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 * Callees:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800A3DF8 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     McTemplateU0j_EtwEventWriteTransfer @ 0x1800A46AC (McTemplateU0j_EtwEventWriteTransfer.c)
 */

void __fastcall CAnimationClock::_OnTimerCallback(CAnimationClock *this)
{
  int v1; // eax
  CAnimationClock *v2; // rbx
  __int64 v3; // rdx

  v1 = *((_DWORD *)this + 20);
  v2 = this;
  switch ( v1 )
  {
    case 1:
      v3 = 3LL;
      break;
    case 2:
      v3 = 4LL;
      break;
    case 4:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0j_EtwEventWriteTransfer(this, &UdwmAnimationClock_Finish, (char *)this + 120);
      v3 = 6LL;
      this = v2;
      break;
    default:
      if ( (unsigned int)(v1 - 5) > 1 )
        return;
      v3 = 7LL;
      break;
  }
  CAnimationClock::_SetState(this, v3);
}

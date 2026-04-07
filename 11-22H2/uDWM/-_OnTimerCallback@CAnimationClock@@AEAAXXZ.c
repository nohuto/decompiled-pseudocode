/*
 * XREFs of ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x18000576C
 * Callers:
 *     ?OnTimerTick@CAnimationClock@@EEAAXXZ @ 0x180005240 (-OnTimerTick@CAnimationClock@@EEAAXXZ.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180005908 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 * Callees:
 *     McTemplateU0j_EtwEventWriteTransfer @ 0x180003FB0 (McTemplateU0j_EtwEventWriteTransfer.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180006004 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 */

void __fastcall CAnimationClock::_OnTimerCallback(CAnimationClock *this)
{
  CAnimationClock *v1; // rbx
  __int64 v2; // rdx

  v1 = this;
  switch ( *((_DWORD *)this + 20) )
  {
    case 1:
      v2 = 3LL;
      break;
    case 2:
      v2 = 4LL;
      break;
    case 4:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0j_EtwEventWriteTransfer((__int64)this, (int)&UdwmAnimationClock_Finish, (__int64)this + 120);
      v2 = 6LL;
      this = v1;
      break;
    default:
      if ( (unsigned int)(*((_DWORD *)this + 20) - 5) > 1 )
        return;
      v2 = 7LL;
      break;
  }
  CAnimationClock::_SetState(this, v2);
}

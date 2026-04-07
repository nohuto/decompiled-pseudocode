/*
 * XREFs of ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x180003EEC
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180003950 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180003BE0 (-OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     McTemplateU0j_EtwEventWriteTransfer @ 0x180003FB0 (McTemplateU0j_EtwEventWriteTransfer.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::_ClearExpiredAnimationClocks(CAnimationClockCoordinator *this)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 20) )
  {
    if ( v1 < 0 )
      break;
    v4 = *((_QWORD *)this + 7);
    v5 = *(_QWORD *)(v4 + 8 * v2);
    if ( *(_DWORD *)(v5 + 80) == 7 )
    {
      v6 = *((unsigned int *)this + 20);
      if ( (unsigned int)v2 >= (unsigned int)v6 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u, 0LL);
        v1 = -2147024809;
      }
      else
      {
        v7 = (unsigned int)v2;
        if ( (unsigned int)v2 < (int)v6 - 1 )
        {
          do
          {
            v9 = (unsigned int)v7;
            v10 = (unsigned int)(v7 + 1);
            v7 = v10;
            *(_QWORD *)(v4 + 8 * v9) = *(_QWORD *)(v4 + 8 * v10);
            v6 = *((unsigned int *)this + 20);
          }
          while ( (unsigned int)v10 < (int)v6 - 1 );
        }
        v1 = 0;
        *((_DWORD *)this + 20) = v6 - 1;
        v11 = *(_OWORD *)(v5 + 120);
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0j_EtwEventWriteTransfer(v6, &UdwmAnimationClock_Destroy, &v11, v7);
        CBaseObject::Release((CBaseObject *)v5);
      }
    }
    else
    {
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return (unsigned int)v1;
}

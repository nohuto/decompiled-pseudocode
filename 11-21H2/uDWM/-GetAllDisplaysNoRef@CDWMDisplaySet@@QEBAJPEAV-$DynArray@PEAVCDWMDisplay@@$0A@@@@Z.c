/*
 * XREFs of ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003C2B8
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800AFCEC (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800B119C (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800B131C (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ @ 0x1800B15D8 (-UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800B16B8 (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CED78 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetAllDisplaysNoRef(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v10; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 64) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3);
      v7 = *(unsigned int *)(a2 + 24);
      v11 = v6;
      v8 = v7 + 1;
      if ( (int)v7 + 1 < (unsigned int)v7 )
        break;
      if ( v8 <= *(_DWORD *)(a2 + 20) )
      {
        v2 = 0;
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v7) = v6;
        *(_DWORD *)(a2 + 24) = v8;
      }
      else
      {
        v2 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8u, 1, &v11);
        if ( v2 < 0 )
        {
          v10 = 192;
          goto LABEL_10;
        }
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
        return (unsigned int)v2;
    }
    v2 = -2147024362;
    v10 = 181;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v10);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x14Au);
  }
  return (unsigned int)v2;
}

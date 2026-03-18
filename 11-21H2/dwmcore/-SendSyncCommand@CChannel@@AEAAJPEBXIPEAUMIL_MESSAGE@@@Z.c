/*
 * XREFs of ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1801AC3B4
 * Callers:
 *     ?SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z @ 0x1801AC470 (-SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z.c)
 *     ?SyncLegacyVisualCaptureRenderTargetCaptureBits@CChannel@@UEAAJIIMHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1801AC580 (-SyncLegacyVisualCaptureRenderTargetCaptureBits@CChannel@@UEAAJIIMHHHH_KPEAW4DXGI_FORMAT@@PEAPEA.c)
 *     ?SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@AEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801AC6D0 (-SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU-$TMILFlagsEnum@W4FlagsEnum@MilRender.c)
 * Callees:
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x18002D2C0 (-SyncFlush@CChannel@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::SendSyncCommand(CChannel *this, void *a2, unsigned int a3, struct MIL_MESSAGE *a4)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // xmm1_8

  *((_OWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  v6 = CChannel::SendCommand((CDataStreamWriter **)this, a2, a3);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0xDCu);
  }
  else
  {
    v9 = CChannel::SyncFlush(this);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xDFu);
    }
    else if ( a4 )
    {
      v11 = *((_DWORD *)this + 38);
      v12 = *((_QWORD *)this + 18);
      *(_OWORD *)a4 = *((_OWORD *)this + 8);
      *((_QWORD *)a4 + 2) = v12;
      *((_DWORD *)a4 + 6) = v11;
    }
  }
  return v8;
}

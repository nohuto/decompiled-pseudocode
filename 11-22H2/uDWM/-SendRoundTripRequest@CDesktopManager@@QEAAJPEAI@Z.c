/*
 * XREFs of ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x1800477A0
 * Callers:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x1800476D0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C73A0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::SendRoundTripRequest(CDesktopManager *this, unsigned int *a2)
{
  unsigned int v2; // esi
  int v4; // eax
  unsigned int v5; // ebx

  v2 = *((_DWORD *)this + 176);
  *((_DWORD *)this + 176) = v2 + 1;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 24LL) + 136LL))(
         *(_QWORD *)(*((_QWORD *)this + 6) + 24LL),
         v2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x6C0u, 0LL);
  }
  else if ( a2 )
  {
    *a2 = v2;
  }
  return v5;
}

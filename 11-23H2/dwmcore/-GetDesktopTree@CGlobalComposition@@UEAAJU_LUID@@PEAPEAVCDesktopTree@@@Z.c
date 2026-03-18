/*
 * XREFs of ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x1800AC840
 * Callers:
 *     ?Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x180014A80 (-Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 * Callees:
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x18004AEE0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDesktopTree@CComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x1800AC8C0 (-GetDesktopTree@CComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalComposition::GetDesktopTree(
        CRenderTargetManager **this,
        struct _LUID a2,
        struct CDesktopTree **a3)
{
  DWORD LowPart; // ebx
  int DesktopTree; // edi
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  int v9; // eax
  __int64 v10; // rcx
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  DesktopTree = CComposition::GetDesktopTree((CComposition *)this, a2, a3);
  if ( DesktopTree < 0 && LowPart == dword_1803E43A0 && HighPart == dword_1803E43A4 )
  {
    PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(this[27]);
    if ( PrimaryMonitorTarget )
    {
      v9 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, struct CDesktopTree **))(*(_QWORD *)PrimaryMonitorTarget
                                                                                      + 16LL))(
             PrimaryMonitorTarget,
             a3);
      DesktopTree = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180356BE8, 2u, v9, 0x93u, 0LL);
    }
  }
  return (unsigned int)DesktopTree;
}

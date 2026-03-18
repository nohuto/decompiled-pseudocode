/*
 * XREFs of ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801CBCC0
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008BA8C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x1801CC3A0 (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 *     ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC4DC (-RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801CC564 (-RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801CC5B8 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801CCC88 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CCE04 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CCF88 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x18012E5E2 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x1801A2944 (McTemplateU0p_EventWriteTransfer.c)
 *     IsSuperWetInkCompatibleVailContainer @ 0x1801CC1D8 (IsSuperWetInkCompatibleVailContainer.c)
 *     ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x1801CD118 (-TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z.c)
 */

void __fastcall CSuperWetInkManager::DeactivateCurrentSource(struct CSuperWetSource **this)
{
  CSuperWetInkManager *v2; // rcx
  struct CSuperWetInkManager::SuperWetStroke *v3; // rdi
  struct IMonitorTarget *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( this[1] )
  {
    if ( !(unsigned __int8)IsSuperWetInkCompatibleVailContainer() )
    {
      v3 = CSuperWetInkManager::TryLookupDataForSource((CSuperWetInkManager *)this, this[1]);
      v4 = (struct IMonitorTarget *)*((_QWORD *)v3 + 1);
      if ( v4 )
      {
        CSuperWetInkManager::TurnOffScribblingForTarget(v2, v4);
        v5 = *((_QWORD *)v3 + 1);
        *((_QWORD *)v3 + 1) = 0LL;
        if ( v5 )
        {
          v6 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0p_EventWriteTransfer((__int64)v2, &EVTDESC_COMPUTESCRIBBLE_DROPSOURCE, (__int64)this[1]);
    (*(void (__fastcall **)(struct CSuperWetSource *))(*(_QWORD *)this[1] + 320LL))(this[1]);
    this[1] = 0LL;
  }
}

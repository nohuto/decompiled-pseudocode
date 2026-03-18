/*
 * XREFs of ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0072080
 * Callers:
 *     GreGetMonitorHash @ 0x1C0067ED0 (GreGetMonitorHash.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C006A3FC (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1C006F400 (DxgkEngFindViewDesktopPosition.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C0071FB0 (DrvGetWDDMAdapterInfo.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C0174180 (DrvDxgkUpgradeLegacyDpiSettings.c)
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
  if ( v2 != -4 )
  {
    if ( !v2 )
      return 0LL;
LABEL_3:
    if ( !_bittest((const signed __int32 *)(v1 + 40), 0x11u) )
      return (struct _LUID *)(v2 + 248);
    return 0LL;
  }
  if ( !_bittest((const signed __int32 *)(v1 + 40), 0x11u) )
    goto LABEL_3;
  return (struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1768) + 40LL) + 2552LL) + 248LL);
}

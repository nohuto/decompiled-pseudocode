/*
 * XREFs of ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18004326C
 * Callers:
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x180002418 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000A7A0 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180012260 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180042394 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800430E4 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800C9654 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImageProxy::Update(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v7; // rbx
  int v8; // ecx
  int v10; // r11d
  int v11; // edx

  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0;
  if ( a6 )
    v10 = *(_DWORD *)(*(_QWORD *)(a6 + 16) + 24LL);
  else
    v10 = 0;
  if ( a5 )
    v11 = *(_DWORD *)(*(_QWORD *)(a5 + 16) + 24LL);
  else
    v11 = 0;
  if ( a4 )
    v8 = *(_DWORD *)(*(_QWORD *)(a4 + 16) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, int, int, int, int))(**(_QWORD **)(v7 + 16)
                                                                                              + 744LL))(
           *(_QWORD *)(v7 + 16),
           *(unsigned int *)(v7 + 24),
           a2,
           a3,
           v8,
           v11,
           v10,
           a7,
           1);
}

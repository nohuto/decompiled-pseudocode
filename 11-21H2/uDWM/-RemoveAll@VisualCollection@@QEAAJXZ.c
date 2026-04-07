/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800080BC (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800125AC (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180014E6C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001C720 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180025F30 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180026A30 (--1CVisual@@MEAA@XZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18003FB48 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18004E938 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180097DA4 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x1800B1CB8 (--1CDesktopThumbnailCVIVisual@@MEAA@XZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B3224 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x1800C29DC (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x1800C30F0 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C328C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D3484 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800EE9F0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800EFAB0 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCollection::RemoveAll(VisualCollection *this)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    ++*((_DWORD *)this + 12);
    do
    {
      v4 = 8LL * v2;
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + *((_QWORD *)this + 2)) + 72LL))(
             *(_QWORD *)(v4 + *((_QWORD *)this + 2)),
             0LL);
      v6 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x14Fu);
        return v6;
      }
      v7 = *(_QWORD *)(v4 + *((_QWORD *)this + 2));
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
        *(_QWORD *)(v4 + *((_QWORD *)this + 2)) = 0LL;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 10) );
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 16) + 440LL))(
           *(_QWORD *)(v8 + 16),
           *(unsigned int *)(v8 + 24));
    v2 = v9;
    if ( v9 >= 0 )
      goto LABEL_2;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x154u);
  }
  else
  {
LABEL_2:
    *((_DWORD *)this + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 16, 8u);
  }
  return v2;
}

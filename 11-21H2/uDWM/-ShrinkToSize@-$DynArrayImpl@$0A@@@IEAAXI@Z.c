/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060
 * Callers:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180009CF0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001FBD0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18002477C (--1CAtlasedRectsVisual@@MEAA@XZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180025F30 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002AD90 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003C3BC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x18005B904 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x180069D36 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18006A81A (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180097DA4 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?Reset@CAnimationResource@@UEAAJXZ @ 0x1800A6980 (-Reset@CAnimationResource@@UEAAJXZ.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800B3224 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x1800BFD98 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x1800C30F0 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800C31CC (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C328C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x1800C43B8 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x1800CFB90 (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800DB704 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x1800E7580 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180106CF0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     memcpy_0 @ 0x1800636FB (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  const void *v4; // rdx
  void *v5; // rcx
  unsigned __int64 v6; // r8
  const void *v7; // [rsp+30h] [rbp+8h] BYREF

  result = a2;
  v4 = *(const void **)a1;
  v5 = *(void **)(a1 + 8);
  if ( v4 != v5 )
  {
    v6 = result * *(unsigned int *)(a1 + 24);
    result = 0xFFFFFFFFLL;
    if ( v6 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v5, v4, (unsigned int)v6);
        (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        result = *(unsigned int *)(a1 + 16);
LABEL_6:
        *(_DWORD *)(a1 + 20) = result;
        return result;
      }
      v7 = v4;
      result = (*(__int64 (__fastcall **)(WPF::HeapBase *, const void **))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
                 WPF::g_pProcessHeap,
                 &v7);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)a1 = v7;
        result = *(unsigned int *)(a1 + 24);
        goto LABEL_6;
      }
    }
  }
  return result;
}

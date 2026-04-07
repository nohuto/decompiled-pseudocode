/*
 * XREFs of ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800E6248
 * Callers:
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x1800C41C0 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800C4894 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x1800C4A10 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x1800102FC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800111F0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0CLivePreviewTimeline@@QEAA@XZ @ 0x1800548D8 (--0CLivePreviewTimeline@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800C2430 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x1800C58C8 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x1800E5248 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

__int64 __fastcall CTopLevelWindow::StartLivePreviewAnimation(__int64 a1, int a2)
{
  unsigned int v3; // edi
  int v4; // edx
  struct CVisual *v5; // rcx
  int v6; // ecx
  double AnimationDuration; // xmm6_8
  CLivePreviewTimeline *v8; // rax
  CLivePreviewTimeline *v9; // rax

  v3 = 0;
  *(_DWORD *)(a1 + 256) = a2;
  if ( !CTopLevelWindow::HasAnimation((CTopLevelWindow *)a1) )
  {
    CDesktopManager::RegisterForGlobalTimeChangeNotification(v5);
    v4 = *(_DWORD *)(a1 + 256);
  }
  ++*(_DWORD *)(a1 + 252);
  v6 = 3;
  AnimationDuration = 0.0;
  if ( v4 == 3 )
  {
    v6 = 2;
  }
  else if ( v4 != 4 )
  {
    goto LABEL_8;
  }
  AnimationDuration = CLivePreview::GetAnimationDuration(v6);
LABEL_8:
  v8 = *(CLivePreviewTimeline **)(a1 + 704);
  if ( !v8 )
  {
    v9 = (CLivePreviewTimeline *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                                   WPF::g_pProcessHeap,
                                   128LL);
    if ( v9 )
    {
      v8 = CLivePreviewTimeline::CLivePreviewTimeline(v9);
      *(_QWORD *)(a1 + 704) = v8;
      if ( v8 )
      {
        v4 = *(_DWORD *)(a1 + 256);
        goto LABEL_12;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 704) = 0LL;
    }
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x12D3u);
    CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)a1);
    return v3;
  }
LABEL_12:
  CLivePreviewTimeline::RestartTimeline((__int64)v8, v4, AnimationDuration);
  return v3;
}

/*
 * XREFs of ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001B9FC
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18001B750 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetCloneVisuals@AcrylicHostBackdrop@@QEAAJPEAVCVisual@@0@Z @ 0x18001AEF0 (-SetCloneVisuals@AcrylicHostBackdrop@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x18001B810 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x18001B974 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18001B994 (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001FF24 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002A1F0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCSystemBackdropVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSystemBackdropVisual@@@Z @ 0x1800E4188 (--4-$ComPtr@VCSystemBackdropVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSystemBackdropVisual@@@Z.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800E5FC8 (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::InitializeVisualTreeClone(__int64 a1, __int64 a2, char a3)
{
  int v5; // eax
  unsigned int v6; // ebp
  char v7; // dl
  bool v8; // dl
  __int64 v9; // rdx
  struct CVisual **v10; // rax
  AcrylicHostBackdrop *v11; // rcx
  struct CVisual *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r13
  int v18; // r15d
  volatile signed __int32 *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  char v33; // al
  struct _MARGINS *v34; // rax
  CRenderDataVisual *v35; // rcx
  CBaseObject *v36; // rcx
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  int v41; // r9d
  unsigned int v42; // [rsp+20h] [rbp-28h]

  *(_BYTE *)(a1 + 248) &= ~0x10u;
  *(_BYTE *)(a1 + 248) |= 8 * (a3 & 2);
  *(_BYTE *)(a2 + 864) = *(_BYTE *)(a1 + 864);
  v5 = CVisual::InitializeVisualTreeClone();
  v6 = v5;
  if ( v5 < 0 )
  {
    v42 = 5451;
    goto LABEL_57;
  }
  v7 = *(_BYTE *)(a1 + 249);
  if ( (v7 & 4) != 0 )
  {
    v5 = CTopLevelWindow::SetExcludeFromDDA((CTopLevelWindow *)a2, (*(_BYTE *)(a1 + 249) & 4) != 0);
    v6 = v5;
    if ( v5 < 0 )
    {
      v42 = 5456;
      goto LABEL_57;
    }
    v7 = *(_BYTE *)(a1 + 249);
  }
  v8 = (v7 & 0x40) != 0;
  if ( v8 )
    CTopLevelWindow::SetVisualProtectContent((CTopLevelWindow *)a2, v8);
  v9 = **(_QWORD **)(a2 + 48);
  if ( !*(_BYTE *)(a1 + 864) )
  {
    v10 = *(struct CVisual ***)(v9 + 48);
    v11 = *(AcrylicHostBackdrop **)(a2 + 856);
    v12 = *v10;
    if ( !v11 || (v5 = AcrylicHostBackdrop::SetCloneVisuals(v11, (struct CVisual *)v9, *v10), v6 = v5, v5 >= 0) )
    {
      *(_QWORD *)(a2 + 264) = **((_QWORD **)v12 + 6);
      v13 = *((_QWORD *)v12 + 6);
      if ( *(_QWORD *)v13 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v13 + 8LL));
      goto LABEL_10;
    }
    v42 = 5477;
LABEL_57:
    v41 = v5;
LABEL_59:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, v42);
    goto LABEL_52;
  }
  *(_QWORD *)(a2 + 264) = v9;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
LABEL_10:
    v9 = *(_QWORD *)(a2 + 264);
  }
  *(_QWORD *)(a2 + 272) = *(_QWORD *)(v9 + 256);
  v14 = *(_QWORD *)(v9 + 256);
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  v15 = *(_QWORD *)(a1 + 560);
  v16 = 8LL;
  if ( v15 && (*(_BYTE *)(v15 + 92) & 8) == 0 )
  {
    v17 = *(_QWORD *)(a2 + 272);
    v18 = *(_DWORD *)(v17 + 72);
    while ( v18 )
    {
      v19 = *(volatile signed __int32 **)(*(_QWORD *)(v17 + 48) + 8LL * (unsigned int)--v18);
      if ( (*(unsigned __int8 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 184LL))(v19) )
      {
        *(_QWORD *)(a2 + 560) = v19;
        _InterlockedIncrement(v19 + 2);
        break;
      }
    }
    v20 = *(_QWORD *)(a2 + 560);
    *(_QWORD *)(a2 + 552) = **(_QWORD **)(v20 + 48);
    v21 = *(_QWORD *)(v20 + 48);
    if ( *(_QWORD *)v21 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v21 + 8LL));
  }
  v22 = *(_QWORD *)(a1 + 536);
  if ( v22 )
  {
    if ( (*(_BYTE *)(v22 + 92) & 8) == 0 )
    {
      v23 = *(_QWORD *)(a1 + 288);
      if ( v23 )
      {
        if ( (*(_BYTE *)(v23 + 92) & 8) == 0 )
        {
          v24 = *(_QWORD *)(a1 + 304);
          if ( !v24 || (*(_BYTE *)(v24 + 92) & 8) != 0 )
            v25 = 0LL;
          else
            v25 = 8LL;
          v26 = *(_QWORD *)(a1 + 296);
          if ( !v26 || (*(_BYTE *)(v26 + 92) & 8) != 0 )
            v27 = 0LL;
          else
            v27 = 8LL;
          v28 = *(_QWORD *)(a1 + 312);
          if ( !v28 || (*(_BYTE *)(v28 + 92) & 8) != 0 )
            v29 = 0LL;
          else
            v29 = 8LL;
          v30 = *(_QWORD *)(a1 + 280);
          if ( !v30 || (*(_BYTE *)(v30 + 92) & 8) != 0 )
            v16 = 0LL;
          v31 = *(_QWORD *)(v27 + v29 + v16 + *(_QWORD *)(*(_QWORD *)(a2 + 272) + 48LL) + v25);
          if ( v31 )
          {
            *(_QWORD *)(a2 + 536) = **(_QWORD **)(v31 + 48);
            v32 = *(_QWORD *)(v31 + 48);
            if ( *(_QWORD *)v32 )
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v32 + 8LL));
          }
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 304) )
    Microsoft::WRL::ComPtr<CSystemBackdropVisual>::operator=(a2 + 304, **(_QWORD **)(*(_QWORD *)(a2 + 272) + 48LL));
  v33 = *(_BYTE *)(a2 + 248);
  *(_OWORD *)(a2 + 612) = *(_OWORD *)(a1 + 612);
  *(_OWORD *)(a2 + 628) = *(_OWORD *)(a1 + 628);
  *(_OWORD *)(a2 + 644) = *(_OWORD *)(a1 + 644);
  *(_OWORD *)(a2 + 660) = *(_OWORD *)(a1 + 660);
  *(_OWORD *)(a2 + 676) = *(_OWORD *)(a1 + 676);
  *(_BYTE *)(a2 + 248) ^= (*(_BYTE *)(a1 + 248) ^ v33) & 4;
  *(_BYTE *)(a2 + 249) ^= (*(_BYTE *)(a2 + 249) ^ *(_BYTE *)(a1 + 249)) & 1;
  v34 = (struct _MARGINS *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                             WPF::g_pProcessHeap,
                             16LL);
  *(_QWORD *)(a2 + 696) = v34;
  if ( !v34 )
  {
    v6 = -2147024882;
    v41 = -2147024882;
    v42 = 5546;
    goto LABEL_59;
  }
  CTopLevelWindow::GetFrameMargins((CTopLevelWindow *)a1, v34);
  if ( (*(_BYTE *)(a1 + 248) & 0x10) == 0 )
  {
    CTopLevelWindow::ApplyCorrectionScaleForUniformSpaceWindow(
      (CTopLevelWindow *)a2,
      *(struct CWindowData **)(a1 + 752));
    v35 = *(CRenderDataVisual **)(a1 + 296);
    if ( v35 )
      CRenderDataVisual::ClearInstructions(v35);
    CTopLevelWindow::SetShadowOpacity((CTopLevelWindow *)a2, 0.0);
    v36 = *(CBaseObject **)(a1 + 568);
    if ( v36 )
    {
      CBaseObject::Release(v36);
      *(_QWORD *)(a1 + 568) = 0LL;
    }
    v37 = *(CBaseObject **)(a1 + 576);
    if ( v37 )
    {
      CBaseObject::Release(v37);
      *(_QWORD *)(a1 + 576) = 0LL;
    }
    v38 = *(CBaseObject **)(a1 + 592);
    if ( v38 )
    {
      CBaseObject::Release(v38);
      *(_QWORD *)(a1 + 592) = 0LL;
    }
    v39 = *(CBaseObject **)(a1 + 600);
    if ( v39 )
    {
      CBaseObject::Release(v39);
      *(_QWORD *)(a1 + 600) = 0LL;
    }
    CVisual::SetDirtyFlags((CVisual *)a1, 0x4000u);
  }
LABEL_52:
  *(_BYTE *)(a1 + 248) &= ~0x10u;
  return v6;
}

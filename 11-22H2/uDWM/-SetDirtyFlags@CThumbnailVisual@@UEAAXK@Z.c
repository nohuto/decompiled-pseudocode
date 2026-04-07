/*
 * XREFs of ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009DA0
 * Callers:
 *     ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800091F0 (-OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800093C0 (-OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180009420 (-OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180009440 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180009670 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000995C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x180009FFC (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000A06C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18001A954 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800278D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002FF74 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003A440 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x1800E4C50 (-EndTransition@CThumbnailVisual@@UEAAXXZ.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800E4EB4 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CThumbnailVisual::SetDirtyFlags(CThumbnailVisual *this, int a2)
{
  __int64 v2; // rax
  CThumbnailVisual *v4; // rbx
  __int64 v5; // rcx
  CVisual *v6; // rcx
  int v7; // eax

  v2 = *((_QWORD *)this + 47);
  v4 = this;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 34) )
    {
      v5 = *(_QWORD *)(v2 + 16);
      if ( v5 )
      {
        v6 = *(CVisual **)(v5 + 440);
        if ( v6 )
        {
          v7 = *((_DWORD *)v6 + 22);
          if ( (v7 & 0x8000000) == 0 )
          {
            *((_DWORD *)v6 + 22) = v7 | 0x8000000;
            CVisual::PropagateDirtyChildren(v6);
          }
        }
      }
    }
  }
  if ( (a2 & *((_DWORD *)v4 + 22)) != a2 )
  {
    *((_DWORD *)v4 + 22) |= a2;
    while ( 1 )
    {
      v4 = (CThumbnailVisual *)*((_QWORD *)v4 + 3);
      if ( !v4 || (*((_BYTE *)v4 + 88) & 1) != 0 )
        break;
      (*(void (__fastcall **)(CThumbnailVisual *))(*(_QWORD *)v4 + 32LL))(v4);
    }
  }
}

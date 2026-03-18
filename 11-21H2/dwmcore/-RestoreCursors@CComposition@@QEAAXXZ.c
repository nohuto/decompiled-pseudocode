/*
 * XREFs of ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18003CD8C
 * Callers:
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18003CA54 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x180113010 (-RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C1768 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801C8380 (-RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z @ 0x18010386C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x180192CAC (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1801A9220 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CComposition::RestoreCursors(CComposition *this)
{
  int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v3; // rbp
  CExcludeVisualReference *v4; // rsi
  unsigned int v5; // edx

  v1 = *((_DWORD *)this + 248);
  if ( v1 > 0 )
  {
    v2 = (_QWORD *)((char *)this + 968);
    do
    {
      v3 = (unsigned int)(v1 - 1);
      v4 = *(CExcludeVisualReference **)(*v2 + 8 * v3);
      (*(void (__fastcall **)(CExcludeVisualReference *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( !CExcludeVisualReference::GetVisual(v4) )
      {
        DynArray<InteractionLatencyTelemetry::TouchUpdateInfo *,0>::RemoveAt(v2, (unsigned int)v3);
        CExcludeVisualReference::`scalar deleting destructor'(v4, v5);
      }
      --v1;
    }
    while ( v1 > 0 );
  }
}

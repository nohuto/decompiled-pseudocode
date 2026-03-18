/*
 * XREFs of ?PostRender@CComputeScribbleRenderer@@QEAAXXZ @ 0x18013162E
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180078E48 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012DEAC (McTemplateU0xq_EventWriteTransfer.c)
 *     ?EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAVCD3DDevice@@_K@Z @ 0x180209E40 (-EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAVCD3DDevice@@_K@Z.c)
 */

void __fastcall CComputeScribbleRenderer::PostRender(CComputeScribbleRenderer *this)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 48) )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 248LL)
                               + 8LL
                               * (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 2) + 272LL)
                                              % *(_DWORD *)(*((_QWORD *)this + 2) + 316LL)))
                   + 96LL);
    if ( v1 )
    {
      CComputeScribbleSynchronizer::EndRenderOperation(
        *(CComputeScribbleSynchronizer **)(v1 + 48),
        *(struct CD3DDevice **)(v1 + 16),
        *(_QWORD *)(v1 + 56));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0xq_EventWriteTransfer(v2, (__int64)&EVTDESC_COMPUTESCRIBBLE_POSTRENDER);
    }
  }
}

/*
 * XREFs of ?Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x180027420
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x1800274A0 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ??0CAsyncFlushResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@I@Z @ 0x18002759C (--0CAsyncFlushResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@I@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800E7C0C (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 */

__int64 __fastcall CGlobalComposition::Channel_AsyncFlush(
        CGlobalComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_ASYNCFLUSH *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  struct CGlobalSurfaceManager *v7; // rbp
  CAsyncFlushResponse *v8; // rax
  unsigned int v9; // ecx
  CResponseItem *v10; // rax

  v4 = 0;
  v5 = *((_DWORD *)a4 + 1);
  v7 = (struct CGlobalSurfaceManager *)*((_QWORD *)g_pComposition + 28);
  v8 = (CAsyncFlushResponse *)operator new(0x38uLL);
  if ( v8 && (v10 = CAsyncFlushResponse::CAsyncFlushResponse(v8, v7, a2, v5)) != 0LL )
  {
    CResponseItem::ReleaseResponseRef(v10);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x14Cu, 0LL);
    CAsyncFlushResponse::SendResponseWorker(a2, v5, -2147024882);
  }
  return v4;
}

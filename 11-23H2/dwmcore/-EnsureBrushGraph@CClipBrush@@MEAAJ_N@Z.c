/*
 * XREFs of ?EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z @ 0x180220BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800B91BC (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E60D0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CClipBrush::EnsureBrushGraph(CClipBrush *this, char a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  char v7; // [rsp+48h] [rbp+10h] BYREF

  if ( (!a2
     || (*(unsigned __int8 (__fastcall **)(CClipBrush *, _QWORD, char *))(*(_QWORD *)this + 288LL))(this, 0LL, &v7))
    && (Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 9),
        v3 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)this + 9),
        v5 = v3,
        v3 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x81u, 0LL);
  }
  else
  {
    return 0;
  }
  return v5;
}

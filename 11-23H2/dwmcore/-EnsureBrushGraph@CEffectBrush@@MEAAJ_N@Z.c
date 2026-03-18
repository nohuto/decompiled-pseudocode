/*
 * XREFs of ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800E8C30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x1800B91BC (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E60D0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CalculateIsOpaque@CEffectBrush@@AEBA_NXZ @ 0x1800E8CAC (-CalculateIsOpaque@CEffectBrush@@AEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::EnsureBrushGraph(CEffectBrush *this, char a2)
{
  char IsOpaque; // al
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rcx
  char v8; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2
    || (IsOpaque = (*(__int64 (__fastcall **)(CEffectBrush *, _QWORD, char *))(*(_QWORD *)this + 288LL))(this, 0LL, &v8)) != 0 )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 9);
    v6 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)this + 9);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x2Du, 0LL);
      return v4;
    }
    IsOpaque = CEffectBrush::CalculateIsOpaque(this);
  }
  *((_BYTE *)this + 168) = IsOpaque;
  return 0;
}

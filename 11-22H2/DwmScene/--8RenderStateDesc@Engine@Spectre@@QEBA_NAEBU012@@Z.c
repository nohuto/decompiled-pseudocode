/*
 * XREFs of ??8RenderStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z @ 0x180043B4C
 * Callers:
 *     ?SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z @ 0x180044718 (-SetRenderState@Material@Engine@Spectre@@QEAAXW4BlendMode@23@W4DepthMode@23@W4CullMode@23@@Z.c)
 *     ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360 (-Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?SetRenderState@RenderStateState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@@Z @ 0x18009EBD8 (-SetRenderState@RenderStateState@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VRenderState@Engine@Spect.c)
 * Callees:
 *     ??8StencilStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z @ 0x180043C24 (--8StencilStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z.c)
 */

char __fastcall Spectre::Engine::RenderStateDesc::operator==(__int64 a1, __int64 a2)
{
  char v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2
    && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4)
    && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8)
    && *(float *)(a1 + 12) == *(float *)(a2 + 12)
    && *(float *)(a1 + 16) == *(float *)(a2 + 16)
    && *(float *)(a1 + 20) == *(float *)(a2 + 20)
    && *(_BYTE *)(a1 + 24) == *(_BYTE *)(a2 + 24)
    && (unsigned __int8)Spectre::Engine::StencilStateDesc::operator==(a1 + 28, a2 + 28, a2, a1)
    && (unsigned __int8)Spectre::Engine::StencilStateDesc::operator==(v4 + 44, v3 + 44, v3, v4)
    && *(_BYTE *)(v6 + 60) == *(_BYTE *)(v5 + 60)
    && *(_BYTE *)(v6 + 61) == *(_BYTE *)(v5 + 61)
    && *(_BYTE *)(v6 + 62) == *(_BYTE *)(v5 + 62)
    && *(_BYTE *)(v6 + 63) == *(_BYTE *)(v5 + 63)
    && *(_BYTE *)(v6 + 64) == *(_BYTE *)(v5 + 64)
    && *(_DWORD *)(v6 + 68) == *(_DWORD *)(v5 + 68) )
  {
    return 1;
  }
  return v2;
}

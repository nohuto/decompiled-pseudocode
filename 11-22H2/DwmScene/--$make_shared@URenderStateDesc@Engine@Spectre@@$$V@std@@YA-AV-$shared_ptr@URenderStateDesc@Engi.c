/*
 * XREFs of ??$make_shared@URenderStateDesc@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@URenderStateDesc@Engine@Spectre@@@0@XZ @ 0x18008808C
 * Callers:
 *     ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360 (-Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?Create@RenderStateD3D11@D3D11@Engine@Spectre@@UEAAXV?$shared_ptr@URenderStateDesc@Engine@Spectre@@@std@@@Z @ 0x1800D4D50 (-Create@RenderStateD3D11@D3D11@Engine@Spectre@@UEAAXV-$shared_ptr@URenderStateDesc@Engine@Spectr.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<Spectre::Engine::RenderStateDesc,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  _QWORD *result; // rax

  v2 = operator new(0x58uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::RenderStateDesc>::`vftable';
    memset_0(v2 + 4, 0, 0x48uLL);
    *(_QWORD *)(v3 + 5) = 2LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    v3[9] = 0;
    *((_BYTE *)v3 + 40) = 0;
    *(_QWORD *)(v3 + 11) = 0LL;
    *(_QWORD *)(v3 + 13) = 0LL;
    *(_QWORD *)(v3 + 15) = 0LL;
    *(_QWORD *)(v3 + 17) = 0LL;
    v3[19] = 65793;
    *((_BYTE *)v3 + 80) = 1;
    v3[21] = 3;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  result = a1;
  a1[1] = v3;
  return result;
}

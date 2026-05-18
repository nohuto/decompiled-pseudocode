/*
 * XREFs of ?SetRenderState@RenderStateState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@@Z @ 0x18009EBD8
 * Callers:
 *     ?SetRenderState@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VRenderState@Engine@Spectre@@@std@@@Z @ 0x180039720 (-SetRenderState@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VRenderState@Engine@Spectre@@@.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??8RenderStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z @ 0x180043B4C (--8RenderStateDesc@Engine@Spectre@@QEBA_NAEBU012@@Z.c)
 */

void __fastcall Spectre::Engine::RenderStateState::SetRenderState(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r11
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = a2;
  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 != v4 )
  {
    v6 = *(_QWORD *)(v5 + 112);
    v7 = *(_QWORD *)(v4 + 112);
    if ( v6 != v7 && (!v6 || !v7 || !Spectre::Engine::RenderStateDesc::operator==(v6, v7)) )
    {
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 24), v2);
      *(_BYTE *)(a1 + 61) = 1;
    }
  }
}

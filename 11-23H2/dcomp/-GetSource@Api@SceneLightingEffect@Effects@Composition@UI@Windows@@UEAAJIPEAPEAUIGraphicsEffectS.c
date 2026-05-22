/*
 * XREFs of ?GetSource@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJIPEAPEAUIGraphicsEffectSource@3Graphics@6@@Z @ 0x180011940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Effects::SceneLightingEffect::Api::GetSource(
        Windows::UI::Composition::Effects::SceneLightingEffect::Api *this,
        int a2,
        struct Windows::Graphics::Effects::IGraphicsEffectSource **a3)
{
  __int64 v5; // rcx

  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *a3 = (struct Windows::Graphics::Effects::IGraphicsEffectSource *)*((_QWORD *)this + 6);
  return a2 != 0 ? 0x80070057 : 0;
}

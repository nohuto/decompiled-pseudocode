/*
 * XREFs of ?put_NormalMapSource@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJPEAUIGraphicsEffectSource@3Graphics@6@@Z @ 0x180131CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Effects::SceneLightingEffect::Api::put_NormalMapSource(
        Windows::UI::Composition::Effects::SceneLightingEffect::Api *this,
        struct Windows::Graphics::Effects::IGraphicsEffectSource *a2)
{
  __int64 v4; // rcx

  if ( *((struct Windows::Graphics::Effects::IGraphicsEffectSource **)this + 9) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Graphics::Effects::IGraphicsEffectSource *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}

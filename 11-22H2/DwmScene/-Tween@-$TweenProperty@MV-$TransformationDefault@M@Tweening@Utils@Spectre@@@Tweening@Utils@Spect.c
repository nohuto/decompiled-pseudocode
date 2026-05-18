/*
 * XREFs of ?Tween@?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@MEAA_NNPEBVICurve@234@@Z @ 0x1800934B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Interpolate@M@Tweening@Utils@Spectre@@YAMMMN@Z @ 0x180091974 (--$Interpolate@M@Tweening@Utils@Spectre@@YAMMMN@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>::Tween(
        __int64 a1,
        __int64 a2,
        double (__fastcall ***a3)(_QWORD))
{
  double v4; // xmm0_8
  float v5; // xmm0_4

  v4 = (**a3)(a3);
  LODWORD(v5) = Spectre::Utils::Tweening::Interpolate<float>(*(float *)(a1 + 40), *(float *)(a1 + 44), v4).m128_u32[0];
  return Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>::Set(
           a1,
           v5);
}

/*
 * XREFs of ??0MagnifierExperienceHelper@@QEAA@AEBNAEBM1@Z @ 0x1800C7A38
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800C6CF0 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C78CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wi.c)
 *     ?UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ @ 0x1800C84C8 (-UpdateDesktopAndMonitorTopologyInformation@MagnifierExperienceHelper@@QEAAXXZ.c)
 */

MagnifierExperienceHelper *__fastcall MagnifierExperienceHelper::MagnifierExperienceHelper(
        MagnifierExperienceHelper *this,
        const double *a2,
        float *a3,
        float *a4)
{
  __int64 v7; // rax

  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v7 = *(_QWORD *)a2;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = v7;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    (__int64)a4);
  *((float *)this + 30) = fminf(fmaxf(*a3, 0.0), 100.0);
  *((float *)this + 31) = fminf(fmaxf(*a4, 0.0), 100.0);
  MagnifierExperienceHelper::UpdateDesktopAndMonitorTopologyInformation(this);
  return this;
}

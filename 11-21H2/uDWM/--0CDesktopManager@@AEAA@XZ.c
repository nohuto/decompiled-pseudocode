/*
 * XREFs of ??0CDesktopManager@@AEAA@XZ @ 0x1800522C4
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1800524C4 (-Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D62C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180052498 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
CDesktopManager *__fastcall CDesktopManager::CDesktopManager(CDesktopManager *this)
{
  __int64 v2; // r8
  __int64 v3; // r9

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CDesktopManager::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 115) = -12542210;
  *((_DWORD *)this + 116) = 0;
  *(_QWORD *)((char *)this + 468) = 27LL;
  *((_DWORD *)this + 119) = 73;
  *((_QWORD *)this + 60) = 1LL;
  *((_BYTE *)this + 492) = 0;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_DWORD *)this + 132) = 0;
  *((_WORD *)this + 308) = 0;
  *((_BYTE *)this + 618) = 0;
  *(_QWORD *)((char *)this + 620) = 0LL;
  *(_QWORD *)((char *)this + 628) = 0LL;
  *(_QWORD *)((char *)this + 636) = 1065353216LL;
  *((_DWORD *)this + 161) = 1062836634;
  *((_DWORD *)this + 162) = 1084227584;
  *((_DWORD *)this + 163) = 1090519040;
  *((_DWORD *)this + 164) = -1065353216;
  *((_DWORD *)this + 165) = 1058642330;
  *((_DWORD *)this + 166) = 1050253722;
  *((_DWORD *)this + 167) = 10;
  *((_DWORD *)this + 168) = 1056964608;
  *((_DWORD *)this + 169) = 1050253722;
  *((_DWORD *)this + 170) = 1020054733;
  *((_DWORD *)this + 171) = 1041865114;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_DWORD *)this + 184) = 0;
  *((_QWORD *)this + 95) = 0LL;
  *((_DWORD *)this + 192) = 0;
  *((_BYTE *)this + 804) = 0;
  *((_DWORD *)this + 202) = 51;
  *((_DWORD *)this + 203) = 52;
  *((_DWORD *)this + 204) = 53;
  *((_DWORD *)this + 205) = 54;
  *((_QWORD *)this + 103) = 999LL;
  *((_BYTE *)this + 832) = 0;
  *(_OWORD *)((char *)this + 772) = 0LL;
  *(_OWORD *)((char *)this + 788) = 0LL;
  *((_DWORD *)this + 37) = 2048;
  CDesktopManager::s_pDesktopManagerInstance = this;
  CDesktopManager::UpdateWindowShadows(this);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    1u,
    v2,
    v3);
  return this;
}

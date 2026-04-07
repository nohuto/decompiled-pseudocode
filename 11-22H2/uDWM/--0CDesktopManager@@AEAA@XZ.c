/*
 * XREFs of ??0CDesktopManager@@AEAA@XZ @ 0x180049220
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x180049174 (-Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18004B6CC (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004BBEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

// Hidden C++ exception states: #wind=8
CDesktopManager *__fastcall CDesktopManager::CDesktopManager(CDesktopManager *this)
{
  __int64 v2; // rdx

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CDesktopManager::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 119) = -12542210;
  *((_DWORD *)this + 120) = 0;
  *(_QWORD *)((char *)this + 484) = 27LL;
  *((_DWORD *)this + 123) = 73;
  *((_QWORD *)this + 62) = 1LL;
  *((_BYTE *)this + 508) = 0;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_DWORD *)this + 136) = 0;
  *((_WORD *)this + 316) = 0;
  *((_BYTE *)this + 634) = 0;
  *(_QWORD *)((char *)this + 636) = 0LL;
  *(_QWORD *)((char *)this + 644) = 0LL;
  *(_QWORD *)((char *)this + 652) = 1065353216LL;
  *((_DWORD *)this + 165) = 1062836634;
  *((_DWORD *)this + 166) = 1084227584;
  *((_DWORD *)this + 167) = 1090519040;
  *((_DWORD *)this + 168) = -1065353216;
  *((_DWORD *)this + 169) = 1058642330;
  *((_DWORD *)this + 170) = 1050253722;
  *((_DWORD *)this + 171) = 10;
  *((_DWORD *)this + 172) = 1056964608;
  *((_DWORD *)this + 173) = 1050253722;
  *((_DWORD *)this + 174) = 1020054733;
  *((_DWORD *)this + 175) = 1041865114;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_DWORD *)this + 188) = 0;
  *((_QWORD *)this + 97) = 0LL;
  *((_DWORD *)this + 196) = 51;
  *((_DWORD *)this + 197) = 52;
  *((_DWORD *)this + 198) = 53;
  *((_DWORD *)this + 199) = 54;
  *((_QWORD *)this + 100) = 999LL;
  *((_BYTE *)this + 808) = 0;
  *((_DWORD *)this + 39) = 2048;
  CDesktopManager::s_pDesktopManagerInstance = this;
  CDesktopManager::UpdateWindowShadows(this);
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    v2);
  return this;
}

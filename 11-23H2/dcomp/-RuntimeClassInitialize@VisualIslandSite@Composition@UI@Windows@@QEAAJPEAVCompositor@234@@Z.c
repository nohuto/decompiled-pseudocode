/*
 * XREFs of ?RuntimeClassInitialize@VisualIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180086928
 * Callers:
 *     ??$MakeAndInitialize2@VVisualIslandSite@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualIslandSite@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800867D0 (--$MakeAndInitialize2@VVisualIslandSite@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Detail.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUnknown@@1_N@Z @ 0x18008002C (-Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUn.c)
 *     ?RuntimeClassInitialize@CompositionIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x1800869BC (-RuntimeClassInitialize@CompositionIslandSite@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@@Z @ 0x180086A74 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@.c)
 *     ?SetOwnerNoRef@Visual@Composition@UI@Windows@@QEAAXPEAUIVisualOwnerPrivate@Private@234@_N@Z @ 0x180086B60 (-SetOwnerNoRef@Visual@Composition@UI@Windows@@QEAAXPEAUIVisualOwnerPrivate@Private@234@_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualIslandSite::RuntimeClassInitialize(
        struct IUnknown *this,
        struct Windows::UI::Composition::Compositor *a2)
{
  int v3; // edi
  Windows::UI::Composition::Visual **v4; // rsi
  struct CReadWriteLock *v5; // rdx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::UI::Composition::Compositor *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = Windows::UI::Composition::CompositionIslandSite::RuntimeClassInitialize(
         (Windows::UI::Composition::CompositionIslandSite *)this,
         a2);
  if ( v3 < 0 )
  {
    v7 = 49LL;
  }
  else
  {
    v4 = (Windows::UI::Composition::Visual **)&this[35];
    v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Visual,Windows::UI::Composition::Visual,Windows::UI::Composition::Compositor * &>(
           &this[35],
           &v9);
    if ( v3 >= 0 )
    {
      Windows::UI::Composition::Visual::SetOwnerNoRef(
        *v4,
        (struct Windows::UI::Composition::Private::IVisualOwnerPrivate *)((unsigned __int64)&this[33] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
        0);
      Windows::UI::Composition::MapWeakPeerForWeakTargetBase::Configure(
        (struct CReadWriteLock **)&Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIslandSite,
        v5,
        (struct IUnknown *)*v4,
        this,
        1);
      return 0LL;
    }
    v7 = 63LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtvisualislandsite.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}

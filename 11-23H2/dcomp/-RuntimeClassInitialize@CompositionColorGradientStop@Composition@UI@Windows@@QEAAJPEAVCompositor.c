/*
 * XREFs of ?RuntimeClassInitialize@CompositionColorGradientStop@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MAEBU_D3DCOLORVALUE@@@Z @ 0x180045030
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionColorGradientStop@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEBU_D3DCOLORVALUE@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorGradientStop@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAMAEBU_D3DCOLORVALUE@@@Z @ 0x18004514C (--$MakeAndInitialize2@VCompositionColorGradientStop@Composition@UI@Windows@@V1234@PEAVCompositor.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@U_D3DCOLORVALUE@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x180044B50 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPro.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionColorGradientStop::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionColorGradientStop *this,
        struct Windows::UI::Composition::Compositor *a2,
        float a3,
        void ***a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int updated; // eax
  void **v10; // [rsp+20h] [rbp-40h] BYREF
  void *v11; // [rsp+28h] [rbp-38h] BYREF
  char *v12; // [rsp+30h] [rbp-30h] BYREF
  void ***v13; // [rsp+38h] [rbp-28h]
  void ***v14; // [rsp+40h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v6 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(this, a2, 0x17u, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncolorgradientstop.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  else
  {
    v13 = a4;
    v12 = (char *)this + 152;
    v14 = a4;
    v10 = (void **)&Windows::UI::Composition::CompositionColorGradientStop::sc_Color;
    Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<_D3DCOLORVALUE>,Windows::UI::Composition::PropertyUpdateInfo>(
      (__int64 *)this,
      (__int64)&v12,
      &v10);
    *(float *)&v10 = a3;
    v12 = (char *)this + 168;
    v13 = &v10;
    v14 = &v10;
    v11 = &Windows::UI::Composition::CompositionColorGradientStop::sc_Offset;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
                this,
                &v12,
                &v11);
    if ( updated < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x71,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncolorgradientstop.cpp",
        (const char *)(unsigned int)updated);
    return 0LL;
  }
}

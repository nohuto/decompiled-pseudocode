/*
 * XREFs of ?CreateColorBrushWithColor@CompositorCommon@Composition@UI@Windows@@QEAAJUColor@34@PEAPEAVCompositionColorBrush@234@@Z @ 0x18004173C
 * Callers:
 *     ?CreateColorBrushWithColor@Api@Compositor@Composition@UI@Windows@@UEAAJUColor@45@PEAPEAUICompositionColorBrush@345@@Z @ 0x1800416B0 (-CreateColorBrushWithColor@Api@Compositor@Composition@UI@Windows@@UEAAJUColor@45@PEAPEAUIComposi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@U_D3DCOLORVALUE@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x180044B50 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPro.c)
 *     ??$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800484E0 (--$MakeAndInitialize2@VCompositionColorBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@D.c)
 *     ?WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA?AU_D3DCOLORVALUE@@UColor@34@@Z @ 0x18004B7DC (-WUColorToD2DColor@AnimationHelper@Composition@UI@Windows@@YA-AU_D3DCOLORVALUE@@UColor@34@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateColorBrushWithColor(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  int updated; // eax
  unsigned int v6; // edi
  __int128 *v7; // rax
  __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  *a3 = 0LL;
  v12 = 0LL;
  v13[0] = a1;
  updated = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::Compositor *>(
              &v12,
              v13);
  v6 = updated;
  if ( updated < 0 )
  {
    v11 = 2909LL;
  }
  else
  {
    v7 = (__int128 *)Windows::UI::Composition::AnimationHelper::WUColorToD2DColor(v13, a2);
    v8 = v12;
    v9 = *v7;
    v14[0] = v12 + 168;
    v14[1] = &v15;
    v14[2] = &v15;
    v13[0] = &Windows::UI::Composition::CompositionColorBrush::sc_Color;
    v15 = v9;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<_D3DCOLORVALUE>,Windows::UI::Composition::PropertyUpdateInfo>(
                v12,
                v14,
                v13);
    v6 = updated;
    if ( updated >= 0 )
    {
      *a3 = v8;
      return 0LL;
    }
    v11 = 2914LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
    (const char *)(unsigned int)updated);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
  return v6;
}

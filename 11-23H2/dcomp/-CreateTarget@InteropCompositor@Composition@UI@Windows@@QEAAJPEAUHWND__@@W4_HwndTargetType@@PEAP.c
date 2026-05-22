/*
 * XREFs of ?CreateTarget@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUHWND__@@W4_HwndTargetType@@PEAPEAVInteropCompositionTarget@234@@Z @ 0x1800896F4
 * Callers:
 *     ?CreateTargetForHwnd@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z @ 0x1800895E0 (-CreateTargetForHwnd@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@HPEAPEAUIDCo.c)
 *     ?CreateWindowTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUIDCompositionTarget@@@Z @ 0x18015EA10 (-CreateWindowTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUIDComp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ??$MakeAndInitialize2@VGlobalInteropCompositionTarget@Composition@UI@Windows@@VInteropCompositionTarget@234@AEAPEAVCompositor@234@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropCompositionTarget@Composition@UI@Windows@@AEAPEAVCompositor@456@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Z @ 0x1800851F8 (--$MakeAndInitialize2@VGlobalInteropCompositionTarget@Composition@UI@Windows@@VInteropCompositio.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::CreateTarget(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  char v9; // al
  bool v11; // zf
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Windows::UI::Composition::Desktop::DesktopWindowTarget *v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h]
  int v15; // [rsp+50h] [rbp+18h]
  struct Windows::UI::Composition::Compositor *v16; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  v15 = a3;
  v14 = a2;
  v16 = (struct Windows::UI::Composition::Compositor *)a1;
  v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::GlobalInteropCompositionTarget,Windows::UI::Composition::InteropCompositionTarget,Windows::UI::Composition::Compositor * &,HWND__ * &,enum _HwndTargetType &>(
         &v13,
         &v16);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropcompositor.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    return v8;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 452);
    if ( (v9 & 1) == 0 )
    {
      v11 = *(_DWORD *)(a1 + 448) == 0;
      *(_BYTE *)(a1 + 452) = v9 | 1;
      if ( v11 )
        Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
          (Windows::UI::Composition::CompositorCommon *)a1,
          v7);
    }
    *a4 = v13;
    return 0LL;
  }
}

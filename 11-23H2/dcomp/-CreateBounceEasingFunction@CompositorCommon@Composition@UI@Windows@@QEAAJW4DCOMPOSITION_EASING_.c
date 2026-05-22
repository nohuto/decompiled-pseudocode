/*
 * XREFs of ?CreateBounceEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@HMPEAPEAVCompositionEasingFunction@234@@Z @ 0x180124ECC
 * Callers:
 *     ?CreateBounceEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@HMPEAPEAUICompositionEasingFunction@345@@Z @ 0x180124F60 (-CreateBounceEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4CompositionEasingFunctionMode@234@AEAHAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVBounceEasingFunction@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4CompositionEasingFunctionMode@456@AEAHAEAM@Z @ 0x18011F854 (--$MakeAndInitialize2@VBounceEasingFunction@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4C.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateBounceEasingFunction(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        float a4,
        Microsoft::WRL2::NestableRuntimeClass *a5)
{
  Microsoft::WRL2::NestableRuntimeClass *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v11; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+30h] BYREF
  int v13; // [rsp+68h] [rbp+38h] BYREF

  v13 = LODWORD(a4);
  v12 = a3;
  v5 = a5;
  a5 = 0LL;
  v11 = a2;
  v10 = a1;
  *(_QWORD *)v5 = 0LL;
  v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::BounceEasingFunction,Windows::UI::Composition::BounceEasingFunction,Windows::UI::Composition::Compositor *,enum Windows::UI::Composition::CompositionEasingFunctionMode,int &,float &>(
         &a5,
         &v10,
         &v11,
         &v12,
         &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_QWORD *)v5 = a5;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x486,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&a5);
    return v7;
  }
}

/*
 * XREFs of ?OpenSharedVisualFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisual@234@@Z @ 0x180128AE4
 * Callers:
 *     ?OpenSharedVisualFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionHandle@1Handles@Foundation@5@PEAPEAUIVisual@345@@Z @ 0x180110420 (-OpenSharedVisualFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionHan.c)
 *     ?OpenSharedVisualFromHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIVisual@345@@Z @ 0x180128B80 (-OpenSharedVisualFromHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIVi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ??$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MIL_RESOURCE_TYPE@@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_NAEAPEAX@Z @ 0x180121EE4 (--$MakeAndInitialize2@VVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@W4MI_ea_180121EE4.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::OpenSharedVisualFromHandle(
        Windows::UI::Composition::CompositorCommon *this,
        void *a2,
        struct Windows::UI::Composition::Visual **a3)
{
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  struct Windows::UI::Composition::Visual *v7; // rax
  struct Windows::UI::Composition::Compositor *v9; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v11; // [rsp+60h] [rbp+20h] BYREF
  void *v12; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+30h] BYREF
  Windows::UI::Composition::Visual *v14; // [rsp+78h] [rbp+38h] BYREF

  v12 = a2;
  *a3 = 0LL;
  v14 = 0LL;
  v9 = this;
  v11 = 1;
  v13 = 196;
  v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Visual,Windows::UI::Composition::Visual,Windows::UI::Composition::Compositor *,enum MIL_RESOURCE_TYPE,bool,void * &>(
         &v14,
         &v9,
         &v13,
         (bool *)&v11,
         &v12);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = v14;
    v14 = 0LL;
    v6 = 0;
    *a3 = v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1270,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(
    (volatile signed __int32 **)&v14,
    v5);
  return v6;
}

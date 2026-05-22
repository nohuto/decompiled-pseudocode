/*
 * XREFs of ?OpenSharedVisualReferenceFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVVisualReference@Internal@234@@Z @ 0x180128D14
 * Callers:
 *     ?OpenSharedVisualReferenceFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionHandle@1Handles@Foundation@5@PEAPEAUIVisualReference@1345@@Z @ 0x180110610 (-OpenSharedVisualReferenceFromHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompo.c)
 *     ?OpenSharedVisualReferenceFromHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIVisualReference@Internal@345@@Z @ 0x180128DB0 (-OpenSharedVisualReferenceFromHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$MakeAndInitialize2@VVisualReference@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@W4MIL_RESOURCE_TYPE@@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReference@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_NAEAPEAX@Z @ 0x180121FC8 (--$MakeAndInitialize2@VVisualReference@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@34.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::OpenSharedVisualReferenceFromHandle(
        Windows::UI::Composition::CompositorCommon *this,
        void *a2,
        struct Windows::UI::Composition::Internal::VisualReference **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct Windows::UI::Composition::Internal::VisualReference *v6; // rax
  struct Windows::UI::Composition::Compositor *v8; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v10; // [rsp+60h] [rbp+20h] BYREF
  void *v11; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+78h] [rbp+38h] BYREF

  v11 = a2;
  *a3 = 0LL;
  v13 = 0LL;
  v8 = this;
  v10 = 1;
  v12 = 200;
  v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::VisualReference,Windows::UI::Composition::Internal::VisualReference,Windows::UI::Composition::Compositor *,enum MIL_RESOURCE_TYPE,bool,void * &>(
         &v13,
         &v8,
         &v12,
         &v10,
         &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v13;
    v13 = 0LL;
    v5 = 0;
    *a3 = v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x128E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
  return v5;
}

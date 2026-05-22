/*
 * XREFs of ?CreateInteropCompositor@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@AEBU_GUID@@PEAPEAX@Z @ 0x18003DB10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VInteropCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropCompositor@Composition@UI@Windows@@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@456@@Z @ 0x18003DBC4 (--$MakeAndInitialize2@VInteropCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPEAUI.c)
 *     ?InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074FB0 (-InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x1800831C0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorFactory::CreateInteropCompositor(
        Windows::UI::Composition::CompositorFactory *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::IInteropCompositorPartnerCallback *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  int Interface; // eax
  int v11; // edi
  void **v12; // rax
  Microsoft::WRL2::NestableRuntimeClass *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IUnknown *v16; // [rsp+58h] [rbp+28h] BYREF
  struct Windows::UI::Composition::IInteropCompositorPartnerCallback *v17; // [rsp+60h] [rbp+30h] BYREF

  v17 = a3;
  v16 = a2;
  v5 = a5;
  v14[0] = 0LL;
  a5 = 0LL;
  *v5 = 0LL;
  v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropCompositor,Windows::UI::Composition::InteropCompositor,IUnknown * &,Windows::UI::Composition::IInteropCompositorPartnerCallback * &>(
         v14,
         &v16,
         &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2301,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v7);
LABEL_8:
    Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>(&a5);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v14);
    return v8;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&a5);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&a5);
  v9 = v14[0];
  Interface = Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(v14[0], a4, (void **)&a5);
  v11 = Interface;
  if ( Interface < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2303,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)Interface);
    v8 = v11;
    goto LABEL_8;
  }
  v12 = a5;
  a5 = 0LL;
  *v5 = v12;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&a5);
  if ( v9 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  return 0LL;
}

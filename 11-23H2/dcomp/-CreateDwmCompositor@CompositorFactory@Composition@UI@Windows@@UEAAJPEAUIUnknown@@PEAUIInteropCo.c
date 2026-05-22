/*
 * XREFs of ?CreateDwmCompositor@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@AEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@@@Z @ 0x18010EE30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074FB0 (-InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x1800831C0 (--1-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDwmChannel@CDevice@DirectComposition@@QEAAPEAUIDwmChannel@@XZ @ 0x1800F1E74 (-GetDwmChannel@CDevice@DirectComposition@@QEAAPEAUIDwmChannel@@XZ.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize2@VInteropDwmCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropDwmCompositor@Composition@UI@Windows@@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@456@@Z @ 0x18010DE80 (--$MakeAndInitialize2@VInteropDwmCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPE.c)
 *     ??4?$ComPtr@UIDwmChannel@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDwmChannel@@@Z @ 0x18010E398 (--4-$ComPtr@UIDwmChannel@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorFactory::CreateDwmCompositor(
        Windows::UI::Composition::CompositorFactory *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::IInteropCompositorPartnerCallback *a3,
        const struct _GUID *a4,
        void **a5,
        struct IDwmChannel **a6)
{
  void **v6; // rsi
  struct IDwmChannel **v7; // r14
  int v9; // eax
  unsigned int v10; // ebx
  struct IDwmChannel **v11; // rbx
  int Interface; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  int v16; // edi
  struct IDwmChannel *DwmChannel; // rax
  void **v18; // rax
  __int64 v20[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IUnknown *v22; // [rsp+58h] [rbp+28h] BYREF
  struct Windows::UI::Composition::IInteropCompositorPartnerCallback *v23; // [rsp+60h] [rbp+30h] BYREF

  v23 = a3;
  v22 = a2;
  v6 = a5;
  v7 = a6;
  a6 = 0LL;
  a5 = 0LL;
  *v6 = 0LL;
  *v7 = 0LL;
  v20[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease((Microsoft::WRL2::NestableRuntimeClass **)&a6);
  v9 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropDwmCompositor,Windows::UI::Composition::InteropDwmCompositor,IUnknown * &,Windows::UI::Composition::IInteropCompositorPartnerCallback * &>(
         (Microsoft::WRL2::NestableRuntimeClass **)&a6,
         &v22,
         &v23);
  v10 = v9;
  if ( v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&a5);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&a5);
    v11 = a6;
    Interface = Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
                  (Microsoft::WRL2::NestableRuntimeClass *)a6,
                  a4,
                  (void **)&a5);
    v16 = Interface;
    if ( Interface >= 0 )
    {
      DwmChannel = DirectComposition::CDevice::GetDwmChannel(v11[57], v13, v14, v15);
      Microsoft::WRL::ComPtr<IDwmChannel>::operator=(v20, (__int64)DwmChannel);
      *v7 = (struct IDwmChannel *)v20[0];
      v18 = a5;
      a5 = 0LL;
      *v6 = v18;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&a5);
      v10 = 0;
      goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x941,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)Interface);
    v10 = v16;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(v20);
  Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>((__int64 *)&a5);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease((Microsoft::WRL2::NestableRuntimeClass **)&a6);
  return v10;
}

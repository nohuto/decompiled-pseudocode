/*
 * XREFs of ?SetRenderingDevice@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAUIUnknown@@@Z @ 0x18015751C
 * Callers:
 *     ?SetRenderingDevice@Interop@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAUIUnknown@@@Z @ 0x1801576F0 (-SetRenderingDevice@Interop@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAUIUnknown@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800655A8 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?Attach@?$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@QEAAXPEAVCSurfaceFactory@DirectComposition@@@Z @ 0x180065830 (-Attach@-$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@QEAAXPEAVCSurfaceFactory@Di.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?AddDeferredCallbackObject@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVIDeferredCallbackObject@234@@Z @ 0x1801247BC (-AddDeferredCallbackObject@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVIDeferredCallbackOb.c)
 *     ??$MakeAndInitialize2@VRenderingDeviceReplacedEventArgs@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@@Details@WRL2@Microsoft@@YAJPEAPEAVRenderingDeviceReplacedEventArgs@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@@Z @ 0x180156824 (--$MakeAndInitialize2@VRenderingDeviceReplacedEventArgs@Composition@UI@Windows@@V1234@PEAVCompos.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::SetRenderingDevice(
        Windows::UI::Composition::CompositionGraphicsDevice *this,
        struct IUnknown *a2)
{
  __int64 v2; // rax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  DirectComposition::CSurfaceFactory *v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  _QWORD *v11; // rbp
  int v12; // eax
  int v13; // esi
  __int64 v14; // rcx
  char v15; // al
  bool v16; // zf
  Microsoft::WRL2::NestableRuntimeClass **v17; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v18; // rcx
  struct Windows::UI::Composition::Compositor *v19; // rax
  int v20; // eax
  DirectComposition::CSurfaceFactory *v22; // rcx
  int v23; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DirectComposition::CSurfaceFactory *v25; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::UI::Composition::CompositionGraphicsDevice *v26; // [rsp+50h] [rbp+18h] BYREF
  struct Windows::UI::Composition::Compositor *v27; // [rsp+58h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 3);
  v25 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, DirectComposition::CSurfaceFactory **))(*(_QWORD *)(*(_QWORD *)(v2 + 456) + 8LL) + 56LL))(
         *(_QWORD *)(v2 + 456) + 8LL,
         a2,
         &v25);
  v6 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = v25;
    v25 = 0LL;
    Microsoft::WRL::ComPtr<DirectComposition::CSurfaceFactory>::Attach(
      (DirectComposition::CSurfaceFactory **)this + 26,
      v8);
    Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 27, (__int64)a2);
    v10 = (_QWORD *)*((_QWORD *)this + 33);
    v11 = (_QWORD *)*((_QWORD *)this + 34);
    while ( v10 != v11 )
    {
      v12 = (**(__int64 (__fastcall ***)(_QWORD))*v10)(*v10);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x215,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
          (const char *)(unsigned int)v12);
        v7 = v13;
        goto LABEL_17;
      }
      ++v10;
    }
    v14 = *((_QWORD *)this + 3);
    v15 = *(_BYTE *)(v14 + 452);
    if ( (v15 & 1) == 0 )
    {
      v16 = *(_DWORD *)(v14 + 448) == 0;
      *(_BYTE *)(v14 + 452) = v15 | 1;
      if ( v16 )
        Windows::UI::Composition::CompositorCommon::EnableMessageGroup(
          (Windows::UI::Composition::CompositorCommon *)v14,
          v9);
    }
    v17 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 256);
    if ( !*((_QWORD *)this + 32) )
      Windows::UI::Composition::CompositorCommon::AddDeferredCallbackObject(
        *((Windows::UI::Composition::CompositorCommon **)this + 3),
        (struct Windows::UI::Composition::IDeferredCallbackObject *)(((unsigned __int64)this + 128) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    v18 = *v17;
    v19 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)this + 3);
    v26 = this;
    v27 = v19;
    if ( v18 )
    {
      *v17 = 0LL;
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v18);
    }
    v20 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::RenderingDeviceReplacedEventArgs,Windows::UI::Composition::RenderingDeviceReplacedEventArgs,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionGraphicsDevice *>(
            (Windows::UI::Composition::CompositionObject **)this + 32,
            &v27,
            &v26);
    if ( v20 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        557LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
        (const char *)(unsigned int)v20,
        v23);
    v22 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(DirectComposition::CSurfaceFactory *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongraphicsdevice.cpp",
      (const char *)(unsigned int)v6);
LABEL_17:
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v25);
    return v7;
  }
}

/*
 * XREFs of ??$MakeAndInitialize2@VInteropDwmCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropDwmCompositor@Composition@UI@Windows@@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@456@@Z @ 0x18010DE80
 * Callers:
 *     ?CreateDwmCompositor@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@AEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@@@Z @ 0x18010EE30 (-CreateDwmCompositor@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAUIInteropCo.c)
 * Callees:
 *     ??0InteropCompositor@Composition@UI@Windows@@QEAA@XZ @ 0x18003DC70 (--0InteropCompositor@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@InteropDwmCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@@Z @ 0x18015BCDC (-RuntimeClassInitialize@InteropDwmCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInt.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropDwmCompositor,Windows::UI::Composition::InteropDwmCompositor,IUnknown * &,Windows::UI::Composition::IInteropCompositorPartnerCallback * &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct IUnknown **a2,
        struct Windows::UI::Composition::IInteropCompositorPartnerCallback **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::InteropCompositor *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  struct Windows::UI::Composition::IInteropCompositorPartnerCallback *v10; // r8
  struct IUnknown *v11; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+40h] [rbp+8h] BYREF
  void *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v6 = DefaultHeap::Alloc(0x518uLL);
  v14 = v6;
  if ( v6 )
  {
    v8 = (Windows::UI::Composition::InteropCompositor *)memset_0(v6, 0, 0x518uLL);
    v9 = v8;
    if ( v8 )
    {
      Windows::UI::Composition::InteropCompositor::InteropCompositor(v8);
      *(_QWORD *)v9 = &Windows::UI::Composition::InteropDwmCompositor::`vftable'{for `Microsoft::WRL2::ContextSession'};
      *((_QWORD *)v9 + 19) = &Windows::UI::Composition::InteropDwmCompositor::`vftable'{for `DirectComposition::IDeviceOwner'};
      *((_QWORD *)v9 + 161) = &Windows::UI::Composition::InteropDwmCompositor::SystemOnly::`vftable';
    }
    else
    {
      v9 = 0LL;
    }
    v14 = 0LL;
    *((_QWORD *)v9 + 1) = &Windows::UI::Composition::InteropDwmCompositor::s_InterfaceType;
    v10 = *a3;
    v11 = *a2;
    v13 = v9;
    v7 = Windows::UI::Composition::InteropDwmCompositor::RuntimeClassInitialize(v9, v11, v10);
    if ( v7 >= 0 )
    {
      v13 = 0LL;
      v7 = 0;
      *a1 = v9;
      goto LABEL_9;
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v14);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v13);
  return (unsigned int)v7;
}

/*
 * XREFs of ??$MakeAndInitialize2@VHolographicCompositor@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAU_GUID@@AEAI@Details@WRL2@Microsoft@@YAJPEAPEAVHolographicCompositor@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAU_GUID@@AEAI@Z @ 0x180114C44
 * Callers:
 *     ?CreateAsync@HolographicCompositorStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@345@U_GUID@@IPEAPEAU?$IAsyncOperation@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@Foundation@5@@Z @ 0x180116350 (-CreateAsync@HolographicCompositorStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0HolographicCompositor@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1801153D8 (--0HolographicCompositor@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@U_GUID@@K@Z @ 0x180117A04 (-RuntimeClassInitialize@HolographicCompositor@Internal@Composition@UI@Windows@@QEAAJPEAVComposit.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::HolographicCompositor,Windows::UI::Composition::Internal::HolographicCompositor,Windows::UI::Composition::Compositor *,_GUID &,unsigned int &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct _GUID *a3,
        unsigned int *a4)
{
  void *v8; // rax
  int v9; // ebx
  Windows::UI::Composition::Internal::HolographicCompositor *v10; // rax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rdi
  unsigned int v12; // r9d
  struct Windows::UI::Composition::Compositor *v13; // rdx
  void *v15; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v16; // [rsp+30h] [rbp-28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v17; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v17 = 0LL;
  v8 = DefaultHeap::Alloc(0xC8uLL);
  v15 = v8;
  if ( v8 )
  {
    v10 = (Windows::UI::Composition::Internal::HolographicCompositor *)memset_0(v8, 0, 0xC8uLL);
    if ( v10 )
      v11 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Internal::HolographicCompositor::HolographicCompositor(v10);
    else
      v11 = 0LL;
    v15 = 0LL;
    *((_QWORD *)v11 + 1) = &Windows::UI::Composition::Internal::HolographicCompositor::s_InterfaceType;
    v12 = *a4;
    v13 = *a2;
    v16 = *a3;
    v17 = v11;
    v9 = Windows::UI::Composition::Internal::HolographicCompositor::RuntimeClassInitialize(v11, v13, &v16, v12);
    if ( v9 >= 0 )
    {
      v17 = 0LL;
      v9 = 0;
      *a1 = v11;
      goto LABEL_9;
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v15);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v17);
  return (unsigned int)v9;
}

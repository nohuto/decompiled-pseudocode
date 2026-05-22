/*
 * XREFs of ??$MakeAndInitialize2@VHolographicCompositionDisplay@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAU_GUID@@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAU_GUID@@AEAM@Z @ 0x180118CA8
 * Callers:
 *     ?CreateAsyncWithRefreshRate@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@345@U_GUID@@MPEAPEAU?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@5@@Z @ 0x180119810 (-CreateAsyncWithRefreshRate@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1801191BC (--0HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@AEBU_GUID@@M@Z @ 0x18011A3C8 (-RuntimeClassInitialize@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAAJPEAV.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::HolographicCompositionDisplay,Windows::UI::Composition::Internal::HolographicCompositionDisplay,Windows::UI::Composition::Compositor *,_GUID &,float &>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        struct Windows::UI::Composition::Compositor **a2,
        const struct _GUID *a3,
        float *a4)
{
  void *v8; // rax
  int v9; // ebx
  Windows::UI::Composition::Internal::HolographicCompositionDisplay *v10; // rax
  Microsoft::WRL2::NestableRuntimeClass *v11; // rdi
  float v12; // xmm3_4
  struct Windows::UI::Composition::Compositor *v13; // rdx
  void *v15; // [rsp+20h] [rbp-28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v16; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v8 = DefaultHeap::Alloc(0xC0uLL);
  v15 = v8;
  if ( v8 )
  {
    v10 = (Windows::UI::Composition::Internal::HolographicCompositionDisplay *)memset_0(v8, 0, 0xC0uLL);
    if ( v10 )
      v11 = (Microsoft::WRL2::NestableRuntimeClass *)Windows::UI::Composition::Internal::HolographicCompositionDisplay::HolographicCompositionDisplay(v10);
    else
      v11 = 0LL;
    v15 = 0LL;
    *((_QWORD *)v11 + 1) = &Windows::UI::Composition::Internal::HolographicCompositionDisplay::s_InterfaceType;
    v12 = *a4;
    v13 = *a2;
    v16 = v11;
    v9 = Windows::UI::Composition::Internal::HolographicCompositionDisplay::RuntimeClassInitialize(v11, v13, a3, v12);
    if ( v9 >= 0 )
    {
      v16 = 0LL;
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
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(&v16);
  return (unsigned int)v9;
}

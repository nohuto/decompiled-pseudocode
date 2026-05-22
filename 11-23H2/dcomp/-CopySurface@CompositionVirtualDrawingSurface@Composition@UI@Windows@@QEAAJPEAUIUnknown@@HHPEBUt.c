/*
 * XREFs of ?CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x180195930
 * Callers:
 *     ?CopySurface@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x180195B00 (-CopySurface@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEAUIUnknown@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     ?UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18008C8D0 (-UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::CopySurface(
        Windows::UI::Composition::CompositionVirtualDrawingSurface *this,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagRECT *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  struct IDCompositionVirtualSurface *v14; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  v8 = Windows::UI::Composition::CompositionVirtualDrawingSurface::UseUnderlyingVirtualSurface(this, &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 198;
    goto LABEL_8;
  }
  v8 = (**(__int64 (__fastcall ***)(struct IDCompositionVirtualSurface *, GUID *, __int64 *))v14)(
         v14,
         &GUID_5680c979_14c8_48b5_8b92_3247379fd907,
         &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 199;
    goto LABEL_8;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, _QWORD, _QWORD, const struct tagRECT *))(*(_QWORD *)v13 + 96LL))(
          v13,
          a2,
          a3,
          a4,
          a5);
  v8 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v10);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 204;
LABEL_8:
    DoStackCaptureDirect(v8, v11);
    goto LABEL_9;
  }
  v9 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v13);
  return v9;
}

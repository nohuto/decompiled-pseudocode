/*
 * XREFs of ?CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x180195A10
 * Callers:
 *     ?CopySurface@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x180195BC0 (-CopySurface@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     ?UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18008C8D0 (-UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::CopySurface(
        Windows::UI::Composition::CompositionVirtualDrawingSurface *this,
        const struct tagRECT *a2,
        struct IDXGISurface **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  struct IDCompositionVirtualSurface *v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v5 = Windows::UI::Composition::CompositionVirtualDrawingSurface::UseUnderlyingVirtualSurface(this, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 164;
  }
  else
  {
    v5 = (**(__int64 (__fastcall ***)(struct IDCompositionVirtualSurface *, GUID *, __int64 *))v11)(
           v11,
           &GUID_43390de3_ac87_4fc4_a8ee_be3a1f43ebdd,
           &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      v8 = 165;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, const struct tagRECT *, struct IDXGISurface **))(*(_QWORD *)v12 + 24LL))(
             v12,
             a2,
             a3);
      v5 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v7);
      v6 = v5;
      if ( v5 >= 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v8 = 168;
    }
  }
  DoStackCaptureDirect(v5, v8);
LABEL_9:
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v6;
}

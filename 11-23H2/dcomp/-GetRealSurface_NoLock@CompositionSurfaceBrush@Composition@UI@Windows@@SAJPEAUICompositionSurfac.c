/*
 * XREFs of ?GetRealSurface_NoLock@CompositionSurfaceBrush@Composition@UI@Windows@@SAJPEAUICompositionSurface@234@PEAPEAU5234@1@Z @ 0x18004B10C
 * Callers:
 *     ?CreateSurfaceBrushWithSurface@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@345@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1800454A0 (-CreateSurfaceBrushWithSurface@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionSurfa.c)
 *     ?put_Surface@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@345@@Z @ 0x18004AF40 (-put_Surface@Api@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ??$As@UICompositionSurfaceFacade@Composition@UI@Windows@@@?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionSurfaceFacade@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18008DA44 (--$As@UICompositionSurfaceFacade@Composition@UI@Windows@@@-$ComPtr@UICompositionSurface@Composit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x180100AFC (--1-$ComPtr@UIDCompositionSurfaceFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::GetRealSurface_NoLock(
        struct Windows::UI::Composition::ICompositionSurface *a1,
        struct Windows::UI::Composition::ICompositionSurface **a2,
        struct Windows::UI::Composition::ICompositionSurface **a3)
{
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, struct Windows::UI::Composition::ICompositionSurface **); // rdi
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  struct Windows::UI::Composition::ICompositionSurface *v14; // rax
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+30h]
  struct Windows::UI::Composition::ICompositionSurface *v17; // [rsp+60h] [rbp+38h] BYREF
  __int64 v18; // [rsp+68h] [rbp+40h] BYREF
  __int64 v19; // [rsp+70h] [rbp+48h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v20; // [rsp+78h] [rbp+50h] BYREF

  *a3 = 0LL;
  *a2 = 0LL;
  v20 = a1;
  if ( !a1 )
    return 0LL;
  (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)a1 + 8LL))(a1);
  v18 = 0LL;
  if ( (**(int (__fastcall ***)(struct Windows::UI::Composition::ICompositionSurface *, GUID *, __int64 *))a1)(
         a1,
         &GUID_e01622c8_2332_55c7_8868_a7312c5c229d,
         &v18) < 0 )
  {
    *a2 = a1;
LABEL_4:
    v6 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return 0LL;
  }
  v8 = v18;
  v17 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionSurface **))(*(_QWORD *)v18 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v17);
  v10 = v9(v8, &v17);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CD,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v17);
    Microsoft::WRL::ComPtr<IDCompositionSurfaceFactory>::~ComPtr<IDCompositionSurfaceFactory>(&v18);
  }
  else
  {
    v19 = 0LL;
    v12 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurface>::As<Windows::UI::Composition::ICompositionSurfaceFacade>(
            &v17,
            &v19);
    v13 = v19;
    if ( v12 < 0 )
    {
      v14 = v17;
      v17 = 0LL;
      *a2 = v14;
      *a3 = a1;
      if ( v13 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v17);
      goto LABEL_4;
    }
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v17);
    v15 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v11 = -2147024809;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v20);
  return v11;
}

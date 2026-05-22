/*
 * XREFs of ?SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z @ 0x18004B010
 * Callers:
 *     ?CreateSurfaceBrushWithSurface@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@345@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1800454A0 (-CreateSurfaceBrushWithSurface@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionSurfa.c)
 *     ?put_Surface@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@345@@Z @ 0x18004AF40 (-put_Surface@Api@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?DetachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAXXZ @ 0x180029FF0 (-DetachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z @ 0x180090AD0 (-AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::SetSurface(
        Windows::UI::Composition::CompositionSurfaceBrush *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::ICompositionSurface *a3)
{
  struct IUnknownVtbl *lpVtbl; // rax
  struct Windows::UI::Composition::ICompositionSurface *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  const char *v14; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::UI::Composition::ICompositionSurface *v16; // [rsp+58h] [rbp+10h] BYREF

  if ( a2
    && (lpVtbl = a2->lpVtbl,
        v16 = 0LL,
        ((void (__fastcall *)(struct IUnknown *, GUID *, struct Windows::UI::Composition::ICompositionSurface **))lpVtbl->QueryInterface)(
          a2,
          &GUID_4863675c_cf4a_4b1c_9ece_c5ec0c2b2fe6,
          &v16),
        v16) )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x90,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
      (const char *)0x80070057LL,
      (int)"MipmapSurface is not supported as input for CompositionSurfaceBrush",
      v14);
    v12 = (__int64)v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return 2147942487LL;
  }
  else
  {
    v7 = (struct Windows::UI::Composition::ICompositionSurface *)*((_QWORD *)this + 29);
    if ( a2 == (struct IUnknown *)v7 )
      goto LABEL_8;
    if ( v7 )
      Windows::UI::Composition::SurfaceBindPoint::DetachSurface((Windows::UI::Composition::CompositionSurfaceBrush *)((char *)this + 208));
    if ( a2
      && (v8 = Windows::UI::Composition::SurfaceBindPoint::AttachSurface(
                 (Windows::UI::Composition::CompositionSurfaceBrush *)((char *)this + 208),
                 a2),
          v9 = v8,
          v8 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEA,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsurfacebindpoint.cpp",
        (const char *)(unsigned int)v8);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x93,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
        (const char *)v9);
      return v9;
    }
    else
    {
LABEL_8:
      v10 = *((_QWORD *)this + 33);
      if ( v10 )
      {
        v13 = *((_QWORD *)this + 3);
        *((_QWORD *)this + 33) = 0LL;
        Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v13, v10);
      }
      if ( *((struct Windows::UI::Composition::ICompositionSurface **)this + 33) != a3 )
      {
        v16 = a3;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v16);
        v16 = (struct Windows::UI::Composition::ICompositionSurface *)*((_QWORD *)this + 33);
        *((_QWORD *)this + 33) = a3;
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v16);
      }
      return 0LL;
    }
  }
}

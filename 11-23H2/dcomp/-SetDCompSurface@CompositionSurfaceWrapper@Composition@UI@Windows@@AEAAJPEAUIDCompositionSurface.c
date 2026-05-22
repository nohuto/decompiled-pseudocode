/*
 * XREFs of ?SetDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface@@@Z @ 0x18002A71C
 * Callers:
 *     ?Reset@Partner@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAJPEAUIDCompositionSurface@@@Z @ 0x18000D980 (-Reset@Partner@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAJPEAUIDCompositionSurface@@.c)
 *     ?CreateCompositionSurfaceForDCompositionSurface@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIDCompositionSurface@@PEAPEAUICompositionSurface@345@@Z @ 0x18002A450 (-CreateCompositionSurfaceForDCompositionSurface@DCPrivate@CompositorCommon@Composition@UI@Window.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320 (-NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceWrapper::SetDCompSurface(
        Windows::UI::Composition::CompositionSurfaceWrapper *this,
        struct IDCompositionSurface *a2)
{
  struct IDCompositionSurface **v2; // r14
  __int64 v5; // rsi
  int v6; // ebp
  struct IDCompositionSurface *v7; // rcx
  Windows::UI::Composition::SurfaceBindPoint **v8; // rsi
  Windows::UI::Composition::SurfaceBindPoint **j; // rbx
  __int64 v10; // rcx
  Windows::UI::Composition::SurfaceBindPoint **v12; // rbp
  Windows::UI::Composition::SurfaceBindPoint **i; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = (struct IDCompositionSurface **)((char *)this + 184);
  if ( *((_QWORD *)this + 23) )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 184);
    v12 = (Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)this + 17);
    for ( i = (Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)this + 16); i != v12; ++i )
      Windows::UI::Composition::SurfaceBindPoint::NotifyUnderlyingContentChange(*i);
  }
  v15 = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    v16 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(struct IDCompositionSurface *, GUID *, __int64 *))a2)(
           a2,
           &GUID_c9f54a6b_06fb_4465_9edc_590cacccb47a,
           &v16);
    if ( v6 >= 0 )
      v5 = v16;
    if ( v16 )
    {
      (*(void (**)(void))(*(_QWORD *)v16 + 16LL))();
      v16 = 0LL;
    }
    if ( v6 < 0 )
    {
      if ( (**(int (__fastcall ***)(struct IDCompositionSurface *, GUID *, __int64 *))a2)(
             a2,
             &GUID_ae471c51_5f53_4a24_8d3e_d0c39c30b3f0,
             &v15) >= 0
        && *(_QWORD *)(*((_QWORD *)this + 3) + 456LL) == *(_QWORD *)(*(_QWORD *)(v15 + 104) + 24LL) )
      {
        goto LABEL_9;
      }
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacewrapper.cpp",
        (const char *)0x80070057LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v15);
      return 2147942487LL;
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 456LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 24LL) + 24LL) )
    goto LABEL_26;
LABEL_9:
  if ( *v2 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IDCompositionSurface *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *v2;
    *v2 = a2;
    if ( v7 )
      (*(void (__fastcall **)(struct IDCompositionSurface *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)this + 17);
  for ( j = (Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)this + 16); j != v8; ++j )
    Windows::UI::Composition::SurfaceBindPoint::NotifyUnderlyingContentChange(*j);
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}

/*
 * XREFs of ?GetDrawingSurfaceForLevel@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJIPEAPEAVCompositionDrawingSurface@234@@Z @ 0x180193B58
 * Callers:
 *     ?GetDrawingSurfaceForLevel@Api@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionDrawingSurface@345@@Z @ 0x180193A70 (-GetDrawingSurfaceForLevel@Api@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJIPEAPEAUICo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074FB0 (-InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z @ 0x18007E1B0 (-SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@PEAVCompositionGraphicsDevice@234@AEAUSizeInt32@Graphics@4@AEAW4DirectXPixelFormat@DirectX@84@AEAW4DirectXAlphaMode@DirectX@84@_N_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionDrawingSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEAPEAVCompositionGraphicsDevice@456@AEAUSizeInt32@Graphics@6@AEAW4DirectXPixelFormat@DirectX@Graphics@6@AEAW4DirectXAlphaMode@DirectX@Graphics@6@$$QEA_N6@Z @ 0x1801938D0 (--$MakeAndInitialize2@VCompositionDrawingSurface@Composition@UI@Windows@@V1234@PEAV_ea_1801938D0.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionMipmapSurface::GetDrawingSurfaceForLevel(
        Windows::UI::Composition::CompositionMipmapSurface *this,
        unsigned int a2,
        struct Windows::UI::Composition::CompositionDrawingSurface **a3)
{
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  char v11; // cl
  int v12; // edx
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  unsigned int v16; // esi
  Microsoft::WRL2::NestableRuntimeClass *v17; // rsi
  int v18; // eax
  const char *v19; // [rsp+28h] [rbp-38h]
  struct IUnknown *v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  struct Windows::UI::Composition::Compositor *v23; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct Microsoft::WRL2::ContextRuntimeClass *v25; // [rsp+90h] [rbp+30h] BYREF
  char v26; // [rsp+98h] [rbp+38h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v27; // [rsp+A8h] [rbp+48h] BYREF

  if ( a2 >= *((_DWORD *)this + 46) )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x115,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionmipmapsurface.cpp",
      (const char *)0x80070057LL,
      (int)"Invalid mipLevel.",
      v19);
    return v5;
  }
  v7 = *((_QWORD *)this + 26);
  v27 = 0LL;
  v8 = 56LL * a2;
  v20 = *(struct IUnknown **)(v7 + v8 + 24);
  if ( v20 )
  {
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v27);
    v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           *((struct Microsoft::WRL2::ContextSession **)this + 3),
           v20,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionDrawingSurface::s_InterfaceType,
           &v25);
    v27 = v25;
    if ( (v5 & 0x80000000) != 0 )
    {
      v9 = v5;
      v10 = 283LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionmipmapsurface.cpp",
        (const char *)v9);
      goto LABEL_19;
    }
    if ( !v25 )
      goto LABEL_22;
    *a3 = v25;
LABEL_21:
    v27 = 0LL;
LABEL_22:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v27);
    return 0LL;
  }
  v11 = a2;
  v12 = *((int *)this + 44) >> a2;
  v13 = 1;
  v26 = 0;
  LOBYTE(v25) = 0;
  v14 = 1;
  if ( v12 > 1 )
    v14 = v12;
  LODWORD(v21) = v14;
  if ( *((int *)this + 45) >> v11 > 1 )
    v13 = *((int *)this + 45) >> v11;
  v22 = *((_QWORD *)this + 25);
  v23 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)this + 3);
  HIDWORD(v21) = v13;
  v15 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionDrawingSurface,Windows::UI::Composition::CompositionDrawingSurface,Windows::UI::Composition::Compositor *,Windows::UI::Composition::CompositionGraphicsDevice *,Windows::Graphics::SizeInt32 &,enum Windows::Graphics::DirectX::DirectXPixelFormat &,enum Windows::Graphics::DirectX::DirectXAlphaMode &,bool,bool>(
          &v27,
          &v23,
          &v22,
          &v21,
          (int *)this + 47,
          (int *)this + 48,
          (char *)&v25,
          &v26);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionmipmapsurface.cpp",
      (const char *)(unsigned int)v15);
    v5 = v16;
LABEL_19:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v27);
    return v5;
  }
  v17 = v27;
  Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
    v27,
    &GUID_1527540d_42c7_47a6_a408_668f79a90dfb,
    (void **)&v20);
  if ( v20 )
  {
    v18 = Windows::UI::Composition::SurfaceBindPoint::SetSurface((struct IUnknown **)(v8 + *((_QWORD *)this + 26)), v20);
    v5 = v18;
    if ( v18 < 0 )
    {
      v9 = (unsigned int)v18;
      v10 = 308LL;
      goto LABEL_18;
    }
    *a3 = v17;
    goto LABEL_21;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v27);
  return 2147500035LL;
}

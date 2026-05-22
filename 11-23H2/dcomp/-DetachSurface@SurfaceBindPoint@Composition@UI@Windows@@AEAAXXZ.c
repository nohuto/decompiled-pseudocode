/*
 * XREFs of ?DetachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAXXZ @ 0x180029FF0
 * Callers:
 *     ?Destroy@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXXZ @ 0x180029E50 (-Destroy@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z @ 0x18004B010 (-SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z.c)
 *     ?SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z @ 0x18007E1B0 (-SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800680E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?RemoveBindPoint@BindableSurface@Composition@UI@Windows@@QEAAXPEAVSurfaceBindPoint@234@@Z @ 0x1800829CC (-RemoveBindPoint@BindableSurface@Composition@UI@Windows@@QEAAXPEAVSurfaceBindPoint@234@@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::SurfaceBindPoint::DetachSurface(
        Windows::UI::Composition::SurfaceBindPoint *this)
{
  std::_Ref_count_base *v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  __int64 i; // r10
  __int64 v7; // rcx
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdi
  int v10; // eax
  Windows::UI::Composition::BindableSurface *v11; // rbp
  int v12; // eax
  __int64 v13; // rdx
  Windows::UI::Composition::SurfaceBindPoint **v14; // r8
  Windows::UI::Composition::SurfaceBindPoint **v15; // rcx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, Windows::UI::Composition::SurfaceBindPoint *, _QWORD); // rcx
  int v18; // eax
  Windows::UI::Composition::BindableSurface *v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Microsoft::WRL2::ContextRuntimeClass *v24; // [rsp+50h] [rbp+8h] BYREF
  Windows::UI::Composition::BindableSurface *v25; // [rsp+58h] [rbp+10h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v26; // [rsp+60h] [rbp+18h] BYREF

  *((_QWORD *)this + 5) = 0LL;
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 32);
    v5 = 0;
    for ( i = *(_QWORD *)(v3 + 8); v5 < v4; ++v5 )
    {
      if ( this == *(Windows::UI::Composition::SurfaceBindPoint **)(i + 8LL * v5) )
        break;
    }
    if ( v5 < v4 )
    {
      for ( ; v5 < v4 - 1; v4 = *(_DWORD *)(v3 + 32) )
      {
        v20 = v5++;
        *(_QWORD *)(i + 8 * v20) = *(_QWORD *)(i + 8LL * v5);
      }
      *(_DWORD *)(v3 + 32) = v4 - 1;
    }
    v7 = *((_QWORD *)this + 4);
    if ( v7 )
    {
      *((_QWORD *)this + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = 0LL;
  v9 = 0LL;
  v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          *((struct Microsoft::WRL2::ContextSession **)this + 1),
          *((struct IUnknown **)this + 3),
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionDrawingSurface::s_InterfaceType,
          &v25);
  v11 = v25;
  if ( v10 >= 0 )
  {
    v19 = v25;
    goto LABEL_30;
  }
  if ( v10 != -2147467262
    || (v12 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                *((struct Microsoft::WRL2::ContextSession **)this + 1),
                *((struct IUnknown **)this + 3),
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionSurfaceWrapper::s_InterfaceType,
                &v24),
        v8 = v24,
        v12 < 0) )
  {
    v21 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            *((struct Microsoft::WRL2::ContextSession **)this + 1),
            *((struct IUnknown **)this + 3),
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionVirtualDrawingSurface::s_InterfaceType,
            &v26);
    v9 = v26;
    if ( v21 < 0 )
      goto LABEL_17;
    v19 = v26;
LABEL_30:
    Windows::UI::Composition::BindableSurface::RemoveBindPoint(v19, this);
    goto LABEL_17;
  }
  v14 = (Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)v24 + 17);
  v15 = (Windows::UI::Composition::SurfaceBindPoint **)*((_QWORD *)v24 + 16);
  if ( v15 != v14 )
  {
    while ( *v15 != this )
    {
      if ( ++v15 == v14 )
        goto LABEL_17;
    }
    memmove_0(v15, v15 + 1, (char *)v14 - (char *)(v15 + 1));
    *((_QWORD *)v8 + 17) -= 8LL;
  }
LABEL_17:
  v16 = *((_QWORD *)this + 3);
  if ( v16 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (__int64 (__fastcall ***)(_QWORD, Windows::UI::Composition::SurfaceBindPoint *, _QWORD))*((_QWORD *)this + 2);
  if ( v17 )
  {
    v18 = (**v17)(v17, this, 0LL);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1BD,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsurfacebindpoint.cpp",
        (const char *)(unsigned int)v18,
        v22);
  }
  if ( v9 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 4, 0xFFFFFFFF) == 1 )
    {
      LOBYTE(v13) = 1;
      (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v8 + 64LL))(v8, v13);
    }
    v11 = v25;
  }
  if ( v11 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
}

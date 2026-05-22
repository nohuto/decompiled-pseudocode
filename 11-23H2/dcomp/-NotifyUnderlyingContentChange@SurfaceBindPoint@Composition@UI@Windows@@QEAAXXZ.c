/*
 * XREFs of ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320
 * Callers:
 *     ?ClearDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAXXZ @ 0x18000D9F4 (-ClearDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?SetDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface@@@Z @ 0x18002A71C (-SetDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface.c)
 *     ?NotifyUnderlyingContentChange@InvalidatableSurface@Composition@UI@Windows@@IEAAXXZ @ 0x180061C00 (-NotifyUnderlyingContentChange@InvalidatableSurface@Composition@UI@Windows@@IEAAXXZ.c)
 *     ?AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z @ 0x180090AD0 (-AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z.c)
 *     ?NotifyRenderingDeviceChanged@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJXZ @ 0x180193FB0 (-NotifyRenderingDeviceChanged@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCDirtyListener@DirectComposition@@$0A@@@QEAAJPEFBQEAVCDirtyListener@DirectComposition@@I@Z @ 0x18007304C (-AddMultipleAndSet@-$DynArray@PEAVCDirtyListener@DirectComposition@@$0A@@@QEAAJPEFBQEAVCDirtyLis.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCDirtyNotifier@DirectComposition@@@WRL@Microsoft@@IEBAXXZ @ 0x180084B68 (-InternalAddRef@-$ComPtr@VCDirtyNotifier@DirectComposition@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDirtyNotifier@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x180089DAC (-InternalRelease@-$ComPtr@VCDirtyNotifier@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil.c)
 *     ??1?$RefPtr@VConditionalExpressionAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A2030 (--1-$RefPtr@VConditionalExpressionAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$RefPtr@VCompositionTexture@Composition@UI@Windows@@@WRL2@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVCompositionTexture@Composition@UI@Windows@@XZ @ 0x1800A35F0 (--B-$ComPtrRef@V-$RefPtr@VCompositionTexture@Composition@UI@Windows@@@WRL2@Microsoft@@@Details@W.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UID3D11PartnerDevice@@@WRL@Microsoft@@QEAA@XZ @ 0x180100494 (--1-$ComPtr@UID3D11PartnerDevice@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 */

void __fastcall Windows::UI::Composition::SurfaceBindPoint::NotifyUnderlyingContentChange(
        Windows::UI::Composition::SurfaceBindPoint *this)
{
  __int64 v1; // r10
  char *v2; // rdx
  unsigned int v3; // r12d
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  __int64 i; // r9
  __int64 v8; // rcx
  struct IUnknown *v9; // rdx
  struct Microsoft::WRL2::ContextSession *v10; // rcx
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v12; // rsi
  Microsoft::WRL2::NestableRuntimeClass *v13; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v14; // r14
  int v15; // eax
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rax
  struct Microsoft::WRL2::ContextRuntimeClass *v19; // r15
  int v20; // eax
  void (__fastcall ***v21)(_QWORD, GUID *, struct Microsoft::WRL2::ContextRuntimeClass **); // rcx
  struct Microsoft::WRL2::ContextRuntimeClass *v22; // r15
  __int64 v23; // rax
  void (__fastcall ***v24)(_QWORD); // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  struct Microsoft::WRL2::ContextRuntimeClass *v31; // r15
  int v32; // eax
  struct Microsoft::WRL2::ContextRuntimeClass **v33; // r15
  int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 v37; // rcx
  Windows::UI::Composition::SurfaceBindPoint **v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 (__fastcall ***v41)(_QWORD, Windows::UI::Composition::SurfaceBindPoint *, _QWORD); // rcx
  int v42; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v43; // [rsp+20h] [rbp-60h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v44; // [rsp+28h] [rbp-58h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v45; // [rsp+30h] [rbp-50h] BYREF
  __int64 *v46; // [rsp+38h] [rbp-48h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v47; // [rsp+40h] [rbp-40h] BYREF
  Windows::UI::Composition::SurfaceBindPoint *v48; // [rsp+48h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  struct Microsoft::WRL2::ContextRuntimeClass *v50; // [rsp+A0h] [rbp+20h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v51; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v52; // [rsp+B0h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v53; // [rsp+B8h] [rbp+38h] BYREF

  v1 = *((_QWORD *)this + 4);
  v2 = (char *)this + 32;
  v3 = 0;
  if ( v1 )
  {
    v5 = *(_DWORD *)(v1 + 32);
    v6 = 0;
    for ( i = *(_QWORD *)(v1 + 8); v6 < v5; ++v6 )
    {
      if ( this == *(Windows::UI::Composition::SurfaceBindPoint **)(i + 8LL * v6) )
        break;
    }
    if ( v6 < v5 )
    {
      if ( v6 < v5 - 1 )
      {
        do
        {
          v8 = v6++;
          *(_QWORD *)(i + 8 * v8) = *(_QWORD *)(i + 8LL * v6);
          v5 = *(_DWORD *)(v1 + 32);
        }
        while ( v6 < v5 - 1 );
        v2 = (char *)this + 32;
      }
      *(_DWORD *)(v1 + 32) = v5 - 1;
    }
    Microsoft::WRL::ComPtr<DirectComposition::CDirtyNotifier>::InternalRelease(v2);
  }
  v9 = (struct IUnknown *)*((_QWORD *)this + 3);
  if ( !v9 )
    goto LABEL_57;
  v10 = (struct Microsoft::WRL2::ContextSession *)*((_QWORD *)this + 1);
  v52 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          v10,
          v9,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionDrawingSurface::s_InterfaceType,
          &v53);
  LODWORD(v50) = v15;
  v16 = v15;
  if ( v15 < 0 )
  {
    if ( v15 != -2147467262 )
      goto LABEL_65;
    v20 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            *((struct Microsoft::WRL2::ContextSession **)this + 1),
            *((struct IUnknown **)this + 3),
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionSurfaceWrapper::s_InterfaceType,
            &v43);
    v11 = v43;
    v16 = v20;
    LODWORD(v50) = v20;
    if ( v20 >= 0 )
    {
      if ( *((_QWORD *)v43 + 23) )
      {
        v21 = (void (__fastcall ***)(_QWORD, GUID *, struct Microsoft::WRL2::ContextRuntimeClass **))*((_QWORD *)v43 + 23);
        v50 = 0LL;
        (**v21)(v21, &GUID_ae471c51_5f53_4a24_8d3e_d0c39c30b3f0, &v50);
        v22 = v50;
        if ( v50 )
        {
          v50 = 0LL;
          (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *))(*(_QWORD *)v22 + 16LL))(v22);
          v23 = *(_QWORD *)v22;
          v51 = v22;
          (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *))(v23 + 8))(v22);
          Microsoft::WRL::ComPtr<ID3D11PartnerDevice>::~ComPtr<ID3D11PartnerDevice>(&v51);
          v24 = (void (__fastcall ***)(_QWORD))((char *)v22 + 16);
        }
        else
        {
          v25 = *((_QWORD *)v11 + 23);
          v51 = 0LL;
          v26 = *(_QWORD *)(v25 + 40);
          v24 = (void (__fastcall ***)(_QWORD))(v26 + 56);
          if ( !v26 )
            v24 = 0LL;
        }
        if ( *((void (__fastcall ****)(_QWORD))this + 4) != v24 )
        {
          if ( v24 )
            (**v24)(v24);
          v27 = *((_QWORD *)this + 4);
          *((_QWORD *)this + 4) = v24;
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
        }
      }
      goto LABEL_41;
    }
    if ( v20 != -2147467262 )
      goto LABEL_65;
    v28 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            *((struct Microsoft::WRL2::ContextSession **)this + 1),
            *((struct IUnknown **)this + 3),
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionSwapChain::s_InterfaceType,
            &v51);
    v12 = v51;
    v16 = v28;
    LODWORD(v50) = v28;
    if ( v28 < 0 )
    {
      if ( v28 != -2147467262 )
        goto LABEL_65;
      v29 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              *((struct Microsoft::WRL2::ContextSession **)this + 1),
              *((struct IUnknown **)this + 3),
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionVirtualDrawingSurface::s_InterfaceType,
              &v44);
      v13 = v44;
      v16 = v29;
      LODWORD(v50) = v29;
      if ( v29 >= 0 )
      {
        v30 = *((_QWORD *)v44 + 23);
        v31 = (struct Microsoft::WRL2::ContextRuntimeClass *)(v30 + 16);
        if ( !v30 )
          v31 = 0LL;
        v50 = v31;
        Microsoft::WRL::ComPtr<DirectComposition::CDirtyNotifier>::InternalAddRef(&v50);
        v50 = (struct Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 4);
        *((_QWORD *)this + 4) = v31;
        Microsoft::WRL::ComPtr<DirectComposition::CDirtyNotifier>::InternalRelease(&v50);
        goto LABEL_41;
      }
      if ( v29 != -2147467262
        || (v32 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                    *((struct Microsoft::WRL2::ContextSession **)this + 1),
                    *((struct IUnknown **)this + 3),
                    (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionVisualSurface::s_InterfaceType,
                    &v45),
            v14 = v45,
            v32 < 0) )
      {
LABEL_65:
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl)
          || v16 != -2147467262
          || (v46 = &v52,
              v33 = (struct Microsoft::WRL2::ContextRuntimeClass **)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionTexture>>::operator Windows::UI::Composition::CompositionTexture * *(&v46),
              v34 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                      *((struct Microsoft::WRL2::ContextSession **)this + 1),
                      *((struct IUnknown **)this + 3),
                      (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionTexture::s_InterfaceType,
                      &v47),
              *v33 = v47,
              v34 < 0) )
        {
          Microsoft::WRL2::FailFast::ForHR((int)v50, retaddr);
        }
      }
    }
  }
  else
  {
    v17 = *((_QWORD *)v53 + 23);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 40);
      v19 = (struct Microsoft::WRL2::ContextRuntimeClass *)(v18 + 56);
      if ( !v18 )
        v19 = 0LL;
      v50 = v19;
      Microsoft::WRL::ComPtr<DirectComposition::CDirtyNotifier>::InternalAddRef(&v50);
      v50 = (struct Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 4);
      *((_QWORD *)this + 4) = v19;
      Microsoft::WRL::ComPtr<DirectComposition::CDirtyNotifier>::InternalRelease(&v50);
    }
  }
LABEL_41:
  v35 = *((_QWORD *)this + 4);
  if ( v35 )
  {
    v36 = *(_DWORD *)(v35 + 32);
    v37 = v35 + 8;
    v38 = *(Windows::UI::Composition::SurfaceBindPoint ***)(v35 + 8);
    v48 = this;
    if ( v36 )
    {
      while ( this != *v38 )
      {
        ++v3;
        ++v38;
        if ( v3 >= v36 )
          goto LABEL_45;
      }
    }
    else
    {
LABEL_45:
      v39 = DynArray<DirectComposition::CDirtyListener *,0>::AddMultipleAndSet(v37, &v48);
      if ( v39 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xAF,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsurfacebindpoint.cpp",
          (const char *)(unsigned int)v39,
          (int)v43);
    }
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>::~RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>(&v52);
  if ( v14 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v14);
  if ( v13 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v13);
  if ( v12 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v12);
  if ( v11 && _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v40) = 1;
    (*(void (__fastcall **)(struct Microsoft::WRL2::ContextRuntimeClass *, __int64))(*(_QWORD *)v11 + 64LL))(v11, v40);
  }
  if ( v53 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v53);
LABEL_57:
  v41 = (__int64 (__fastcall ***)(_QWORD, Windows::UI::Composition::SurfaceBindPoint *, _QWORD))*((_QWORD *)this + 2);
  if ( v41 )
  {
    v42 = (**v41)(v41, this, *((_QWORD *)this + 3));
    if ( v42 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1BD,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsurfacebindpoint.cpp",
        (const char *)(unsigned int)v42,
        (int)v43);
  }
}

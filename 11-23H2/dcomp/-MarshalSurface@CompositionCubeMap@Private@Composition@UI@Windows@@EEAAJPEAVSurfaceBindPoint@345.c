/*
 * XREFs of ?MarshalSurface@CompositionCubeMap@Private@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@345@PEAUICompositionSurface@345@@Z @ 0x18017EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompositionSurfaceProxy@2@@Z @ 0x1800335C0 (-GetSurfaceProxyNoRef@CAtlasSurfacePool@DirectComposition@@QEAAJW4DXGI_ALPHA_MODE@@PEAPEAVCCompo.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionCubeMap::MarshalSurface(
        Windows::UI::Composition::Private::CompositionCubeMap *this,
        struct Windows::UI::Composition::SurfaceBindPoint *a2,
        struct IUnknown *a3)
{
  char v3; // di
  unsigned int v4; // r12d
  int v5; // r13d
  __int64 v8; // r8
  unsigned __int64 v9; // r14
  __int64 i; // rax
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  enum DXGI_ALPHA_MODE v15; // edx
  DirectComposition::CAtlasSurfacePool *v16; // rcx
  int SurfaceProxyNoRef; // eax
  unsigned int v18; // ebx
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  int v22; // edx
  unsigned int v23; // r8d
  int v24; // edx
  int v25; // ecx
  const char *v27; // [rsp+28h] [rbp-18h]
  __int128 v28; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct Microsoft::WRL2::ContextRuntimeClass *v30; // [rsp+90h] [rbp+50h] BYREF
  struct DirectComposition::CCompositionSurfaceProxy *v31; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v28 = 0LL;
  if ( a3 )
  {
    v8 = *((_QWORD *)this + 3);
    v9 = 0LL;
    for ( i = 0LL; ; i += 56LL )
    {
      if ( v9 >= (*((_QWORD *)this + 4) - v8) / 56 )
        return 0LL;
      if ( *(struct IUnknown **)(i + v8 + 24) == a3 )
        break;
      ++v9;
    }
    v11 = 1;
    if ( (int)(*((_DWORD *)this + 12) >> ((unsigned int)v9 / 6)) > 1 )
      v11 = *((_DWORD *)this + 12) >> ((unsigned int)v9 / 6);
    v30 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v30);
    if ( (int)Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                *((struct Microsoft::WRL2::ContextSession **)this - 14),
                a3,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionDrawingSurface::s_InterfaceType,
                &v30) >= 0 )
    {
      v12 = *((_QWORD *)v30 + 23);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 40);
        v14 = *(_QWORD *)(v13 + 16);
        if ( v14 )
        {
          v15 = *(_DWORD *)(v13 + 40);
          v16 = *(DirectComposition::CAtlasSurfacePool **)(v14 + 64);
          v31 = 0LL;
          SurfaceProxyNoRef = DirectComposition::CAtlasSurfacePool::GetSurfaceProxyNoRef(v16, v15, &v31);
          v18 = SurfaceProxyNoRef;
          if ( SurfaceProxyNoRef < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xD1,
              (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncubemap.cpp",
              (const char *)(unsigned int)SurfaceProxyNoRef);
LABEL_22:
            Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v30);
            return v18;
          }
          v19 = *(_DWORD *)(v14 + 76);
          v20 = *(_DWORD *)(v14 + 72) + (*(_DWORD *)(v14 + 88) & 1);
          v21 = *(_DWORD *)(v14 + 84);
          v22 = (*(_DWORD *)(v14 + 88) >> 2) & 1;
          LODWORD(v28) = v20;
          v5 = *((_DWORD *)v31 + 3);
          v23 = v22 + v19;
          v24 = v20 + *(_DWORD *)(v14 + 80);
          *(_QWORD *)((char *)&v28 + 4) = __PAIR64__(v24, v23);
          v25 = v23 + v21;
          HIDWORD(v28) = v25;
        }
        else
        {
          v25 = HIDWORD(v28);
          v24 = DWORD2(v28);
          v23 = DWORD1(v28);
          v20 = v28;
        }
        if ( v24 - v20 != v11 || v25 - v23 != v11 )
        {
          v18 = -2147024809;
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0xDD,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioncubemap.cpp",
            (const char *)0x80070057LL,
            (int)"Invalid surface size.",
            v27);
          goto LABEL_22;
        }
        v3 = 1;
        v4 = v9;
      }
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v30);
    if ( v3 )
    {
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this - 14) + 456LL),
        *((_DWORD *)this - 2),
        0,
        v4);
      DirectComposition::CDevice::ResourceSetReferenceProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this - 14) + 456LL),
        *((_DWORD *)this - 2),
        3,
        v5);
      DirectComposition::CDevice::ResourceSetBufferProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this - 14) + 456LL),
        *((_DWORD *)this - 2),
        1,
        &v28,
        0x10uLL);
    }
  }
  return 0LL;
}

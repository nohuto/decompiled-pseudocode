/*
 * XREFs of ?MarshalSurface@CompositionMipmapSurface@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x180193D50
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

__int64 __fastcall Windows::UI::Composition::CompositionMipmapSurface::MarshalSurface(
        Windows::UI::Composition::CompositionMipmapSurface *this,
        struct Windows::UI::Composition::SurfaceBindPoint *a2,
        struct IUnknown *a3)
{
  char v3; // si
  unsigned int v4; // r15d
  int v5; // r12d
  __int64 v8; // r8
  unsigned __int64 v9; // r14
  __int64 i; // rax
  int v11; // r13d
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  enum DXGI_ALPHA_MODE v17; // edx
  DirectComposition::CAtlasSurfacePool *v18; // rcx
  int SurfaceProxyNoRef; // eax
  unsigned int v20; // esi
  int v21; // r8d
  int v22; // r9d
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // r8d
  int v26; // edx
  int v27; // ecx
  const char *v29; // [rsp+28h] [rbp-28h]
  struct DirectComposition::CCompositionSurfaceProxy *v30; // [rsp+30h] [rbp-20h] BYREF
  __int128 v31; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v33; // [rsp+A0h] [rbp+50h]
  struct Microsoft::WRL2::ContextRuntimeClass *v34; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v31 = 0LL;
  if ( a3 )
  {
    v8 = *((_QWORD *)this + 9);
    v9 = 0LL;
    for ( i = 0LL; ; i += 56LL )
    {
      if ( v9 >= (*((_QWORD *)this + 10) - v8) / 56 )
        return 0LL;
      if ( *(struct IUnknown **)(i + v8 + 24) == a3 )
        break;
      ++v9;
    }
    v11 = 1;
    if ( *((int *)this + 11) >> v9 > 1 )
      v11 = *((int *)this + 11) >> v9;
    v12 = *((int *)this + 10) >> v9;
    v13 = 1;
    if ( v12 > 1 )
      v13 = *((int *)this + 10) >> v9;
    v34 = 0LL;
    v33 = v13;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v34);
    if ( (int)Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                *((struct Microsoft::WRL2::ContextSession **)this - 14),
                a3,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionDrawingSurface::s_InterfaceType,
                &v34) >= 0 )
    {
      v14 = *((_QWORD *)v34 + 23);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 40);
        v16 = *(_QWORD *)(v15 + 16);
        if ( v16 )
        {
          v17 = *(_DWORD *)(v15 + 40);
          v18 = *(DirectComposition::CAtlasSurfacePool **)(v16 + 64);
          v30 = 0LL;
          SurfaceProxyNoRef = DirectComposition::CAtlasSurfacePool::GetSurfaceProxyNoRef(v18, v17, &v30);
          v20 = SurfaceProxyNoRef;
          if ( SurfaceProxyNoRef < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB1,
              (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionmipmapsurface.cpp",
              (const char *)(unsigned int)SurfaceProxyNoRef);
LABEL_24:
            Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v34);
            return v20;
          }
          v21 = *(_DWORD *)(v16 + 76);
          v22 = *(_DWORD *)(v16 + 72) + (*(_DWORD *)(v16 + 88) & 1);
          v23 = *(_DWORD *)(v16 + 84);
          v24 = (*(_DWORD *)(v16 + 88) >> 2) & 1;
          LODWORD(v31) = v22;
          v5 = *((_DWORD *)v30 + 3);
          v25 = v24 + v21;
          v26 = v22 + *(_DWORD *)(v16 + 80);
          *(_QWORD *)((char *)&v31 + 4) = __PAIR64__(v26, v25);
          v27 = v25 + v23;
          HIDWORD(v31) = v27;
        }
        else
        {
          v27 = HIDWORD(v31);
          v26 = DWORD2(v31);
          v25 = DWORD1(v31);
          v22 = v31;
        }
        if ( v26 - v22 != v33 || v27 - v25 != v11 )
        {
          v20 = -2147024809;
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0xB9,
            (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionmipmapsurface.cpp",
            (const char *)0x80070057LL,
            (int)"Invalid surface size.",
            v29);
          goto LABEL_24;
        }
        v3 = 1;
        v4 = v9;
      }
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v34);
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
        &v31,
        0x10uLL);
    }
  }
  return 0LL;
}

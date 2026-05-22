/*
 * XREFs of ?BeginDraw@CAtlasSurfacePool@DirectComposition@@QEAAJAEBUtagRECT@@PEBU3@AEBU_GUID@@_NW4DXGI_ALPHA_MODE@@PEAPEAXPEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x18002F7C0
 * Callers:
 *     ?BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002E990 (-BeginDrawHelper@CCompositionSurface@DirectComposition@@QEAAJPEBUtagRECT@@AEBU_GUID@@_NPEAPEAXPE.c)
 *     ?BeginDraw@CAtlasSurface@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2W4DXGI_ALPHA_MODE@@PEAUDCOMPOSITION_GUTTERS@@PEAPEAXPEAI6PEAPEAUID2D1Bitmap@@PEAPEAUID2D1DrawingStateBlock@@@Z @ 0x1800379E8 (-BeginDraw@CAtlasSurface@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2W4DXGI_ALPHA_MODE@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?EnsureD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ @ 0x180034C64 (-EnsureD2DDeviceResources@CAtlasSurfacePool@DirectComposition@@AEAAJXZ.c)
 *     ?RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ @ 0x180034F84 (-RemoveGuardRect@CAtlasSurfacePool@DirectComposition@@QEAAXXZ.c)
 *     ?SetGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXAEBUtagRECT@@@Z @ 0x1800394D4 (-SetGuardRect@CAtlasSurfacePool@DirectComposition@@AEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@AEAAJW4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800E985C (-GetD2DBitmap@CAtlasSurfacePool@DirectComposition@@AEAAJW4DXGI_ALPHA_MODE@@PEAPEAUID2D1Bitmap1@@.c)
 *     ?ClearSurface@CDxDevice@DirectComposition@@QEAAJPEAUID3D11Resource@@@Z @ 0x1800F753C (-ClearSurface@CDxDevice@DirectComposition@@QEAAJPEAUID3D11Resource@@@Z.c)
 *     ?ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z @ 0x1800FBA6C (-ReadTexture@CSurfaceFactory@DirectComposition@@QEAAXPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall DirectComposition::CAtlasSurfacePool::BeginDraw(
        DirectComposition::CAtlasSurfacePool *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct _GUID *a4,
        bool a5,
        enum DXGI_ALPHA_MODE a6,
        void **a7,
        struct ID2D1Bitmap **a8,
        struct ID2D1DrawingStateBlock **a9)
{
  char v9; // r12
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  int D2DBitmap; // ebx
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rcx
  const struct tagRECT *v26; // r15
  struct ID3D11Resource *v27; // rax
  struct ID3D11Resource *v28; // rcx
  _QWORD *v29; // r14
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 *v34; // rcx
  __int64 v35; // rax
  int (__fastcall ***v36)(_QWORD, GUID *, struct ID3D11Resource **); // rcx
  struct ID3D11Resource *v37; // rdi
  __int64 v38; // rbx
  struct ID3D11Resource *v39; // rcx
  struct ID3D11Resource *v40; // [rsp+30h] [rbp-51h] BYREF
  struct DirectComposition::CDxDevice *v41; // [rsp+38h] [rbp-49h] BYREF
  __int64 v42; // [rsp+40h] [rbp-41h]
  const struct tagRECT *v43; // [rsp+48h] [rbp-39h]
  struct tagRECT v44; // [rsp+50h] [rbp-31h] BYREF
  int v45; // [rsp+60h] [rbp-21h]
  __int64 v46; // [rsp+68h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]

  v9 = 0;
  v41 = (struct DirectComposition::CDxDevice *)a8;
  *a8 = 0LL;
  *a9 = 0LL;
  v12 = *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_e8f7fe7a_191c_466d_ad95_975678bda998.Data1;
  v43 = a2;
  if ( v12 && *(_QWORD *)a4->Data4 == *(_QWORD *)GUID_e8f7fe7a_191c_466d_ad95_975678bda998.Data4 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 18) + 128LL);
    if ( *(int *)(*(_QWORD *)(v13 + 24) + 368LL) < 1 || !*(_QWORD *)(v13 + 88) || *(_BYTE *)(v13 + 104) )
      return 2147500034LL;
    v40 = 0LL;
    if ( !*(_BYTE *)(v13 + 354) )
    {
      v44.left = *((_DWORD *)this + 40);
      v44.top = a6;
      v14 = 3;
      *(_QWORD *)&v44.right = 0x42C0000042C00000LL;
      v12 = *(_BYTE *)(v13 + 104) == 0;
      v15 = *((_QWORD *)this + 11);
      v46 = 0LL;
      if ( v12 )
        v14 = 1;
      v16 = (_QWORD *)((char *)this + 88);
      v45 = v14;
      D2DBitmap = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagRECT *, struct ID3D11Resource **))(*(_QWORD *)v15 + 96LL))(
                    v15,
                    *((_QWORD *)this + 8),
                    &v44,
                    &v40);
      if ( D2DBitmap < 0 )
      {
        v18 = 576LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\atlassurfacepool.cpp",
          (const char *)(unsigned int)D2DBitmap);
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v40);
        return (unsigned int)D2DBitmap;
      }
      v20 = *(_QWORD *)(*((_QWORD *)this + 18) + 128LL);
      *a9 = 0LL;
      v21 = *(_QWORD *)(v20 + 96);
      if ( v21 )
      {
        D2DBitmap = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct ID2D1DrawingStateBlock **))(*(_QWORD *)v21 + 96LL))(
                      v21,
                      0LL,
                      0LL,
                      a9);
        if ( D2DBitmap < 0 )
        {
          v18 = 579LL;
          goto LABEL_11;
        }
      }
      v22 = (_QWORD *)((char *)this + 56);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 352LL))(
        *((_QWORD *)this + 7),
        *((_QWORD *)this + 10));
      goto LABEL_25;
    }
LABEL_22:
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v40);
    D2DBitmap = DirectComposition::CAtlasSurfacePool::GetD2DBitmap(this, a6, (struct ID2D1Bitmap1 **)&v40);
    if ( D2DBitmap < 0 )
    {
      v18 = 587LL;
      goto LABEL_11;
    }
    v16 = (_QWORD *)((char *)this + 88);
    v22 = (_QWORD *)((char *)this + 56);
LABEL_25:
    if ( a3 )
    {
      (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *, const struct tagRECT *))(*(_QWORD *)*v16 + 72LL))(
        *v16,
        v40,
        a3);
      v25 = *v22;
      v44 = 0LL;
      (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v25 + 376LL))(v25, &v44);
    }
    v26 = v43;
    (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *, const struct tagRECT *))(*(_QWORD *)*v16 + 72LL))(
      *v16,
      v40,
      v43);
    (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *))(*(_QWORD *)*v22 + 592LL))(*v22, v40);
    v27 = v40;
    v40 = 0LL;
    *(_QWORD *)v41 = v27;
    if ( (*((_BYTE *)this + 172) & 0x10) == 0 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 384LL))(*v22);
      *((_BYTE *)this + 172) |= 0x10u;
    }
    if ( v9 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 8LL))(*v22);
      v16 = v22;
    }
    *a7 = (void *)*v16;
    ++*((_DWORD *)this + 44);
    v28 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      ((void (__fastcall *)(struct ID3D11Resource *))v28->lpVtbl->Release)(v28);
    }
    v29 = (_QWORD *)((char *)this + 16);
    goto LABEL_41;
  }
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2.Data1
    && *(_QWORD *)a4->Data4 == *(_QWORD *)GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2.Data4 )
  {
    v9 = 1;
    v23 = DirectComposition::CAtlasSurfacePool::EnsureD2DDeviceResources(this);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22B,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\atlassurfacepool.cpp",
        (const char *)(unsigned int)v23);
      return v24;
    }
    v40 = 0LL;
    goto LABEL_22;
  }
  v29 = (_QWORD *)((char *)this + 16);
  result = (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 2))(
             *((_QWORD *)this + 2),
             a4,
             a7);
  if ( (int)result < 0 )
    return result;
  if ( a3 )
  {
    v40 = 0LL;
    DirectComposition::CAtlasSurfacePool::SetGuardRect(this, a3);
    v30 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct ID3D11Resource **))*v29)(
            *v29,
            &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
            &v40);
    v31 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x282,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\atlassurfacepool.cpp",
        (const char *)(unsigned int)v30);
      return v31;
    }
    DirectComposition::CDxDevice::ClearSurface(
      (DirectComposition::CDxDevice *)(*(_QWORD *)(*((_QWORD *)this + 18) + 128LL) + 8LL),
      v40);
    ((void (__fastcall *)(struct ID3D11Resource *))v40->lpVtbl->Release)(v40);
  }
  v26 = v43;
LABEL_41:
  if ( g_fLockAndReadBeginDraw )
  {
    DirectComposition::CAtlasSurfacePool::RemoveGuardRect(this);
    DirectComposition::CSurfaceFactory::ReadTexture(
      *(DirectComposition::CSurfaceFactory **)(*((_QWORD *)this + 18) + 128LL),
      *((struct IUnknown **)this + 4));
  }
  v32 = *((_QWORD *)this + 4);
  v33 = *(_QWORD *)(*((_QWORD *)this + 18) + 128LL);
  DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(
    (DirectComposition::MultithreadDeviceLock *)&v41,
    (const struct DirectComposition::CDxDevice *)(v33 + 8));
  v34 = *(__int64 **)(v33 + 56);
  v35 = *v34;
  v44 = *v26;
  (*(void (__fastcall **)(__int64 *, __int64, struct tagRECT *))(v35 + 48))(v34, v32, &v44);
  DirectComposition::MultithreadDeviceLock::Leave(v41);
  *(struct tagRECT *)((char *)this + 248) = *v26;
  if ( a5 )
  {
    v36 = (int (__fastcall ***)(_QWORD, GUID *, struct ID3D11Resource **))*v29;
    v40 = 0LL;
    if ( (**v36)(v36, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v40) >= 0 )
    {
      v37 = v40;
      v38 = *(_QWORD *)(*((_QWORD *)this + 18) + 128LL);
      DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
        (DirectComposition::SwapDeviceContextState *)&v41,
        (const struct DirectComposition::CDxDevice *)(v38 + 8));
      (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *))(**(_QWORD **)(v38 + 80) + 936LL))(
        *(_QWORD *)(v38 + 80),
        v37);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)v41 + 9) + 1048LL))(
        *((_QWORD *)v41 + 9),
        v42,
        0LL);
      if ( v42 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      DirectComposition::MultithreadDeviceLock::Leave(v41);
    }
    v39 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      ((void (__fastcall *)(struct ID3D11Resource *))v39->lpVtbl->Release)(v39);
    }
  }
  return 0LL;
}

/*
 * XREFs of ?CopySurface@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FDCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z @ 0x18000BE74 (-CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchS.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z @ 0x180030204 (-IsRectangleInSurface@DirectComposition@@YA_NAEBUtagRECT@@II@Z.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearSurface@CDxDevice@DirectComposition@@QEAAJPEAUID3D11Resource@@@Z @ 0x1800F753C (-ClearSurface@CDxDevice@DirectComposition@@QEAAJPEAUID3D11Resource@@@Z.c)
 *     ?CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F761C (-CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Textur.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z @ 0x1800FD9C0 (-CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVirtualSurface::CopySurface(
        DirectComposition::CVirtualSurface *this,
        struct tagRECT *a2,
        struct IDXGISurface **a3)
{
  UINT v6; // esi
  struct IDXGISurface *v7; // r11
  unsigned int v8; // r14d
  struct ID3D11Resource *v9; // rdi
  __int64 v10; // r10
  struct ID3D11Texture2D *v11; // r15
  unsigned int v12; // ebx
  LONG left; // eax
  LONG bottom; // r14d
  LONG top; // ecx
  DXGI_FORMAT v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  DXGI_FORMAT v21; // eax
  DirectComposition::CDevice **v22; // rcx
  int v23; // eax
  struct tagRECT v24; // [rsp+40h] [rbp-59h] BYREF
  struct ID3D11Texture2D *v25; // [rsp+50h] [rbp-49h] BYREF
  struct ID3D11Resource *v26; // [rsp+58h] [rbp-41h] BYREF
  struct tagRECT v27; // [rsp+60h] [rbp-39h] BYREF
  DirectComposition::CDeviceLock *v28; // [rsp+70h] [rbp-29h] BYREF
  const struct DirectComposition::CDxDevice *v29[2]; // [rsp+78h] [rbp-21h] BYREF
  struct D3D11_TEXTURE2D_DESC v30; // [rsp+88h] [rbp-11h] BYREF

  v28 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v28);
  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
    v29,
    (DirectComposition::CDevice **)((*((_QWORD *)this + 5) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 5) >> 64)));
  v6 = *((_DWORD *)this + 12);
  v7 = 0LL;
  v8 = *((_DWORD *)this + 13);
  v9 = 0LL;
  v10 = *((_QWORD *)this + 5);
  v11 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  *(_QWORD *)&v24.left = 0LL;
  v24.right = v6;
  v24.bottom = v8;
  *(_QWORD *)&v27.left = 0LL;
  v27.right = v6;
  v27.bottom = v8;
  if ( *(_DWORD *)(v10 + 344) )
  {
    v12 = -2147467259;
    goto LABEL_3;
  }
  if ( *(_BYTE *)(v10 + 353) )
  {
    v12 = -2003302399;
    goto LABEL_3;
  }
  if ( a2 )
  {
    if ( !DirectComposition::IsRectangleInSurface((DirectComposition *)a2, (const struct tagRECT *)v6, v8) )
    {
      v12 = -2147024809;
      goto LABEL_3;
    }
    left = a2->left;
    bottom = a2->bottom;
    top = a2->top;
    v24.right = a2->right;
    v6 = v24.right - left;
    v24.bottom = bottom;
    v8 = bottom - top;
    v27.bottom = v8;
    v24.left = left;
    v24.top = top;
    v27.right = v24.right - left;
  }
  v17 = *((_DWORD *)this + 15);
  v30.Width = v6;
  v30.MipLevels = 1;
  v30.ArraySize = 1;
  v30.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
  v30.Height = v8;
  v30.Format = v17;
  v30.Usage = (int)v7;
  *(_QWORD *)&v30.BindFlags = 32LL;
  v30.MiscFlags = (unsigned int)v7;
  v18 = DirectComposition::CDxDevice::CreateTexture(
          (DirectComposition::CDevice **)(v10 + 8),
          &v30,
          0,
          (struct ID3D11Texture2D **)&v26);
  v9 = v26;
  v7 = 0LL;
  v12 = v18;
  if ( v18 >= 0 )
  {
    v19 = DirectComposition::CDxDevice::ClearSurface((DirectComposition::CDevice **)(*((_QWORD *)this + 5) + 8LL), v26);
    v7 = 0LL;
    v12 = v19;
    if ( v19 >= 0 )
    {
      v20 = DirectComposition::CVirtualSurface::CopySurface(
              (DirectComposition::CVirtualSurface *)((char *)this - 64),
              v9,
              0,
              0,
              &v24,
              0);
      v7 = 0LL;
      v12 = v20;
      if ( v20 >= 0 )
      {
        v21 = *((_DWORD *)this + 15);
        v30.MipLevels = 1;
        v30.ArraySize = 1;
        v30.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
        v22 = (DirectComposition::CDevice **)(*((_QWORD *)this + 5) + 8LL);
        v30.Width = v6;
        v30.Height = v8;
        v30.Format = v21;
        *(_QWORD *)&v30.Usage = 3LL;
        *(_QWORD *)&v30.CPUAccessFlags = 0x20000LL;
        v23 = DirectComposition::CDxDevice::CreateTexture(v22, &v30, 0, &v25);
        v11 = v25;
        v7 = 0LL;
        v12 = v23;
        if ( v23 >= 0 )
        {
          DirectComposition::CDxDevice::CopySurface(
            (DirectComposition::CDxDevice *)(*((_QWORD *)this + 5) + 8LL),
            (struct ID3D11Resource *)v25,
            0,
            0,
            v9,
            &v27,
            *(struct DirectComposition::CScratchSurfaceManager **)(*((_QWORD *)this + 5) + 304LL));
          v12 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, struct IDXGISurface **))v11->lpVtbl->QueryInterface)(
                  v11,
                  &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec,
                  a3);
          goto LABEL_5;
        }
      }
    }
  }
LABEL_3:
  if ( a3 )
    *a3 = v7;
LABEL_5:
  if ( v9 )
    ((void (__fastcall *)(struct ID3D11Resource *))v9->lpVtbl->Release)(v9);
  if ( v11 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v11->lpVtbl->Release)(v11);
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v29);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v28);
  return v12;
}

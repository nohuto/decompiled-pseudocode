/*
 * XREFs of ?CopySurface@CTileClump@DirectComposition@@UEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z @ 0x1800FD100
 * Callers:
 *     <none>
 * Callees:
 *     ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z @ 0x18000BE74 (-CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchS.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180034FA8 (-RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z.c)
 *     ??1SwapDeviceContextState@DirectComposition@@QEAA@XZ @ 0x180035000 (--1SwapDeviceContextState@DirectComposition@@QEAA@XZ.c)
 *     ?SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180038D94 (-SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9F4 (--0SwapDeviceContextState@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800F761C (-CreateTexture@CDxDevice@DirectComposition@@QEAAJAEBUD3D11_TEXTURE2D_DESC@@_NPEAPEAUID3D11Textur.c)
 */

__int64 __fastcall DirectComposition::CTileClump::CopySurface(
        DirectComposition::CTileClump *this,
        const struct tagRECT *a2,
        struct IDXGISurface **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  DXGI_FORMAT v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  struct ID3D11Resource *v10; // rcx
  int v11; // esi
  LONG v12; // r15d
  LONG v13; // r14d
  __int64 v14; // rax
  int v15; // eax
  struct ID3D11Resource *v16; // rdi
  __int64 v17; // rax
  struct ID3D11Resource *v19; // [rsp+40h] [rbp-59h] BYREF
  struct ID3D11Texture2D *v20; // [rsp+48h] [rbp-51h] BYREF
  struct tagRECT v21; // [rsp+50h] [rbp-49h] BYREF
  __int64 v22; // [rsp+60h] [rbp-39h]
  DirectComposition::CDeviceLock *v23; // [rsp+68h] [rbp-31h] BYREF
  const struct DirectComposition::CDxDevice *v24[2]; // [rsp+70h] [rbp-29h] BYREF
  struct D3D11_TEXTURE2D_DESC v25; // [rsp+80h] [rbp-19h] BYREF

  v23 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v23);
  DirectComposition::SwapDeviceContextState::SwapDeviceContextState(
    v24,
    (DirectComposition::CDevice **)((*((_QWORD *)this + 5) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 5) >> 64)));
  v5 = *((_QWORD *)this + 9);
  *(_QWORD *)&v21.left = 0LL;
  v6 = *(_QWORD *)(v5 + 44);
  v25.MipLevels = 1;
  v25.ArraySize = 1;
  *(_QWORD *)&v25.Width = v6;
  v7 = *(_DWORD *)(v5 + 52);
  v8 = *((_QWORD *)this + 5);
  v25.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
  v22 = v6;
  v25.Format = v7;
  *(_QWORD *)&v25.Usage = 3LL;
  *(_QWORD *)&v25.CPUAccessFlags = 0x20000LL;
  v9 = DirectComposition::CDxDevice::CreateTexture(
         (DirectComposition::CDevice **)(v8 + 8),
         &v25,
         0,
         (struct ID3D11Texture2D **)&v21);
  v10 = 0LL;
  v11 = v9;
  v19 = 0LL;
  v12 = 0;
  v13 = 0;
  if ( v9 >= 0 )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 9) + 16LL);
    v12 = *(_DWORD *)(v14 + 72) + (*(_DWORD *)(v14 + 88) & 1);
    v13 = *(_DWORD *)(v14 + 76) + ((*(_DWORD *)(v14 + 88) >> 2) & 1);
    v15 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))(*(_QWORD *)(v14 + 64) + 16LL))(
            *(_QWORD *)(*(_QWORD *)(v14 + 64) + 16LL),
            &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
            &v19);
    v10 = v19;
    v11 = v15;
  }
  v20 = 0LL;
  v16 = *(struct ID3D11Resource **)&v21.left;
  if ( v11 >= 0 )
  {
    v11 = ((__int64 (__fastcall *)(struct ID3D11Resource *, GUID *, struct ID3D11Texture2D **))v10->lpVtbl->QueryInterface)(
            v10,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            &v20);
    if ( v11 >= 0 )
    {
      DirectComposition::CDxDevice::RemoveGuardRect((DirectComposition::CDxDevice *)(*((_QWORD *)this + 5) + 8LL), v20);
      v21.right = v12 + v6;
      v17 = *((_QWORD *)this + 5);
      v21.bottom = v13 + HIDWORD(v22);
      v21.left = v12;
      v21.top = v13;
      DirectComposition::CDxDevice::CopySurface(
        (DirectComposition::CDxDevice *)(v17 + 8),
        v16,
        0,
        0,
        v19,
        &v21,
        *(struct DirectComposition::CScratchSurfaceManager **)(v17 + 304));
      DirectComposition::CDxDevice::SetEmptyGuardRect(
        (DirectComposition::CDxDevice *)(*((_QWORD *)this + 5) + 8LL),
        v20);
      if ( v20 )
        ((void (__fastcall *)(struct ID3D11Texture2D *))v20->lpVtbl->Release)(v20);
      v11 = ((__int64 (__fastcall *)(struct ID3D11Resource *, GUID *, struct IDXGISurface **))v16->lpVtbl->QueryInterface)(
              v16,
              &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec,
              a3);
    }
    v10 = v19;
  }
  if ( v10 )
    ((void (__fastcall *)(struct ID3D11Resource *))v10->lpVtbl->Release)(v10);
  if ( v16 )
    ((void (__fastcall *)(struct ID3D11Resource *))v16->lpVtbl->Release)(v16);
  DirectComposition::SwapDeviceContextState::~SwapDeviceContextState((DirectComposition::SwapDeviceContextState *)v24);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v23);
  return (unsigned int)v11;
}

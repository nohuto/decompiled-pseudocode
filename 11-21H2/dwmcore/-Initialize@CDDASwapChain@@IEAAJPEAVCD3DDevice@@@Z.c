/*
 * XREFs of ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z @ 0x180293BC0
 * Callers:
 *     ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x180293930 (-Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRende.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F4928 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDASwapChain::Initialize(CDDASwapChain *this, struct CD3DDevice *a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int DeviceTextureTarget; // eax
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 3);
  v14 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v2 + 72LL);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v14);
  v6 = v5(v2, 0LL, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v14);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x30u);
  }
  else
  {
    v9 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0LL;
    if ( v9 )
    {
      v10 = v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(
                            (__int64)a2,
                            v14,
                            *((_DWORD *)this + 11),
                            *((_DWORD *)this + 12),
                            *((_DWORD *)this + 15),
                            *((_DWORD *)this + 17),
                            1,
                            (unsigned __int64 *)this + 4);
    v8 = DeviceTextureTarget;
    if ( DeviceTextureTarget < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, DeviceTextureTarget, 0x38u);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
  return v8;
}

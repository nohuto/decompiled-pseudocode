/*
 * XREFs of ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800FE0C4
 * Callers:
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x1800FE2A8 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18006A66C (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180076EB8 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAB68 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetBitmap@@PEAXPEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800FDBBC (-Create@CLegacyRemotingSwapChain@@KAJPEAVCD3DDevice@@PEBGAEBU_UNSIGNED_RATIO@@PEAVIRenderTargetB.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18027D638 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 */

__int64 __fastcall CD3DDevice::CreateLegacyRemotingSwapChain(
        CD3DDevice *this,
        struct IDXGIOutputDWM *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct ILegacyRemotingSwapChain **a6)
{
  signed int v9; // ebx
  void *v10; // r14
  int v11; // eax
  int v12; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  struct D3D11_SUBRESOURCE_DATA *v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  HANDLE v22; // rax
  signed int LastError; // eax
  int v24; // r9d
  __int64 v25; // rcx
  int v26; // r9d
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  unsigned int v28; // [rsp+20h] [rbp-E0h]
  struct ID3D11Texture2D *v29; // [rsp+40h] [rbp-C0h] BYREF
  struct IRenderTargetBitmap *v30; // [rsp+48h] [rbp-B8h] BYREF
  void *v31; // [rsp+50h] [rbp-B0h] BYREF
  struct RenderTargetInfo *v32; // [rsp+58h] [rbp-A8h]
  struct _UNSIGNED_RATIO v33; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v34; // [rsp+68h] [rbp-98h] BYREF
  int v35; // [rsp+78h] [rbp-88h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  int v37; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h]
  _DWORD v39[5]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B4h] [rbp-4Ch]
  int v41; // [rsp+BCh] [rbp-44h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  int v43; // [rsp+C8h] [rbp-38h]
  __int128 v44; // [rsp+D0h] [rbp-30h]
  _BYTE v45[40]; // [rsp+E0h] [rbp-20h] BYREF
  struct _UNSIGNED_RATIO v46; // [rsp+108h] [rbp+8h]
  unsigned __int16 v47[40]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR Name[64]; // [rsp+1A0h] [rbp+A0h] BYREF

  v32 = a5;
  v30 = 0LL;
  *a6 = 0LL;
  v9 = *((_DWORD *)this + 272);
  v10 = 0LL;
  v31 = 0LL;
  if ( v9 < 0 )
  {
    v26 = v9;
    v28 = 604;
    goto LABEL_32;
  }
  v11 = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v45);
  v9 = v11;
  if ( v11 < 0 )
  {
    v26 = v11;
    v28 = 607;
    goto LABEL_32;
  }
  v33 = v46;
  if ( *((_BYTE *)this + 1509) && (*((_BYTE *)this + 924) & 4) != 0 )
  {
    v14 = *((_QWORD *)this + 71);
    v37 = 2;
    v38 = 0LL;
    v29 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 24LL))(v14, &v37);
    v9 = v15;
    if ( v15 < 0 )
    {
      v27 = 621;
    }
    else
    {
      DWORD2(v34) = 28;
      v39[2] = 1;
      *(_QWORD *)&v34 = "DWM LegacyRemoting SwapChain";
      v39[0] = a3->width;
      v39[1] = a3->height;
      v17 = *(_DWORD *)a4;
      v39[3] = 1;
      v40 = 1LL;
      v39[4] = v17;
      v44 = v34;
      v41 = 0;
      v42 = 40LL;
      v43 = 2;
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v29);
      v19 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)v39, v18, &v29);
      v9 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_1802E18D0, 2LL, v19, 0x27Du);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
        v25 = *((_QWORD *)this + 71);
        v35 = 3;
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 24LL))(v25, &v35);
        goto LABEL_6;
      }
      v21 = *((_QWORD *)this + 71);
      v35 = 3;
      v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 24LL))(v21, &v35);
      v9 = v15;
      if ( v15 < 0 )
      {
        v27 = 641;
      }
      else
      {
        v15 = StringCbPrintfW(Name, 0x80uLL, L"Local\\WarpResource_0x%I64x", v36);
        v9 = v15;
        if ( v15 < 0 )
        {
          v27 = 647;
        }
        else
        {
          SetLastError(0);
          v22 = OpenFileMappingW(0xF001Fu, 0, Name);
          if ( !v22 )
          {
            LastError = GetLastError();
            v9 = LastError;
            if ( LastError > 0 )
              v9 = (unsigned __int16)LastError | 0x80070000;
            v27 = 652;
            if ( v9 >= 0 )
              v9 = -2003304445;
            v24 = v9;
            goto LABEL_20;
          }
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
            &v31,
            v22);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v30);
          v15 = CD3DDevice::CreateRenderTargetBitmap(
                  this,
                  v29,
                  *((unsigned int *)a4 + 1),
                  *((unsigned int *)a4 + 2),
                  *((_DWORD *)v32 + 2),
                  *((_DWORD *)v32 + 4),
                  &v30);
          v9 = v15;
          if ( v15 >= 0 )
          {
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
            v10 = v31;
            goto LABEL_5;
          }
          v27 = 660;
        }
      }
    }
    v24 = v15;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802E18D0, 2LL, v24, v27);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
    goto LABEL_6;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v30);
  DWORD2(v34) = 28;
  *(_QWORD *)&v34 = "DWM LegacyRemoting SwapChain";
  v12 = CD3DDevice::CreateRenderTargetBitmap(this, (const struct CResourceTag *)&v34, a3, a4, v32, 0, &v30);
  v9 = v12;
  if ( v12 < 0 )
  {
    v28 = 669;
    goto LABEL_29;
  }
LABEL_5:
  v31 = 0LL;
  v12 = CLegacyRemotingSwapChain::Create(this, v47, &v33, v30, v10, a6);
  v9 = v12;
  if ( v12 < 0 )
  {
    v28 = 678;
LABEL_29:
    v26 = v12;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802E18D0, 2LL, v26, v28);
  }
LABEL_6:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v31);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v30);
  return (unsigned int)v9;
}

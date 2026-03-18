/*
 * XREFs of ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18027C130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x18027A42C (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 *     ?CreateScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027A708 (-CreateScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplay.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027AA80 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z.c)
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027ADB4 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPE.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027AF28 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAP.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAJ_N0@Z @ 0x18027BE60 (-PostPresent@CDDisplaySwapChain@@IEAAJ_N0@Z.c)
 *     ?PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x18027BF78 (-PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 */

__int64 __fastcall CDDisplaySwapChain::PresentMPO(
        CDDisplaySwapChain *this,
        __int64 a2,
        char a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        _QWORD *a5,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  bool v8; // r14
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  int CachedDesktopScanout; // eax
  __int64 v14; // rcx
  int CachedGeneralScanout; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v29; // [rsp+30h] [rbp-10h] BYREF
  __int64 v30; // [rsp+38h] [rbp-8h] BYREF

  v8 = (a3 & 2) != 0;
  v29 = 0LL;
  v30 = 0LL;
  v10 = CDDisplaySwapChain::PrePresent(this, v8);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x382u);
    goto LABEL_24;
  }
  if ( CCommonRegistryData::EnableDDisplayScanoutCaching )
  {
    if ( a7 != 1 || *(_DWORD *)a6 || !*((_DWORD *)a6 + 1) || *((_QWORD *)a6 + 1) )
    {
      CachedGeneralScanout = CDDisplaySwapChain::FindCachedGeneralScanout(this, v8, a7, a6, &v29);
      v12 = CachedGeneralScanout;
      if ( CachedGeneralScanout < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, CachedGeneralScanout, 0x399u);
        goto LABEL_24;
      }
    }
    else
    {
      CachedDesktopScanout = CDDisplaySwapChain::FindCachedDesktopScanout(this, v8, a6, &v29);
      v12 = CachedDesktopScanout;
      if ( CachedDesktopScanout < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, CachedDesktopScanout, 0x390u);
        goto LABEL_24;
      }
    }
  }
  else
  {
    v17 = CDDisplaySwapChain::CreateScanout(this, v8, a7, a6, &v29);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x3A3u);
      goto LABEL_24;
    }
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  v19 = v29;
  (**(void (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 *))v29)(
    v29,
    &GUID_56b76193_af04_5806_83a8_56be01847aad,
    &v30);
  v20 = CDDisplaySwapChain::ComputeCachedHdrMetadata(this, a4, a5);
  v12 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x3A8u);
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 112LL))(v30, *((_QWORD *)this + 62));
    v12 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x3A9u);
    }
    else
    {
      v24 = CDDisplaySwapChain::ExecutePresent(this, v19);
      v12 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x3ACu);
      }
      else
      {
        v26 = CDDisplaySwapChain::PostPresent(this, v8, v24 == 142213121);
        v12 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0x3ADu);
      }
    }
  }
LABEL_24:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v30);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
  return v12;
}

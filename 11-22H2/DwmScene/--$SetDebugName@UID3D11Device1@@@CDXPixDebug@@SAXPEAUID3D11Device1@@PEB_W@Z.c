/*
 * XREFs of ??$SetDebugName@UID3D11Device1@@@CDXPixDebug@@SAXPEAUID3D11Device1@@PEB_W@Z @ 0x1800DA95C
 * Callers:
 *     ?CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV?$ComPtr@UID3D11Device1@@@34@AEAV?$ComPtr@UID3D11DeviceContext1@@@34@W4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@6W4DeviceFeatureFlags@@@Z @ 0x1800DB070 (-CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV-.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??$_snprintf_s@$0BAA@@@YAHAEAY0BAA@D_KPEBDZZ @ 0x1800DAF7C (--$_snprintf_s@$0BAA@@@YAHAEAY0BAA@D_KPEBDZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDXPixDebug::SetDebugName<ID3D11Device1>(__int64 a1)
{
  void (__fastcall *v2)(__int64, const GUID *, _QWORD, char *); // rbx
  unsigned int v3; // eax
  unsigned int v4; // [rsp+20h] [rbp-128h]
  char String[256]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1 )
  {
    memset_0(String, 0, sizeof(String));
    v4 = CDXPixDebug::s_uDebugNameNumber++;
    _snprintf_s<256>(String, -1LL, "%S(%u)", L"CoreEngine", v4);
    v2 = *(void (__fastcall **)(__int64, const GUID *, _QWORD, char *))(*(_QWORD *)a1 + 280LL);
    v3 = strnlen(String, 0x7FFFFFFFuLL);
    v2(a1, &WKPDID_D3DDebugObjectName, v3, String);
  }
}

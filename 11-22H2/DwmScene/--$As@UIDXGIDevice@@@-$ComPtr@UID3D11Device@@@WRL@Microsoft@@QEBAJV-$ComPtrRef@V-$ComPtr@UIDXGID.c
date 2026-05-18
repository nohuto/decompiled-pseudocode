/*
 * XREFs of ??$As@UIDXGIDevice@@@?$ComPtr@UID3D11Device@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGIDevice@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DA900
 * Callers:
 *     ?CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV?$ComPtr@UID3D11Device1@@@34@AEAV?$ComPtr@UID3D11DeviceContext1@@@34@W4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@6W4DeviceFeatureFlags@@@Z @ 0x1800DB070 (-CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ID3D11Device>::As<IDXGIDevice>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, a2);
}

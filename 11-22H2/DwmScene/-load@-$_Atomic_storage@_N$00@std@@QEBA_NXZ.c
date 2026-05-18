/*
 * XREFs of ?load@?$_Atomic_storage@_N$00@std@@QEBA_NXZ @ 0x180042CE8
 * Callers:
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 *     _lambda_1d477eeb7fcd6b2c40a05bb000d8c39c_::operator() @ 0x1800573EC (_lambda_1d477eeb7fcd6b2c40a05bb000d8c39c_--operator().c)
 *     ?RenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800581C0 (-RenderThread@Display@Engine@Spectre@@AEAAXXZ.c)
 *     ?BeginTimeSpanMarker@GpuProfiler@Engine@Spectre@@QEAA?AV?$weak_ptr@VITimeSpanMarker@GpuProfilerFrame@Engine@Spectre@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@5@@Z @ 0x1800A10AC (-BeginTimeSpanMarker@GpuProfiler@Engine@Spectre@@QEAA-AV-$weak_ptr@VITimeSpanMarker@GpuProfilerF.c)
 *     ?DeviceFactoryD3D11CreateDeviceWrapper@@YAJPEAUIDXGIAdapter@@W4D3D_DRIVER_TYPE@@PEAUHINSTANCE__@@IPEBW4D3D_FEATURE_LEVEL@@IIPEAPEAUID3D11Device@@PEAW44@PEAPEAUID3D11DeviceContext@@@Z @ 0x1800DB860 (-DeviceFactoryD3D11CreateDeviceWrapper@@YAJPEAUIDXGIAdapter@@W4D3D_DRIVER_TYPE@@PEAUHINSTANCE__@.c)
 * Callees:
 *     ??$_Atomic_address_as@DU?$_Atomic_padded@_N@std@@@std@@YAPEDDAEBU?$_Atomic_padded@_N@0@@Z @ 0x18003F1BC (--$_Atomic_address_as@DU-$_Atomic_padded@_N@std@@@std@@YAPEDDAEBU-$_Atomic_padded@_N@0@@Z.c)
 */

char __fastcall std::_Atomic_storage<bool,1>::load(__int64 a1)
{
  return *(_BYTE *)std::_Atomic_address_as<char,std::_Atomic_padded<bool>>(a1);
}

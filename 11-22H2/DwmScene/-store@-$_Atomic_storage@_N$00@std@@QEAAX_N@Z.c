/*
 * XREFs of ?store@?$_Atomic_storage@_N$00@std@@QEAAX_N@Z @ 0x180042D30
 * Callers:
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x180040168 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 *     ?DeviceFactoryD3D11CreateDeviceWrapper@@YAJPEAUIDXGIAdapter@@W4D3D_DRIVER_TYPE@@PEAUHINSTANCE__@@IPEBW4D3D_FEATURE_LEVEL@@IIPEAPEAUID3D11Device@@PEAW44@PEAPEAUID3D11DeviceContext@@@Z @ 0x1800DB860 (-DeviceFactoryD3D11CreateDeviceWrapper@@YAJPEAUIDXGIAdapter@@W4D3D_DRIVER_TYPE@@PEAUHINSTANCE__@.c)
 * Callees:
 *     ??$_Atomic_address_as@DU?$_Atomic_padded@_N@std@@@std@@YAPECDAEAU?$_Atomic_padded@_N@0@@Z @ 0x18003F1B0 (--$_Atomic_address_as@DU-$_Atomic_padded@_N@std@@@std@@YAPECDAEAU-$_Atomic_padded@_N@0@@Z.c)
 *     ??$_Atomic_reinterpret_as@D_N@std@@YADAEB_N@Z @ 0x18003F1C8 (--$_Atomic_reinterpret_as@D_N@std@@YADAEB_N@Z.c)
 */

_BYTE *__fastcall std::_Atomic_storage<bool,1>::store(__int64 a1, char a2)
{
  __int64 v2; // r8
  _BYTE *result; // rax
  char v4; // dl
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  std::_Atomic_reinterpret_as<char,bool>((__int64)&v5);
  result = (_BYTE *)std::_Atomic_address_as<char,std::_Atomic_padded<bool>>(v2);
  *result = v4;
  return result;
}

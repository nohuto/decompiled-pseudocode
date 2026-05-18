/*
 * XREFs of ??$?4UID3D11Texture3D@@@?$ComPtr@UID3D11Resource@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@UID3D11Texture3D@@@12@@Z @ 0x1800CC180
 * Callers:
 *     ?GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA?AUTextureImageSet@34@XZ @ 0x1800CE110 (-GetDeviceBuffer@TextureD3D11@D3D11@Engine@Spectre@@UEBA-AUTextureImageSet@34@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ @ 0x180011520 (-InternalAddRef@-$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<ID3D11Resource>::operator=<ID3D11Texture3D>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = *a2;
  v3 = v6;
  Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>::InternalAddRef(&v6);
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}

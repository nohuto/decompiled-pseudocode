/*
 * XREFs of std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1801174D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x180153280 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18015CF28 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rbx
  struct AtmosCheck *v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(const unsigned __int16 **)(a1 + 8);
  if ( v1 )
    v1 = *(const unsigned __int16 **)v1;
  v2 = 0LL;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v2);
  if ( (int)CSpatialAudioTech::GetAtmosCheckInstance(&v2) >= 0 && v2 )
    AtmosCheck::RefreshLicenseStatus(v2, v1);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v2);
  CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
}

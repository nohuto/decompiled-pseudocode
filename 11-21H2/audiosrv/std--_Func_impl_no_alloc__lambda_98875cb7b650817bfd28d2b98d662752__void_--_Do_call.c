/*
 * XREFs of std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1800EB120
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x18013D770 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180155EE8 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
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
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v2);
  if ( (int)CSpatialAudioTech::GetAtmosCheckInstance(&v2) >= 0 && v2 )
    AtmosCheck::RefreshLicenseStatus(v2, v1);
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v2);
  CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
}

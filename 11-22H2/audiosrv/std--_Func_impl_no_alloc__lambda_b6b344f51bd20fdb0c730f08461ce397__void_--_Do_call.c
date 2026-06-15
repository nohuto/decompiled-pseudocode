/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x180117540
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180034C90 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x180153280 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call()
{
  __int64 v0; // r8
  __int64 v1; // r9
  struct AtmosCheck *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v2);
  if ( (int)CSpatialAudioTech::GetAtmosCheckInstance(&v2) >= 0 && v2 )
    AtmosCheck::PerformLicenseCheck(v2, 0LL, v0, v1);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v2);
  CPolicyConfig::UpdateRenderingEndpointsSpatialSettings();
}

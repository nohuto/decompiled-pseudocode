/*
 * XREFs of ?ValidateModuleVersion@GameInputModule@@CA_NPEAUHINSTANCE__@@AEBUGameInputVersion@@@Z @ 0x18004C288
 * Callers:
 *     ?LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z @ 0x18004BB94 (-LoadModule@GameInputModule@@AEAAJW4ModuleKind@1@AEBUGameInputVersion@@@Z.c)
 * Callees:
 *     ?IsXbox@GameInputModule@@CA_NXZ @ 0x18004C350 (-IsXbox@GameInputModule@@CA_NXZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameInputInbox@@@details@wil@@QEAA_NXZ @ 0x18006DAF4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameInputInbox@@@detail.c)
 */

bool __fastcall GameInputModule::ValidateModuleVersion(HINSTANCE a1, const struct GameInputVersion *a2)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v6[3]; // [rsp+48h] [rbp-30h] BYREF

  if ( !GameInputModule::IsXbox() )
  {
    v6[0] = 16LL;
    v6[1] = 1LL;
    v6[2] = 0LL;
    if ( (int)LdrResSearchResource(a1, v6, 3LL, 256LL, &v5, 0LL, 0LL, 0LL) < 0 )
      return 0;
    v3 = *(unsigned int *)(v5 + 52) | ((unsigned __int64)*(unsigned int *)(v5 + 48) << 32);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_GameInputInbox>::GetImpl'::`2'::impl) )
      return v3 != 0;
  }
  return 1;
}

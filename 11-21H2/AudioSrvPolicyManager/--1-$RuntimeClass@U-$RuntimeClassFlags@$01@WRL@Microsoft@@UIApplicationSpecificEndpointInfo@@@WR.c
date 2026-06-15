/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationSpecificEndpointInfo@@@WRL@Microsoft@@UEAA@XZ @ 0x180008888
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$0 @ 0x180045198 (_CApplication--CApplication_--_1_--dtor$0.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$19 @ 0x18004558A (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$19.c)
 *     _TSSession::Create_::_1_::dtor$6 @ 0x180045EFD (_TSSession--Create_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationSpecificEndpointInfo>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationSpecificEndpointInfo>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}

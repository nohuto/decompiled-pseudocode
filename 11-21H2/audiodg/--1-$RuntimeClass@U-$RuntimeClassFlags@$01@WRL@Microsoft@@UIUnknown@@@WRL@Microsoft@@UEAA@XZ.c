/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@UEAA@XZ @ 0x140051B14
 * Callers:
 *     _CRTThreadManager::CRTThreadManager_::_1_::dtor$0 @ 0x1400395CA (_CRTThreadManager--CRTThreadManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}

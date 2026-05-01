/*
 * XREFs of _SetRelatedProcessesToGameConfigStore_::_1_::dtor$0 @ 0x18004C93D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetRelatedProcessesToGameConfigStore_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(*(__int64 **)(a2 + 128));
}

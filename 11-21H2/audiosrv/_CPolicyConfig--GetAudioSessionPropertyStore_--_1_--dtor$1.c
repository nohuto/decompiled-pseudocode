/*
 * XREFs of _CPolicyConfig::GetAudioSessionPropertyStore_::_1_::dtor$1 @ 0x18006C672
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 32));
}

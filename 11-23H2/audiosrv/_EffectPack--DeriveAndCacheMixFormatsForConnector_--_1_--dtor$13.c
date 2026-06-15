/*
 * XREFs of _EffectPack::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$13 @ 0x180079636
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EffectPack::DeriveAndCacheMixFormatsForConnector_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 160));
}

/*
 * XREFs of CreateAudioMediaType_Unsafe @ 0x180061630
 * Callers:
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x18000B120 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_.c)
 *     ?GetFormat@CAPOWrapperClient@@UEAAJIPEAPEAUIAudioMediaType@@@Z @ 0x180118A90 (-GetFormat@CAPOWrapperClient@@UEAAJIPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x180118C30 (-GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180060E14 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 */

__int64 __fastcall CreateAudioMediaType_Unsafe(
        const struct tWAVEFORMATEX *a1,
        unsigned int a2,
        struct IAudioMediaType **a3)
{
  return CAudioMediaType::Create(a1, a2, a3, 0.0, 1);
}

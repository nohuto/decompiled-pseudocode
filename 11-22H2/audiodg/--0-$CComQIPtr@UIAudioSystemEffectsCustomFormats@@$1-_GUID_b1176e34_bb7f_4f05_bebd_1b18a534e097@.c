/*
 * XREFs of ??0?$CComQIPtr@UIAudioSystemEffectsCustomFormats@@$1?_GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000E504
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14000DEB0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?GetCustomFormatCount@CAPOWrapperSrv@@UEAAJPEAI@Z @ 0x14006E7E0 (-GetCustomFormatCount@CAPOWrapperSrv@@UEAAJPEAI@Z.c)
 *     ?GetFormatRemote@CAPOWrapperSrv@@UEAAJIPEAPEAUtWAVEFORMATEX@@@Z @ 0x14006E9A0 (-GetFormatRemote@CAPOWrapperSrv@@UEAAJIPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFormatRepresentationRemote@CAPOWrapperSrv@@UEAAJIPEAPEAG@Z @ 0x14006EAB0 (-GetFormatRepresentationRemote@CAPOWrapperSrv@@UEAAJIPEAPEAG@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097, a1);
  return a1;
}

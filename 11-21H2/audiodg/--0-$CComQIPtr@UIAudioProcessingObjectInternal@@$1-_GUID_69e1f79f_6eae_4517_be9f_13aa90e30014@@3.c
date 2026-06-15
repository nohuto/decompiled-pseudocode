/*
 * XREFs of ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140017C4C
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x140017630 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x14005A07C (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x140066EA0 (-GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014, a1);
  return a1;
}

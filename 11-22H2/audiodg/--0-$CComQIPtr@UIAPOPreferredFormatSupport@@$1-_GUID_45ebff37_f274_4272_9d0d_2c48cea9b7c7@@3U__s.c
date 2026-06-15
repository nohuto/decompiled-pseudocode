/*
 * XREFs of ??0?$CComQIPtr@UIAPOPreferredFormatSupport@@$1?_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000E54C
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14000DEB0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x14006EB80 (-GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7, a1);
  return a1;
}

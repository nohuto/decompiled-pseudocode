/*
 * XREFs of ??0CEndpointNotificationDelegator@@QEAA@XZ @ 0x1801043A4
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointNotificationDelegator@@AEAVWeakRef@12@@Z @ 0x180103428 (--$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@@Details@WRL.c)
 *     ??$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointNotificationDelegator@@AEAVWeakRef@12@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x18010352C (--$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@W4__MIDL___M.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@QEAA@XZ @ 0x18005D648 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft.c)
 */

CEndpointNotificationDelegator *__fastcall CEndpointNotificationDelegator::CEndpointNotificationDelegator(
        CEndpointNotificationDelegator *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>(this);
  *(_QWORD *)this = &CEndpointNotificationDelegator::`vftable';
  *((_QWORD *)this + 1) = &CEndpointNotificationDelegator::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 2) = &CEndpointNotificationDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}

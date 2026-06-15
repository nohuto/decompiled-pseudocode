/*
 * XREFs of ?Attach@?$ComPtr@VCEndpointNotificationDelegator@@@WRL@Microsoft@@QEAAXPEAVCEndpointNotificationDelegator@@@Z @ 0x1801059A4
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointNotificationDelegator@@AEAVWeakRef@12@@Z @ 0x180103478 (--$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@@Details@WRL.c)
 *     ??$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointNotificationDelegator@@AEAVWeakRef@12@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x18010357C (--$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@W4__MIDL___M.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CEndpointNotificationDelegator>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}

/*
 * XREFs of ??$copy_to@VCEndpointStore@@@?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCEndpointStore@@@Z @ 0x18010EEBC
 * Callers:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::copy_to<CEndpointStore>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)a2 = v2;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 12), a2);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
  }
  return 0LL;
}

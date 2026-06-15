/*
 * XREFs of ??1?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800CC64C
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180038870 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18005F9C4 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$3 @ 0x18007B880 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$3.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::dtor$0 @ 0x18007D5E4 (_AtmosCheck--AddArrayToLicenseMap_--_1_--dtor$0.c)
 *     AudioServerGetAudioStreamInfo @ 0x180120B80 (AudioServerGetAudioStreamInfo.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18015C63C (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     _AtmosCheck::PerformLicenseCheckForEndpoint_::_1_::dtor$1 @ 0x18015C7FF (_AtmosCheck--PerformLicenseCheckForEndpoint_--_1_--dtor$1.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x18015C814 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 *     _AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype_::_1_::dtor$1 @ 0x18015C968 (_AtmosCheck--PerformLicenseCheckForSpatialAudioSubtype_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::~unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    operator delete(v1);
}

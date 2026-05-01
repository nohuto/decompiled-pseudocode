/*
 * XREFs of ??0?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18019B6B4
 * Callers:
 *     ??$create@V?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x18019A28C (--$create@V-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18019B54C (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_18019B54C.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18007C084 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z @ 0x1801494C0 (--0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a2 + 4);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 4) = 0;
  wil::details::StoredCallContextInfo::StoredCallContextInfo((_OWORD *)(a1 + 40), a2 + 40);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  wil::StoredFailureInfo::StoredFailureInfo(a1 + 80, a2 + 80);
  *(_QWORD *)(a1 + 248) = 0LL;
  return a1;
}

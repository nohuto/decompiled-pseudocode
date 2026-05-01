/*
 * XREFs of ??$create@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x1804FFBF0
 * Callers:
 *     ??4?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180500068 (--4-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 * Callees:
 *     ??4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z @ 0x180048994 (--4StoredCallContextInfo@details@wil@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18007C084 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1804BD468 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1804BD468.c)
 */

char __fastcall wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>(
        volatile signed __int32 **a1,
        __int64 a2)
{
  _DWORD *v4; // rbx
  char result; // al

  v4 = operator new(0x108uLL, (const struct std::nothrow_t *)&std::nothrow);
  result = 0;
  if ( v4 )
  {
    *v4 = 1;
    v4[2] = 0;
    *((_BYTE *)v4 + 12) = 0;
    v4[2] = *(_DWORD *)a2;
    *((_BYTE *)v4 + 12) = *(_BYTE *)(a2 + 4);
    *((_OWORD *)v4 + 1) = *(_OWORD *)(a2 + 8);
    *((_OWORD *)v4 + 2) = *(_OWORD *)(a2 + 24);
    *(_DWORD *)a2 = 0;
    *(_BYTE *)(a2 + 4) = 0;
    *((_OWORD *)v4 + 3) = 0LL;
    *((_OWORD *)v4 + 4) = 0LL;
    wil::details::StoredCallContextInfo::operator=((__int64)(v4 + 12), a2 + 40);
    v4[20] = *(_DWORD *)(a2 + 72);
    v4[21] = *(_DWORD *)(a2 + 76);
    wil::StoredFailureInfo::StoredFailureInfo((__int64)(v4 + 22), a2 + 80);
    *((_QWORD *)v4 + 32) = 0LL;
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1);
    result = 1;
    *a1 = v4;
  }
  return result;
}

/*
 * XREFs of ??1?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1806E6AD8
 * Callers:
 *     ??1CreateXamlHost@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6BFC (--1CreateXamlHost@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1EnsureInitializedAsync@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6C54 (--1EnsureInitializedAsync@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1Hide@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6C80 (--1Hide@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1Play@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6CD8 (--1Play@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1Show@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6D04 (--1Show@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1StartXamlHostThreadProc@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6D5C (--1StartXamlHostThreadProc@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1SyncState@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6D88 (--1SyncState@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ??1UpdateSize@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6DB4 (--1UpdateSize@SharedVisualHostProvider@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1806E6B48 (--1-$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType_ea_1806E6B48.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1806ED724 (-reset@-$shared_object@V-$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_ea_1806ED724.c)
 */

void __fastcall wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 312);
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}

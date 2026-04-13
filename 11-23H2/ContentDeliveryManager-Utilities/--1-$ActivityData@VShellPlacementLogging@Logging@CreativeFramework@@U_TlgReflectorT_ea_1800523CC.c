/*
 * XREFs of ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800523CC
 * Callers:
 *     ??1?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180052364 (--1-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_T.c)
 *     ?reset@?$shared_object@V?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180064E58 (-reset@-$shared_object@V-$ActivityData@VShellPlacementLogging@Logging@CreativeFrame_ea_180064E58.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180045648 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1800551D0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 232));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  return _TlgActivityBase<wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::~_TlgActivityBase<wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>(a1);
}

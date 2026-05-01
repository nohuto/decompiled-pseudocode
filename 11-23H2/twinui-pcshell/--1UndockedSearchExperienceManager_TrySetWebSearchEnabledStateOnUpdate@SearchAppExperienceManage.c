/*
 * XREFs of ??1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1801E8B28
 * Callers:
 *     _lambda_9e570927e665d205f933b0ae213f3c70_::__lambda_9e570927e665d205f933b0ae213f3c70_ @ 0x1801E8648 (_lambda_9e570927e665d205f933b0ae213f3c70_--__lambda_9e570927e665d205f933b0ae213f3c70_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___::_CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___ @ 0x1801E877C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___--_CTask.c)
 *     _lambda_9e570927e665d205f933b0ae213f3c70_::operator() @ 0x1801E932C (_lambda_9e570927e665d205f933b0ae213f3c70_--operator().c)
 *     __lambda_9e570927e665d205f933b0ae213f3c70_::operator()_::_1_::dtor$0 @ 0x1801E95FA (__lambda_9e570927e665d205f933b0ae213f3c70_--operator()_--_1_--dtor$0.c)
 *     ?TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801EFCC4 (-TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     _UndockedSearchAppExperienceManager::TrySetWebSearchEnabledStateOnUpdate_::_1_::dtor$0 @ 0x1801EFE44 (_UndockedSearchAppExperienceManager--TrySetWebSearchEnabledStateOnUpdate_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801EAC24 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate(
        SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}

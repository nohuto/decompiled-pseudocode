/*
 * XREFs of ?zInternalStop@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801F1700
 * Callers:
 *     ?Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAX_N000@Z @ 0x1801EF698 (-Stop@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceMan.c)
 *     ?StopActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@MEAAXXZ @ 0x1801EF9F0 (-StopActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExper.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801EDACC (-LockExclusive@-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef.c)
 */

void __fastcall wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v2);
  **(_DWORD **)(a1 + 48) = 2;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}

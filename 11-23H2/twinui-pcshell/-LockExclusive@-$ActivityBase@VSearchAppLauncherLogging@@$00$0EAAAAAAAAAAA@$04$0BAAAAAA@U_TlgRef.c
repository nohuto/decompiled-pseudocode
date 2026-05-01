/*
 * XREFs of ?LockExclusive@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801EDACC
 * Callers:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801EAC24 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?NotifyFailure@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1801EDF60 (-NotifyFailure@-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef.c)
 *     ?StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1801EF4CC (-StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExpe.c)
 *     ?zInternalStop@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801F1700 (-zInternalStop@-$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

RTL_SRWLOCK **__fastcall wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        __int64 a1,
        RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v2; // rcx
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK **v5; // rcx
  int v6; // edx
  int v7; // edi
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(RTL_SRWLOCK **)(a1 + 312);
  if ( v2 )
  {
    wil::srwlock::lock_exclusive(v2 + 32, &v9);
    v4 = v9;
    v5 = &v9;
    v6 = 0;
    v7 = 1;
  }
  else
  {
    v4 = 0LL;
    v5 = &v10;
    v7 = 0;
    v6 = 2;
  }
  *v5 = 0LL;
  *a2 = v4;
  if ( v6 )
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
  if ( v7 )
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
  return a2;
}

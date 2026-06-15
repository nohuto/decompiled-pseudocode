/*
 * XREFs of ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x140082EF8
 * Callers:
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x140083F84 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x140089FFC (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x14008CDD0 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 * Callees:
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x14004B19C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x14004B55C (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140081E18 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall wil::details::FeatureStateManager::EnsureStateData(wil::details::FeatureStateManager *this)
{
  __int64 v2; // rsi
  void *v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_QWORD *)this + 3) )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v5);
    if ( *((_QWORD *)this + 3) )
    {
      v2 = 0LL;
    }
    else
    {
      if ( !*((_QWORD *)this + 2) )
      {
        v4 = 0LL;
        if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(
                    *((_QWORD *)this + 1),
                    &v4) >= 0
          && !*((_QWORD *)this + 2) )
        {
          *((_QWORD *)this + 2) = v4;
        }
      }
      v2 = (*((_QWORD *)this + 2) + 32LL) & -(__int64)(*((_QWORD *)this + 2) != 0LL);
    }
    AcquireSRWLockExclusive((PSRWLOCK)this + 4);
    if ( !*((_QWORD *)this + 3) )
      *((_QWORD *)this + 3) = v2;
    if ( this != (wil::details::FeatureStateManager *)-32LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 4);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v5);
  }
  return *((_QWORD *)this + 3) != 0LL;
}

/*
 * XREFs of ?InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180401658
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___::Run @ 0x1801DB4C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a95e7b8488d12cdff5d3938d5c791af7___--Run.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E1628 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA?AW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@XZ @ 0x1801B2F04 (-DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA-AW4GamingOverlayDisplayMode@Ga.c)
 *     ??$InvokeDelegates@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@U?$IEventHandler@_N@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1802D2C42 (--$InvokeDelegates@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@U-$IEventHandler@_N@Foundation@Wi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::InvokeOverlayDisplayModeEventTask(
        GamingOverlayExperienceManager *this)
{
  int v2; // esi
  RTL_SRWLOCK *v3; // rdi
  int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp+28h] BYREF
  volatile signed __int32 *v9; // [rsp+68h] [rbp+30h] BYREF
  RTL_SRWLOCK *v10; // [rsp+70h] [rbp+38h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp+40h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 448));
  v2 = GamingOverlayExperienceManager::DetermineCurrentDisplayMode((__int64)this);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v3 = (RTL_SRWLOCK *)((char *)this + 1352);
  v11 = ((unsigned __int64)this + 136) & -(__int64)(this != 0LL);
  LOBYTE(lpCriticalSection) = v2 == 2;
  v4 = 0;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v10, v3 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v9, (volatile int *)v3);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
  if ( v9 )
  {
    v6[0] = &v11;
    v6[1] = &lpCriticalSection;
    v4 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_813c1a060ca2f05baf3690d2c7f23b38_,Windows::Foundation::IEventHandler<bool>>(
           v6,
           v9,
           v3);
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v9);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF91,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}

/*
 * XREFs of ?HandleAudioChanged@GamingOverlayExperienceManager@@UEAAJH@Z @ 0x180400050
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E1628 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InvokeDelegates@V_lambda_0808a6f2104e0fe6f743d65699099e1d_@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_0808a6f2104e0fe6f743d65699099e1d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1803F40CC (--$InvokeDelegates@V_lambda_0808a6f2104e0fe6f743d65699099e1d_@@U-$ITypedEventHandler@PEAUIGaming.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::HandleAudioChanged(RTL_SRWLOCK *this, int a2)
{
  volatile int *v2; // rdi
  int v3; // ebx
  _QWORD v5[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  volatile signed __int32 *v7; // [rsp+50h] [rbp+20h] BYREF
  int v8; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v9; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+38h] BYREF

  v2 = (volatile int *)&this[141];
  v8 = a2;
  v10 = this - 17;
  v3 = 0;
  v7 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v9, this + 142);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=((__int64 *)&v7, v2);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
  if ( v7 )
  {
    v5[0] = &v10;
    v5[1] = &v8;
    v3 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_0808a6f2104e0fe6f743d65699099e1d_,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>>(
           (__int64)v5,
           v7,
           (RTL_SRWLOCK *)v2);
  }
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(&v7);
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA76,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}

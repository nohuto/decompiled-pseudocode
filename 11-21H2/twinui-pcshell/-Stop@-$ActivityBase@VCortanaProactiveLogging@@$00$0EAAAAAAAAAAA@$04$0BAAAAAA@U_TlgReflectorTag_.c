/*
 * XREFs of ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801343F8
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800889D0 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18035B6A0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18038A920 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 *     ?Hide@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x18039B080 (-Hide@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x18039B450 (-MinimizeToBoxMode@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?Hide@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803A8610 (-Hide@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1803A8B30 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C5DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?get@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AXXZ@Z @ 0x18012AF8C (-get@-$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AX.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1802D9BA8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        PSRWLOCK a1)
{
  PSRWLOCK v1; // rdi
  RTL_SRWLOCK *Ptr; // rdx
  PSRWLOCK *p_SRWLock; // rax
  char v4; // si
  RTL_SRWLOCK *v5; // rbx
  _DWORD *v6; // rax
  int v7; // esi
  int v8; // esi
  const struct wil::FailureInfo *v9; // rdx
  __int64 *v10; // rax
  _DWORD *v11; // rbx
  _BYTE v12[176]; // [rsp+40h] [rbp-59h] BYREF
  RTL_SRWLOCK *v13; // [rsp+100h] [rbp+67h] BYREF
  DWORD CurrentThreadId; // [rsp+108h] [rbp+6Fh] BYREF
  PSRWLOCK SRWLock; // [rsp+110h] [rbp+77h] BYREF

  v1 = a1;
  CurrentThreadId = 0;
  Ptr = (RTL_SRWLOCK *)a1[39].Ptr;
  if ( Ptr )
  {
    wil::AcquireSRWLockExclusive(&v13, Ptr + 32);
    p_SRWLock = &v13;
    v4 = 1;
    v5 = v13;
  }
  else
  {
    p_SRWLock = &SRWLock;
    v4 = 2;
    v5 = 0LL;
  }
  *p_SRWLock = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    a1 = SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v4 & 1) != 0 )
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
  v6 = v1[6].Ptr;
  v7 = v6[18];
  if ( v7 < 1 )
  {
    memset_0(v12, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v12, v9);
  }
  if ( (int)v6[19] >= 0 )
    v6[19] = 0;
  v8 = v7 - 1;
  v6[18] = v8;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( v8 )
  {
    v10 = wil::details::static_lazy<CortanaProactiveLogging>::get(
            (__int64)a1,
            _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    v11 = (_DWORD *)v10[1];
    if ( *v11 > 5u && tlgKeywordOn(v10[1], 0x400000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      LODWORD(v13) = 0;
      SRWLock = (PSRWLOCK)0x1000000;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        (unsigned __int8 *)dword_18069EE12,
        (const GUID *)((char *)v1[6].Ptr + 8),
        0LL,
        (__int64)&SRWLock,
        (__int64)&v13,
        (__int64)&CurrentThreadId);
    }
  }
  else
  {
    (*((void (__fastcall **)(PSRWLOCK))v1->Ptr + 1))(v1);
  }
  if ( LODWORD(v1[4].Ptr) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v1[1]);
}

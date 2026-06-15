/*
 * XREFs of ??1CAudioPump@@QEAA@XZ @ 0x1400736D4
 * Callers:
 *     ??1?$CComObject@VCAudioPump@@@ATL@@UEAA@XZ @ 0x14005E9F8 (--1-$CComObject@VCAudioPump@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002CC8 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AFE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001DEC4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140037E2E (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x140073DE0 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140074100 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioPump::~CAudioPump(CAudioPump *this)
{
  wil::details **v2; // r15
  wil::details **v3; // r12
  const char *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  wil::details **v7; // r14
  void *v8; // rcx
  void *v9; // rdx
  void *v10; // rdx
  void *v11; // rdx
  char *v12; // rcx
  wil::details *v13; // rcx
  wil::details *v14; // rcx
  wil::details *v15; // rcx
  char *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  ULONG ActualResolution; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)this = &CAudioPump::`vftable'{for `IAudioPump'};
  *((_QWORD *)this + 1) = &CAudioPump::`vftable'{for `IAudioPumpLogging'};
  if ( (unsigned __int64)(*((_QWORD *)this + 14) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    CAudioPump::SignalAndWaitForThread(this);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 32,
    0LL);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 33,
    0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 34,
    0LL);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 30,
    0LL);
  wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((__int64 *)this + 48);
  wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((__int64 *)this + 50);
  v2 = (wil::details **)((char *)this + 408);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 51,
    0LL);
  v3 = (wil::details **)((char *)this + 392);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 49,
    0LL);
  if ( *((_BYTE *)this + 73) )
  {
    EnterCriticalSection(&CAudioPump::s_AudioPumpTimerResolutionCountLock);
    if ( _InterlockedExchangeAdd(&CAudioPump::s_AudioPumpTimerResolutionCount, 0xFFFFFFFF) == 1
      && NtSetTimerResolution(0, 0, &ActualResolution) < 0 )
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x844,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
        v4);
    }
    LeaveCriticalSection(&CAudioPump::s_AudioPumpTimerResolutionCountLock);
  }
  v5 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (wil::details **)((char *)this + 288);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 36,
    0LL);
  v8 = (void *)*((_QWORD *)this + 587);
  if ( v8 )
    CoTaskMemFree(v8);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 583);
  if ( *v2 )
    wil::details::CloseHandle(*v2, v9);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)this + 50);
  if ( *v3 )
    wil::details::CloseHandle(*v3, v10);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)this + 48);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 38);
  if ( *v7 )
    wil::details::CloseHandle(*v7, v11);
  v12 = (char *)*((_QWORD *)this + 34);
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v12);
  v13 = (wil::details *)*((_QWORD *)this + 33);
  if ( v13 )
    wil::details::CloseHandle(v13, v11);
  v14 = (wil::details *)*((_QWORD *)this + 32);
  if ( v14 )
    wil::details::CloseHandle(v14, v11);
  v15 = (wil::details *)*((_QWORD *)this + 30);
  if ( v15 )
    wil::details::CloseHandle(v15, v11);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 25);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 4);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 3);
  v16 = (char *)*((_QWORD *)this + 14);
  if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v16);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 10);
  if ( *((_BYTE *)this + 64) )
  {
    *((_BYTE *)this + 64) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  }
}

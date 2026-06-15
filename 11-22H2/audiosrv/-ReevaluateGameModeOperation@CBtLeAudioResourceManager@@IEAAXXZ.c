/*
 * XREFs of ?ReevaluateGameModeOperation@CBtLeAudioResourceManager@@IEAAXXZ @ 0x1800FBF88
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_61c5e62474d0286cbc3b24e8797afd30__void_::_Do_call @ 0x1800FD730 (std--_Func_impl_no_alloc__lambda_61c5e62474d0286cbc3b24e8797afd30__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_8619034ce8c32c203678c2b7f7b0aa74__void_::_Do_call @ 0x1800FD790 (std--_Func_impl_no_alloc__lambda_8619034ce8c32c203678c2b7f7b0aa74__void_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800303E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180030758 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentGameOperatingMode@CBtLeAudioResourceManager@@IEAA?AW4GAME_MODE@1@XZ @ 0x1800FB818 (-GetCurrentGameOperatingMode@CBtLeAudioResourceManager@@IEAA-AW4GAME_MODE@1@XZ.c)
 *     ?RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800FC028 (-RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBtLeAudioResourceManager::ReevaluateGameModeOperation(CBtLeAudioResourceManager *this)
{
  int CurrentGameOperatingMode; // eax
  int refreshed; // eax
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  wil::critical_section::lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 144), &v6);
  CurrentGameOperatingMode = CBtLeAudioResourceManager::GetCurrentGameOperatingMode((__int64)this);
  if ( *((_DWORD *)this + 122) == CurrentGameOperatingMode
    || (*((_DWORD *)this + 122) = CurrentGameOperatingMode,
        refreshed = CBtLeAudioResourceManager::RefreshStreamsOnDevice(this),
        v4 = refreshed,
        refreshed >= 0) )
  {
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)(unsigned int)refreshed);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x97,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
}

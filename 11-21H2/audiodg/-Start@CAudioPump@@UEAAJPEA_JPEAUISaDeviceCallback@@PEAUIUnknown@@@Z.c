/*
 * XREFs of ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140005DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x140001F40 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AERTLockHeap@@YAJPEAX@Z @ 0x140005974 (-AERTLockHeap@@YAJPEAX@Z.c)
 *     ?AERTLockModuleSection@@YAJPEAX@Z @ 0x1400059F4 (-AERTLockModuleSection@@YAJPEAX@Z.c)
 *     ?SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z @ 0x140005A3C (-SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x140005FD8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001F888 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004EC84 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::Start(CAudioPump *this, __int64 *a2, struct ISaDeviceCallback *a3, struct IUnknown *a4)
{
  char *v7; // rbx
  void *v8; // rdx
  HANDLE *v9; // r15
  __int64 v10; // rbx
  int v11; // eax
  unsigned int LastError; // ebx
  void *v13; // rax
  int v14; // edx
  int v15; // r8d
  void *v16; // rcx
  void *v17; // rdx
  HANDLE v18; // rax
  const char *v19; // r9
  void *v20; // rdx
  char v21; // si
  __int64 v22; // r8
  void *v23; // rdx
  int v24; // eax
  __int64 v26; // rdx
  __int64 v27; // rdx
  DWORD dwCreationFlags; // [rsp+20h] [rbp-38h]
  DWORD dwCreationFlagsa; // [rsp+20h] [rbp-38h]
  char *v30; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD ThreadId; // [rsp+60h] [rbp+8h] BYREF

  v7 = (char *)this + 120;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  v30 = v7;
  if ( !*((_BYTE *)this + 72) )
  {
    LastError = -2005139437;
    v26 = 975LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)LastError,
      dwCreationFlags);
    goto LABEL_18;
  }
  v9 = (HANDLE *)((char *)this + 112);
  if ( (unsigned __int64)(*((_QWORD *)this + 14) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = -2005139434;
    v26 = 978LL;
    goto LABEL_23;
  }
  v10 = *((_QWORD *)this + 38);
  *((_QWORD *)this + 38) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct ISaDeviceCallback *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( a4 )
  {
    wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset((__int64 *)this + 582);
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))a4->lpVtbl->QueryInterface)(
            a4,
            &GUID_be7a4789_2891_49b3_923e_dc97de058472,
            (char *)this + 4656);
    LastError = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E8,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
        (const char *)(unsigned int)v11,
        dwCreationFlags);
      v26 = 986LL;
      goto LABEL_23;
    }
  }
  if ( !*((_BYTE *)this + 4648)
    || CAudioPump::OutputPumpWorkRoutine != *((unsigned int (__fastcall **)(CAudioPump *))this + 26) )
  {
    _InterlockedExchange((volatile __int32 *)this + 78, 2);
  }
  *((_BYTE *)this + 76) = 0;
  wil::details::ResetEvent(*((wil::details **)this + 32), v8);
  *((_BYTE *)this + 4649) = 0;
  v13 = AERTGetDLLRTHeap();
  *((_BYTE *)this + 300) = (int)AERTLockHeap(v13, v14, v15) >= 0;
  *((_BYTE *)this + 301) = (int)AERTLockModuleSection(v16) >= 0;
  wil::details::ResetEvent(*((wil::details **)this + 30), v17);
  v18 = CreateThread(0LL, 0LL, *((LPTHREAD_START_ROUTINE *)this + 26), this, 0, &ThreadId);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 112,
    v18);
  if ( (((unsigned __int64)*v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3FD,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                  v19);
    goto LABEL_18;
  }
  SetThreadPriority(*v9, 2);
  WaitForSingleObjectEx(*((HANDLE *)this + 30), 0x2710u, 0);
  v21 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
    goto LABEL_15;
  v22 = *((_QWORD *)this + 12);
  v23 = (void *)*((_QWORD *)this + 34);
  if ( *((_QWORD *)this + 36) )
  {
    v24 = CAudioPump::SetTimer(this, v23, 2 * v22, 0);
    LastError = v24;
    if ( v24 >= 0 )
    {
LABEL_15:
      v21 = 0;
      LastError = 0;
      goto LABEL_16;
    }
    v27 = 1052LL;
  }
  else
  {
    v24 = CAudioPump::SetTimer(this, v23, v22, 1);
    LastError = v24;
    if ( v24 >= 0 )
      goto LABEL_15;
    v27 = 1057LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
    (const char *)(unsigned int)v24,
    dwCreationFlagsa);
LABEL_16:
  if ( v21 )
    CAudioPump::SignalAndWaitForThread(this, v20);
LABEL_18:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v30);
  return LastError;
}

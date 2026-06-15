/*
 * XREFs of ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140002CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x140003004 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?AERTLockModuleSection@@YAJPEAX@Z @ 0x140003028 (-AERTLockModuleSection@@YAJPEAX@Z.c)
 *     ?AERTLockHeap@@YAJPEAX@Z @ 0x1400031D4 (-AERTLockHeap@@YAJPEAX@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140008288 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z @ 0x1400082C0 (-SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AFE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEF4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___::_lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___ @ 0x140073700 (wil--details--lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___--_lambda_call__lambda_0226.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::Start(CAudioPump *this, __int64 *a2, struct ISaDeviceCallback *a3, struct IUnknown *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  void *v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  HANDLE *v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rcx
  int v15; // eax
  unsigned int LastError; // esi
  void *v17; // rax
  void *v18; // rcx
  void *v19; // rdx
  HANDLE v20; // rax
  const char *v21; // r9
  __int64 v22; // r8
  void *v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  DWORD dwCreationFlags; // [rsp+20h] [rbp-58h]
  DWORD dwCreationFlagsa; // [rsp+20h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+30h] [rbp-48h] BYREF
  CAudioPump *v29; // [rsp+38h] [rbp-40h] BYREF
  char v30; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  DWORD ThreadId; // [rsp+80h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  v28 = v7;
  if ( !*((_BYTE *)this + 72) )
  {
    v9 = -2005139437;
    v10 = 975LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)v9,
      dwCreationFlags);
    if ( v7 )
      LeaveCriticalSection(v7);
    return v9;
  }
  v12 = (HANDLE *)((char *)this + 112);
  if ( (unsigned __int64)(*((_QWORD *)this + 14) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = -2005139434;
    v10 = 978LL;
    goto LABEL_3;
  }
  v13 = *((_QWORD *)this + 38);
  *((_QWORD *)this + 38) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct ISaDeviceCallback *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( a4 )
  {
    v14 = *((_QWORD *)this + 583);
    *((_QWORD *)this + 583) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))a4->lpVtbl->QueryInterface)(
            a4,
            &GUID_be7a4789_2891_49b3_923e_dc97de058472,
            (char *)this + 4664);
    LastError = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DA,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
        (const char *)(unsigned int)v15,
        dwCreationFlags);
LABEL_29:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v28);
      return LastError;
    }
  }
  if ( !*((_BYTE *)this + 4656)
    || CAudioPump::OutputPumpWorkRoutine != *((unsigned int (__fastcall **)(CAudioPump *))this + 26) )
  {
    _InterlockedExchange((volatile __int32 *)this + 78, 2);
  }
  *((_BYTE *)this + 76) = 0;
  wil::details::ResetEvent(*((wil::details **)this + 32), v8);
  *((_BYTE *)this + 4657) = 0;
  v17 = AERTGetDLLRTHeap();
  *((_BYTE *)this + 300) = (int)AERTLockHeap(v17) >= 0;
  *((_BYTE *)this + 301) = (int)AERTLockModuleSection(v18) >= 0;
  wil::details::ResetEvent(*((wil::details **)this + 30), v19);
  v20 = CreateThread(0LL, 0LL, *((LPTHREAD_START_ROUTINE *)this + 26), this, 0, &ThreadId);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 112,
    v20);
  if ( (((unsigned __int64)*v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3FD,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
                  v21);
    goto LABEL_29;
  }
  SetThreadPriority(*v12, 2);
  WaitForSingleObjectEx(*((HANDLE *)this + 30), 0x2710u, 0);
  v29 = this;
  v30 = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
  {
    v22 = *((_QWORD *)this + 12);
    v23 = (void *)*((_QWORD *)this + 34);
    if ( *((_QWORD *)this + 36) )
    {
      v24 = CAudioPump::SetTimer(this, v23, 2 * v22, 0);
      LastError = v24;
      if ( v24 < 0 )
      {
        v25 = 1052LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
          (const char *)(unsigned int)v24,
          dwCreationFlagsa);
        wil::details::lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___::_lambda_call__lambda_022658cf2f51e3c9ab9d305960bdc061___(&v29);
        goto LABEL_29;
      }
    }
    else
    {
      v24 = CAudioPump::SetTimer(this, v23, v22, 1);
      LastError = v24;
      if ( v24 < 0 )
      {
        v25 = 1057LL;
        goto LABEL_28;
      }
    }
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}

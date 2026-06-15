/*
 * XREFs of ?Resume@CAudioPump@@UEAAJXZ @ 0x1400031A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140001FCC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z @ 0x140005A3C (-SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x140005FD8 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14002DF0C (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140051A78 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAudioPump::Resume(CAudioPump *this)
{
  char *v1; // rbx
  __int32 v3; // ebp
  void *v4; // rdx
  int v5; // ebx
  void *v7; // rdx
  void *v8; // rdx
  _DWORD *v9; // rcx
  wil::details *v10; // rcx
  const char *v11; // [rsp+28h] [rbp-70h]
  char *v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h] BYREF
  HANDLE Handles[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = (char *)this + 120;
  v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  v12 = v1;
  *((_DWORD *)this + 79) = 40;
  v3 = _InterlockedExchange((volatile __int32 *)this + 78, 2);
  if ( v3 == 2 )
    goto LABEL_6;
  if ( *((_BYTE *)this + 4648)
    && CAudioPump::OutputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26) )
  {
    *((_BYTE *)this + 4649) = 0;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 48LL))(*((_QWORD *)this + 25));
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Log_IfFailedMsg(
      retaddr,
      (void *)0x4FC,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v5,
      (__int64)"SetPinActive failed",
      v11);
    if ( v5 != -2147467259 )
      _InterlockedExchange((volatile __int32 *)this + 78, v3);
  }
  else
  {
    if ( *((_BYTE *)this + 4648)
      && CAudioPump::OutputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26) )
    {
      wil::details::ResetEvent(*((wil::details **)this + 51), v4);
      wil::details::SetEvent(*((wil::details **)this + 33), v7);
      Handles[0] = *((HANDLE *)this + 32);
      Handles[1] = *((HANDLE *)this + 51);
      WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
      if ( *((_BYTE *)this + 4650) )
      {
        v9 = (_DWORD *)*((_QWORD *)this + 592);
        if ( *v9 > 5u )
          tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v9, (unsigned int)&unk_1400A6ED7, 0, 0, 2, (__int64)v15);
        v10 = (wil::details *)*((_QWORD *)this + 36);
        *((_BYTE *)this + 4650) = 0;
        wil::details::SetEvent(v10, v8);
      }
      goto LABEL_7;
    }
    if ( CAudioPump::SetTimer(
           this,
           *((void **)this + 34),
           *((_QWORD *)this + 12) * ((*((_QWORD *)this + 36) != 0LL) + 1LL),
           1) >= 0 )
    {
LABEL_6:
      v5 = 0;
      goto LABEL_7;
    }
    if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 40LL))(*((_QWORD *)this + 25)) >= 0 )
      _InterlockedExchange((volatile __int32 *)this + 78, 0);
  }
LABEL_7:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v12);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v13);
  return (unsigned int)v5;
}

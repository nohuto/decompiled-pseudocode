/*
 * XREFs of ?Resume@CAudioPump@@UEAAJXZ @ 0x140008EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x140003004 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z @ 0x1400082C0 (-SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x140009898 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1400260A0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioPump::Resume(CAudioPump *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r14
  __int32 v3; // ebp
  unsigned int (__fastcall **v4)(CAudioPump *); // rsi
  void *v5; // rdx
  int v6; // edi
  void *v8; // rdx
  void *v9; // rdx
  _DWORD *v10; // rcx
  wil::details *v11; // rcx
  const char *v12; // [rsp+28h] [rbp-60h]
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  HANDLE Handles[2]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v15[32]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v13 = 0LL;
  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  *((_DWORD *)this + 79) = 40;
  v3 = _InterlockedExchange((volatile __int32 *)this + 78, 2);
  if ( v3 == 2 )
    goto LABEL_6;
  v4 = (unsigned int (__fastcall **)(CAudioPump *))((char *)this + 208);
  if ( *((_BYTE *)this + 4656) && CAudioPump::OutputPumpWorkRoutine == *v4 )
    *((_BYTE *)this + 4657) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 48LL))(*((_QWORD *)this + 25));
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Log_IfFailedMsg(
      retaddr,
      (void *)0x4FC,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v6,
      (__int64)"SetPinActive failed",
      v12);
    if ( v6 != -2147467259 )
      _InterlockedExchange((volatile __int32 *)this + 78, v3);
  }
  else
  {
    if ( *((_BYTE *)this + 4656) && CAudioPump::OutputPumpWorkRoutine == *v4 )
    {
      wil::details::ResetEvent(*((wil::details **)this + 51), v5);
      wil::details::SetEvent(*((wil::details **)this + 33), v8);
      Handles[0] = *((HANDLE *)this + 32);
      Handles[1] = *((HANDLE *)this + 51);
      WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
      if ( *((_BYTE *)this + 4658) )
      {
        v10 = (_DWORD *)*((_QWORD *)this + 593);
        if ( *v10 > 5u )
          tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v10, (unsigned int)&unk_1400B3BB4, 0, 0, 2, (__int64)v15);
        v11 = (wil::details *)*((_QWORD *)this + 36);
        *((_BYTE *)this + 4658) = 0;
        wil::details::SetEvent(v11, v9);
      }
      goto LABEL_7;
    }
    if ( (int)CAudioPump::SetTimer(
                this,
                *((void **)this + 34),
                *((_QWORD *)this + 12) * ((*((_QWORD *)this + 36) != 0LL) + 1LL),
                1) >= 0 )
    {
LABEL_6:
      v6 = 0;
      goto LABEL_7;
    }
    if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 40LL))(*((_QWORD *)this + 25)) >= 0 )
      _InterlockedExchange((volatile __int32 *)this + 78, 0);
  }
LABEL_7:
  if ( v1 )
    LeaveCriticalSection(v1);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v13);
  return (unsigned int)v6;
}

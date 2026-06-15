/*
 * XREFs of ?Stop@CAudioPump@@UEAAJXZ @ 0x1400196B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x140001F40 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?AERTUnlockHeap@@YAJPEAX@Z @ 0x14002223C (-AERTUnlockHeap@@YAJPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x14002A894 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x14002D254 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqx_EtwEventWriteTransfer @ 0x14006BD54 (McTemplateU0pqx_EtwEventWriteTransfer.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::Stop(CAudioPump *this)
{
  unsigned int v2; // edi
  char *v3; // rbx
  CAudioPump *v4; // rcx
  void *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  void *v10; // rax
  int v12; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v14; // [rsp+80h] [rbp+8h] BYREF
  char *v15; // [rsp+88h] [rbp+10h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v16 = 0LL;
  v3 = (char *)this + 160;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
  v14 = v3;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  v15 = (char *)this + 120;
  *((_BYTE *)this + 76) = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
    &v14,
    0LL);
  if ( *((_BYTE *)this + 72) )
  {
    if ( ((*((_QWORD *)this + 14) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      CAudioPump::CancelTimer(v4, *((void **)this + 34));
      if ( (byte_1400C1841 & 4) != 0 )
        McTemplateU0pqx_EtwEventWriteTransfer(v6, v5, this, 9LL);
      CAudioPump::SignalAndWaitForThread(this, v5);
      _InterlockedExchange64((volatile __int64 *)this + 45, 0LL);
      v8 = *((_QWORD *)this + 38);
      *((_QWORD *)this + 38) = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( *((_BYTE *)this + 301) )
      {
        RtlUnlockModuleSection(CAudioPump::DummyRoutineForLockingRtCodeSection);
        if ( (byte_1400C1841 & 4) != 0 )
          McTemplateU0pqpqqqqqq_EventWriteTransfer(v8, v7, v9, 11, 0, 0, 0, 0);
        *((_BYTE *)this + 301) = 0;
      }
      if ( *((_BYTE *)this + 300) )
      {
        v10 = (void *)AERTGetDLLRTHeap();
        AERTUnlockHeap(v10);
        *((_BYTE *)this + 300) = 0;
      }
      if ( (byte_1400C1841 & 4) != 0 )
        McTemplateU0pqx_EtwEventWriteTransfer(v8, v7, this, 2LL);
    }
    else
    {
      v2 = -2005139433;
    }
  }
  else
  {
    v2 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x450,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)0x887C0013LL,
      v12);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v16);
  return v2;
}

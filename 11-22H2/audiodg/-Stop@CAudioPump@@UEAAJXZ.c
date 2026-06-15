/*
 * XREFs of ?Stop@CAudioPump@@UEAAJXZ @ 0x140073EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x140008DC8 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x140038134 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x140073E30 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0pqx_EtwEventWriteTransfer @ 0x1400741E8 (McTemplateU0pqx_EtwEventWriteTransfer.c)
 *     ?AERTUnlockHeap@@YAJPEAX@Z @ 0x14007AEF8 (-AERTUnlockHeap@@YAJPEAX@Z.c)
 *     ?AERTUnlockModuleSection@@YAJPEAX@Z @ 0x14007AF68 (-AERTUnlockModuleSection@@YAJPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioPump::Stop(CAudioPump *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  CAudioPump *v4; // rcx
  unsigned int v5; // edi
  void *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  void *v9; // rcx
  void *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 160);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
  lpCriticalSection = v2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
  *((_BYTE *)this + 76) = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
    &lpCriticalSection,
    0LL);
  if ( *((_BYTE *)this + 72) )
  {
    if ( ((*((_QWORD *)this + 14) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      CAudioPump::CancelTimer(v4, *((void **)this + 34));
      if ( (byte_1400CF981 & 4) != 0 )
        McTemplateU0pqx_EtwEventWriteTransfer(v7, v6, this, 9LL);
      CAudioPump::SignalAndWaitForThread(this, v6);
      _InterlockedExchange64((volatile __int64 *)this + 45, 0LL);
      v9 = (void *)*((_QWORD *)this + 38);
      *((_QWORD *)this + 38) = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
      if ( *((_BYTE *)this + 301) )
      {
        AERTUnlockModuleSection(v9);
        *((_BYTE *)this + 301) = 0;
      }
      if ( *((_BYTE *)this + 300) )
      {
        v10 = (void *)AERTGetDLLRTHeap();
        AERTUnlockHeap(v10);
        *((_BYTE *)this + 300) = 0;
      }
      if ( (byte_1400CF981 & 4) != 0 )
        McTemplateU0pqx_EtwEventWriteTransfer(v9, v8, this, 2LL);
      if ( this != (CAudioPump *)-120LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)this + 3);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      v5 = 0;
    }
    else
    {
      if ( this != (CAudioPump *)-120LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)this + 3);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      v5 = -2005139433;
    }
  }
  else
  {
    v5 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x450,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)0x887C0013LL);
    if ( v3 )
      LeaveCriticalSection(v3);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v14);
  return v5;
}

/*
 * XREFs of ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140027090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x1400273DC (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14005187C (WPP_SF_D.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected(
        struct _RTL_CRITICAL_SECTION *this,
        struct ISubmixInternal *a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  int DebugInfo; // eax
  int v7; // eax
  int v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = *(_OWORD *)&this[-2].LockSemaphore;
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  EnterCriticalSection(this - 3);
  v4 = *(_QWORD *)a2;
  *(_QWORD *)v9 = this - 3;
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(v4 + 136))(a2) )
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *, struct ISubmixInternal *))this->DebugInfo[2].CriticalSection)(
      this,
      a2);
  v5 = (unsigned int)(LODWORD(this[1].DebugInfo) - 1);
  LODWORD(this[1].DebugInfo) = v5;
  DebugInfo = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_7f2b06cbe2743c9445e1f0d7b0a3a743_Traceguids, v5);
    DebugInfo = (int)this[1].DebugInfo;
  }
  if ( !DebugInfo )
  {
    if ( LODWORD(this->SpinCount) )
    {
      v7 = CSystemAudioDeviceSharedBase::SetGraphState(&this[-8].OwningThread, 0LL);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2F2,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
          (const char *)(unsigned int)v7);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v9);
  EtwEventActivityIdControl(4LL, &v11);
  return 0LL;
}

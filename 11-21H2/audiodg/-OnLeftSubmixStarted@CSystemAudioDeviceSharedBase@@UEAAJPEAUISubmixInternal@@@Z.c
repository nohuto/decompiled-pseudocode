/*
 * XREFs of ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400271B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x1400273DC (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?SubmixInfluencesSaDeviceState@CSystemAudioDeviceSharedBase@@IEAA_NPEAUISubmixInternal@@@Z @ 0x140027554 (-SubmixInfluencesSaDeviceState@CSystemAudioDeviceSharedBase@@IEAA_NPEAUISubmixInternal@@@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x14005187C (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140057448 (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStarted(
        struct _RTL_CRITICAL_SECTION *this,
        struct ISubmixInternal *a2)
{
  __int64 v4; // r9
  int DebugInfo_high; // eax
  int v6; // eax
  unsigned int v7; // ebx
  int v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = *(_OWORD *)&this[-2].LockSemaphore;
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  if ( CSystemAudioDeviceSharedBase::SubmixInfluencesSaDeviceState(
         (CSystemAudioDeviceSharedBase *)&this[-8].OwningThread,
         a2) )
  {
    EnterCriticalSection(this - 3);
    v4 = (unsigned int)(HIDWORD(this[1].DebugInfo) + 1);
    *(_QWORD *)v9 = this - 3;
    HIDWORD(this[1].DebugInfo) = v4;
    DebugInfo_high = v4;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_7f2b06cbe2743c9445e1f0d7b0a3a743_Traceguids, v4);
      DebugInfo_high = HIDWORD(this[1].DebugInfo);
    }
    if ( DebugInfo_high == 1 )
    {
      v6 = CSystemAudioDeviceSharedBase::SetGraphState(
             &this[-8].OwningThread,
             3 - (unsigned int)(LODWORD(this->SpinCount) != 0));
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2AE,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
          (const char *)(unsigned int)v6);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v9);
        goto LABEL_8;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v9);
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_7f2b06cbe2743c9445e1f0d7b0a3a743_Traceguids, a2);
  }
  v7 = 0;
LABEL_8:
  EtwEventActivityIdControl(4LL, &v11);
  return v7;
}

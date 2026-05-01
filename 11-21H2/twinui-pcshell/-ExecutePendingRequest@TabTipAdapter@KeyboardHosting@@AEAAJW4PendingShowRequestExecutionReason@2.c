/*
 * XREFs of ?ExecutePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4PendingShowRequestExecutionReason@2@@Z @ 0x180470864
 * Callers:
 *     ?OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@45678@@Z @ 0x180472DE0 (-OnCoreKeyboardClientRegistered@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Cor.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18047308C (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1804754D0 (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF134 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BF970 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046F3B4 (--1PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180477A10 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@0I@Z @ 0x18047A9D8 (-StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeybo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecutePendingRequest(__int64 a1, int a2)
{
  unsigned int v4; // r14d
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // edx
  __int64 v8; // r9
  int v9; // edi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-D0h]
  RTL_SRWLOCK *v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::AcquireSRWLockExclusive(v15, (RTL_SRWLOCK *)(a1 + 416));
  v14 = *(_QWORD *)(a1 + 388);
  v4 = *(_DWORD *)(a1 + 396);
  *(_WORD *)(a1 + 388) = 0;
  *(_DWORD *)(a1 + 392) = 0;
  *(_DWORD *)(a1 + 396) = 11;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v15);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"PendingRequestExecuted");
  v16[0] = &TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::`vftable';
  LOBYTE(v5) = BYTE1(v14);
  LOBYTE(v6) = v14;
  TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::StartActivity(v16, v6, v4, v5, a2);
  if ( !(_BYTE)v14 )
    goto LABEL_14;
  if ( !BYTE1(v14) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8, HIDWORD(v14), v4);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1689LL;
      goto LABEL_13;
    }
LABEL_14:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v16,
      v7);
    v11 = 0;
    goto LABEL_15;
  }
  v8 = 9LL;
  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        v8 = 4LL;
    }
    else
    {
      v8 = 3LL;
    }
  }
  else
  {
    v8 = 2LL;
  }
  v10 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(a1, v4, HIDWORD(v14), v8);
  v11 = v10;
  if ( v10 >= 0 )
    goto LABEL_14;
  v12 = 1685LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v10);
LABEL_15:
  TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted::~PendingRequestExecuted((TouchKeyboardExperienceTelemetryLogger::PendingRequestExecuted *)v16);
  return v11;
}

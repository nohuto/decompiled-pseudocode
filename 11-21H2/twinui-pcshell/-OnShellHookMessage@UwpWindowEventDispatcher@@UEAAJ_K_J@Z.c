/*
 * XREFs of ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1803EEF80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800EA0F8 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1bf1d9a4c4dca45da51dc8b6becb9b00___ @ 0x1803E981C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_1bf1d9a4c4dca45da51dc8b6becb9b00.c)
 *     ??1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ @ 0x1803EAB7C (--1WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAA@XZ.c)
 *     ?FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1803ED6F8 (-FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrappe.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1803EE468 (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ?HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x1803EE7D0 (-HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     ?WindowWrapperFromWindow@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1803F8388 (-WindowWrapperFromWindow@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal.c)
 *     ?WindowWrapperFromWindowLockNotHeld@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1803F8488 (-WindowWrapperFromWindowLockNotHeld@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrap.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall UwpWindowEventDispatcher::OnShellHookMessage(RTL_SRWLOCK *this, HWND a2, HWND a3, const char *a4)
{
  unsigned int v4; // esi
  __int64 v7; // r8
  RTL_SRWLOCK **v8; // rcx
  struct UwpWindowEventDispatcher *v9; // r14
  _QWORD *Uwlm; // rax
  char v11; // r15
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, _QWORD, RTL_SRWLOCK **); // rbx
  int v14; // eax
  DWORD CurrentThreadId; // eax
  unsigned int v16; // ecx
  int v17; // eax
  __int64 result; // rax
  struct IUwpWindowWrapperInternal *v19; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v20[5]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v21[8]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v22; // [rsp+58h] [rbp-60h]
  __int64 v23; // [rsp+60h] [rbp-58h]
  int v24; // [rsp+68h] [rbp-50h]
  char v25; // [rsp+6Ch] [rbp-4Ch]
  int v26; // [rsp+70h] [rbp-48h]
  char v27; // [rsp+74h] [rbp-44h]
  int v28; // [rsp+78h] [rbp-40h]
  char v29; // [rsp+7Ch] [rbp-3Ch]
  int v30; // [rsp+80h] [rbp-38h]
  char v31; // [rsp+84h] [rbp-34h]
  int v32; // [rsp+88h] [rbp-30h]
  char v33; // [rsp+8Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  RTL_SRWLOCK *v35; // [rsp+C8h] [rbp+10h] BYREF
  RTL_SRWLOCK *v36; // [rsp+D0h] [rbp+18h] BYREF
  HWND v37; // [rsp+D8h] [rbp+20h] BYREF

  try
  {
    v4 = (unsigned int)a3;
    LODWORD(v35) = 0;
    v37 = a3;
    if ( (unsigned __int64)a2 > 0x26 )
      return 0LL;
    if ( (unsigned int)a2 <= 0x1B )
    {
      if ( (unsigned int)a2 >= 0x19 )
      {
LABEL_9:
        wil::AcquireSRWLockExclusive(&v35, this + 49);
        UwpWindowEventDispatcher::HandleForegroundWindow((UwpWindowEventDispatcher *)&this[-10], v37, v7);
        v8 = &v35;
LABEL_14:
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v8);
        return 0LL;
      }
      if ( (_DWORD)a2 == 17 )
      {
        v36 = 0LL;
        v9 = (struct UwpWindowEventDispatcher *)&this[-10];
        Uwlm = UwpWindowEventDispatcher::GetUwlm((__int64)&this[-10], &v19, (unsigned int)a3);
        v11 = 1;
        LODWORD(v35) = 1;
        v12 = *Uwlm;
        v13 = *(int (__fastcall **)(__int64, _QWORD, RTL_SRWLOCK **))(*(_QWORD *)*Uwlm + 112LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v36);
        if ( v13(v12, v4, &v36) < 0 || !v36 )
          v11 = 0;
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v19);
        if ( v11 )
        {
          v14 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, RTL_SRWLOCK **))v36->Ptr + 6))(v36, &v35);
          if ( v14 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x176,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v14,
              (int)v19);
          v21[0] = 0;
          v22 = 0LL;
          v23 = 0LL;
          v24 = 0;
          v25 = 0;
          v26 = 0;
          v27 = 0;
          v28 = 6;
          v29 = 0;
          v30 = 0;
          v31 = 0;
          v32 = 0;
          v33 = 0;
          v19 = 0LL;
          v20[0] = v9;
          v20[1] = &v19;
          v20[2] = &v35;
          v20[3] = v21;
          v20[4] = &v37;
          CurrentThreadId = GetCurrentThreadId();
          v17 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1bf1d9a4c4dca45da51dc8b6becb9b00___(
                  v16,
                  CurrentThreadId,
                  (__int64)v20);
          if ( v17 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x18E,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
              (const char *)(unsigned int)v17,
              (int)v19);
          UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents(
            (UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v21,
            v9,
            (__int64 (__fastcall ***)(struct IUwpWindowWrapperInternal *, GUID *, __int64 *))v19);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v19);
          UwpWindowEventDispatcher::WindowIdChangedEventHelper::~WindowIdChangedEventHelper((UwpWindowEventDispatcher::WindowIdChangedEventHelper *)v21);
        }
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v36);
        return 0LL;
      }
      if ( (_DWORD)a2 != 18 )
      {
        if ( (_DWORD)a2 != 19 && (_DWORD)a2 != 23 )
          return 0LL;
        goto LABEL_9;
      }
      if ( CApplicationManagerUtility::IsValidWindow((CApplicationManagerUtility *)a3, a2) )
        return 0LL;
      wil::AcquireSRWLockExclusive(&v36, this + 49);
      UwpWindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v35, v37);
      if ( v35 )
        (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD))v35->Ptr + 24))(v35, 0LL);
LABEL_13:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v35);
      v8 = &v36;
      goto LABEL_14;
    }
    if ( (_DWORD)a2 != 31 )
    {
      if ( (_DWORD)a2 == 34 )
      {
        wil::AcquireSRWLockExclusive(&v36, this + 49);
        UwpWindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v35, v37);
        if ( v35 )
          (*((void (**)(void))v35->Ptr + 42))();
        goto LABEL_13;
      }
      if ( (_DWORD)a2 != 36 && (_DWORD)a2 != 38 )
        return 0LL;
    }
    UwpWindowEventDispatcher::WindowWrapperFromWindowLockNotHeld(&this[-10], &v35);
    if ( v35 )
      (*((void (__fastcall **)(RTL_SRWLOCK *, HWND))v35->Ptr + 41))(v35, a2);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v35);
    return 0LL;
  }
  catch ( ... )
  {
    LODWORD(v35) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1D1,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                     a4);
    return (unsigned int)v35;
  }
  return result;
}

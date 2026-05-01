/*
 * XREFs of ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1802D7BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800119A0 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1802D82AC (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1802D8482 (-WindowWrapperFromWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1804C4488 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x1804C6128 (-HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     ?attach@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWrapperInternal@@@Z @ 0x1804CD334 (-attach@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWr.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall WindowEventDispatcher::OnShellHookMessage(
        RTL_SRWLOCK *this,
        HWND a2,
        CApplicationManagerUtility *a3,
        const char *a4)
{
  RTL_SRWLOCK *v7; // rdi
  __int64 result; // rax
  unsigned int PropW; // edi
  RTL_SRWLOCK *v10; // r14
  RTL_SRWLOCK *v11; // r15
  __int64 *CachedView; // rax
  __int64 v13; // rdx
  RTL_SRWLOCK *v14; // rbx
  bool v15; // di
  int v16; // edi
  __int64 *v17; // rax
  std::_Ref_count_base *v18; // rbx
  __int64 v19; // rcx
  RTL_SRWLOCK *v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rdx
  std::_Ref_count_base *v23[2]; // [rsp+20h] [rbp-48h] BYREF
  char v24[8]; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v25; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *v27; // [rsp+78h] [rbp+10h] BYREF
  RTL_SRWLOCK *v28; // [rsp+80h] [rbp+18h] BYREF
  RTL_SRWLOCK *v29; // [rsp+88h] [rbp+20h] BYREF

  try
  {
    if ( (unsigned __int64)a2 > 0x26 )
      return 0LL;
    if ( (unsigned int)a2 > 0x1A )
    {
      if ( (_DWORD)a2 != 27 )
      {
        if ( (_DWORD)a2 != 31 )
        {
          if ( (_DWORD)a2 == 34 )
          {
            v7 = this + 49;
            AcquireSRWLockExclusive(this + 49);
            v28 = v7;
            WindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v27, a3);
            if ( v27 )
              (*((void (**)(void))v27->Ptr + 42))();
            goto LABEL_17;
          }
          if ( (_DWORD)a2 != 36 && (_DWORD)a2 != 38 )
            return 0LL;
        }
        v27 = 0LL;
        v20 = this + 49;
        AcquireSRWLockShared(this + 49);
        v29 = v20;
        v21 = (__int64 *)WindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v28, a3);
        v22 = *v21;
        *v21 = 0LL;
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach(&v27, v22);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
        if ( v20 )
          ReleaseSRWLockShared(v20);
        if ( v27 )
          (*((void (__fastcall **)(RTL_SRWLOCK *, HWND))v27->Ptr + 41))(v27, a2);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
        return 0LL;
      }
    }
    else if ( (_DWORD)a2 != 26 )
    {
      if ( (_DWORD)a2 == 17 )
      {
        PropW = (unsigned int)GetPropW((HWND)a3, L"Microsoft.Windows.WindowFactory.ViewId");
        if ( PropW )
        {
          *(_OWORD *)v23 = 0LL;
          v27 = 0LL;
          v10 = this + 49;
          AcquireSRWLockExclusive(this + 49);
          v29 = this + 49;
          v11 = this - 10;
          CachedView = (__int64 *)WindowEventDispatcher::GetCachedView(&this[-10], &v28, PropW);
          v13 = *CachedView;
          *CachedView = 0LL;
          wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach(&v27, v13);
          v14 = v27;
          v15 = v27 != 0LL;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
          if ( v15 )
          {
            v16 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))v14->Ptr + 32))(v14);
            (*((void (__fastcall **)(RTL_SRWLOCK *, CApplicationManagerUtility *))v14->Ptr + 26))(v14, a3);
            if ( (*((unsigned int (__fastcall **)(RTL_SRWLOCK *))v14->Ptr + 32))(v14) != v16 )
            {
              v17 = (__int64 *)(*((__int64 (__fastcall **)(RTL_SRWLOCK *, char *))v14->Ptr + 33))(v14, v24);
              std::shared_ptr<ViewEventRegistration>::operator=(v23, v17);
              if ( v25 )
                std::_Ref_count_base::_Decref(v25);
            }
          }
          if ( v10 )
            ReleaseSRWLockExclusive(v10);
          v18 = v23[0];
          if ( v23[0] )
          {
            wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v27,
              &v29);
            v19 = *((_QWORD *)v18 + 3);
            v28 = (RTL_SRWLOCK *)v19;
            if ( v19 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
            WindowEventDispatcher::RaiseViewEvent(v11, v29, 6LL, &v28);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v29);
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
          if ( v23[1] )
            std::_Ref_count_base::_Decref(v23[1]);
        }
        return 0LL;
      }
      if ( (_DWORD)a2 != 18 )
      {
        if ( (_DWORD)a2 == 19 || (_DWORD)a2 == 23 || (_DWORD)a2 == 25 )
          goto LABEL_10;
        return 0LL;
      }
      if ( CApplicationManagerUtility::IsValidWindow(a3, a2) )
        return 0LL;
      v7 = this + 49;
      AcquireSRWLockExclusive(this + 49);
      v28 = this + 49;
      WindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v27, a3);
      if ( v27 )
        (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD))v27->Ptr + 26))(v27, 0LL);
LABEL_17:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
LABEL_11:
      if ( v7 )
        ReleaseSRWLockExclusive(v7);
      return 0LL;
    }
LABEL_10:
    v7 = this + 49;
    AcquireSRWLockExclusive(this + 49);
    v27 = v7;
    WindowEventDispatcher::HandleForegroundWindow((WindowEventDispatcher *)&this[-10], (HWND)a3);
    goto LABEL_11;
  }
  catch ( ... )
  {
    LODWORD(v27) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x192,
                     (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                     a4);
    return (unsigned int)v27;
  }
  return result;
}

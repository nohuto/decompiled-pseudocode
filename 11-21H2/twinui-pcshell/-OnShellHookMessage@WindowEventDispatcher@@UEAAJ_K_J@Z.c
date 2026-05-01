/*
 * XREFs of ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18009A480
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180096470 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18009AB50 (-HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x180177884 (-WindowWrapperFromWindow@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8BCC (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=26
__int64 __fastcall WindowEventDispatcher::OnShellHookMessage(RTL_SRWLOCK *this, unsigned __int64 a2, HWND a3)
{
  RTL_SRWLOCK *v6; // rbx
  RTL_SRWLOCK *v7; // rdi
  RTL_SRWLOCK *v8; // r13
  RTL_SRWLOCK **v9; // rsi
  RTL_SRWLOCK **v10; // r14
  RTL_SRWLOCK *v11; // rdi
  RTL_SRWLOCK **Ptr; // rsi
  RTL_SRWLOCK **v13; // r14
  RTL_SRWLOCK *v14; // rcx
  RTL_SRWLOCK *v16; // rcx
  unsigned int PropW; // r12d
  RTL_SRWLOCK *v18; // rsi
  RTL_SRWLOCK **v19; // rdi
  RTL_SRWLOCK **v20; // r13
  RTL_SRWLOCK *v21; // rcx
  int v22; // edi
  __int64 *v23; // rax
  __int64 v24; // r15
  std::_Ref_count_base *v25; // rdi
  RTL_SRWLOCK *v26; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v27; // rbx
  RTL_SRWLOCK *v28; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v29; // [rsp+38h] [rbp-60h] BYREF
  std::_Ref_count_base *v30; // [rsp+40h] [rbp-58h]
  __int128 v31; // [rsp+48h] [rbp-50h]
  RTL_SRWLOCK *v32; // [rsp+A8h] [rbp+10h] BYREF
  RTL_SRWLOCK *v33; // [rsp+B0h] [rbp+18h] BYREF
  RTL_SRWLOCK *v34; // [rsp+B8h] [rbp+20h] BYREF

  v6 = 0LL;
  LODWORD(v32) = 0;
  if ( a2 <= 0x26 )
  {
    if ( (_DWORD)a2 == 18 )
    {
      SetLastError(0);
      if ( (unsigned int)IsWindowInDestroy(a3) || GetLastError() == 1400 )
      {
        v11 = this + 49;
        AcquireSRWLockExclusive(this + 49);
        v34 = this + 49;
        v33 = 0LL;
        LODWORD(v32) = 4;
        Ptr = (RTL_SRWLOCK **)this[36].Ptr;
        v13 = (RTL_SRWLOCK **)this[37].Ptr;
        while ( Ptr != v13 )
        {
          if ( *Ptr && a3 == (HWND)(*((int (__fastcall **)(RTL_SRWLOCK *))(*Ptr)->Ptr + 32))(*Ptr) )
          {
            v14 = *Ptr;
            v6 = v14;
            v33 = *Ptr;
            if ( v14 )
              (*((void (__fastcall **)(RTL_SRWLOCK *))v14->Ptr + 1))(v14);
            break;
          }
          ++Ptr;
        }
        if ( v6 )
        {
          (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD))v6->Ptr + 26))(v6, 0LL);
          (*((void (__fastcall **)(RTL_SRWLOCK *))v6->Ptr + 2))(v6);
        }
        if ( v11 )
          ReleaseSRWLockExclusive(v11);
      }
    }
    else
    {
      switch ( (int)a2 )
      {
        case 17:
          PropW = (unsigned int)GetPropW(a3, L"Microsoft.Windows.WindowFactory.ViewId");
          if ( PropW )
          {
            v31 = 0LL;
            v34 = 0LL;
            AcquireSRWLockExclusive(this + 49);
            v28 = this + 49;
            v18 = 0LL;
            v33 = 0LL;
            LODWORD(v32) = 1;
            v19 = (RTL_SRWLOCK **)this[36].Ptr;
            v20 = (RTL_SRWLOCK **)this[37].Ptr;
            while ( v19 != v20 )
            {
              if ( (*((unsigned int (__fastcall **)(RTL_SRWLOCK *))(*v19)->Ptr + 36))(*v19) == PropW )
              {
                v21 = *v19;
                v18 = v21;
                v33 = *v19;
                if ( v21 )
                  (*((void (__fastcall **)(RTL_SRWLOCK *))v21->Ptr + 1))(v21);
                break;
              }
              ++v19;
            }
            v33 = 0LL;
            v34 = v18;
            if ( !v18
              || (v22 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))v18->Ptr + 32))(v18),
                  (*((void (__fastcall **)(RTL_SRWLOCK *, HWND))v18->Ptr + 26))(v18, a3),
                  (*((unsigned int (__fastcall **)(RTL_SRWLOCK *))v18->Ptr + 32))(v18) == v22) )
            {
              v25 = (std::_Ref_count_base *)*((_QWORD *)&v31 + 1);
              v24 = v31;
            }
            else
            {
              v23 = (__int64 *)(*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int64 **))v18->Ptr + 33))(v18, &v29);
              v24 = *v23;
              v25 = (std::_Ref_count_base *)v23[1];
              *v23 = 0LL;
              v23[1] = 0LL;
              *(_QWORD *)&v31 = v24;
              *((_QWORD *)&v31 + 1) = v25;
              if ( v30 )
                std::_Ref_count_base::_Decref(v30);
            }
            wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v28);
            if ( v24 )
            {
              wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
                &v34,
                &v28);
              v26 = *(RTL_SRWLOCK **)(v24 + 24);
              v32 = v26;
              if ( v26 )
              {
                (*((void (__fastcall **)(RTL_SRWLOCK *))v26->Ptr + 1))(v26);
                v26 = v32;
              }
              v29 = (__int64 *)&v32;
              v27 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v28;
              v33 = v26;
              if ( v26 )
                (*((void (__fastcall **)(RTL_SRWLOCK *))v26->Ptr + 1))(v26);
              WindowEventDispatcher::RaiseViewEventWithPropertySet((__int64)&this[-10], v27, 6, 0LL, (__int64 *)&v33);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v32);
              if ( v28 )
                (*((void (**)(void))v28->Ptr + 2))();
            }
            if ( v18 )
              (*((void (__fastcall **)(RTL_SRWLOCK *))v18->Ptr + 2))(v18);
            if ( v25 )
              std::_Ref_count_base::_Decref(v25);
          }
          break;
        case 19:
        case 23:
        case 25:
        case 26:
        case 27:
          AcquireSRWLockExclusive(this + 49);
          v32 = this + 49;
          WindowEventDispatcher::HandleForegroundWindow((WindowEventDispatcher *)&this[-10], a3);
          if ( this != (RTL_SRWLOCK *)-392LL )
            ReleaseSRWLockExclusive(this + 49);
          break;
        case 31:
        case 36:
        case 38:
          v34 = 0LL;
          v7 = this + 49;
          AcquireSRWLockShared(this + 49);
          v29 = (__int64 *)&this[49];
          v8 = 0LL;
          v33 = 0LL;
          LODWORD(v32) = 8;
          v9 = (RTL_SRWLOCK **)this[36].Ptr;
          v10 = (RTL_SRWLOCK **)this[37].Ptr;
          while ( v9 != v10 )
          {
            if ( *v9 && a3 == (HWND)(*((int (__fastcall **)(RTL_SRWLOCK *))(*v9)->Ptr + 32))(*v9) )
            {
              v16 = *v9;
              v8 = v16;
              v33 = *v9;
              if ( v16 )
                (*((void (__fastcall **)(RTL_SRWLOCK *))v16->Ptr + 1))(v16);
              break;
            }
            ++v9;
          }
          v33 = 0LL;
          v34 = v8;
          if ( v7 )
            ReleaseSRWLockShared(v7);
          if ( v8 )
          {
            (*((void (__fastcall **)(RTL_SRWLOCK *, unsigned __int64))v8->Ptr + 41))(v8, a2);
            (*((void (__fastcall **)(RTL_SRWLOCK *))v8->Ptr + 2))(v8);
          }
          break;
        case 34:
          AcquireSRWLockExclusive(this + 49);
          v33 = this + 49;
          WindowEventDispatcher::WindowWrapperFromWindow(&this[-10], &v32, a3);
          if ( v32 )
            (*((void (__fastcall **)(RTL_SRWLOCK *))v32->Ptr + 42))(v32);
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v32);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v33);
          break;
        default:
          return 0LL;
      }
    }
  }
  return 0LL;
}

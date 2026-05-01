/*
 * XREFs of ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1800C9180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1801618D0 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CClassicWindowManager::HandleTaskListDeletedChange(CClassicWindowManager *this, HWND a2)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rsi
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int PropW; // eax
  __int64 v13; // r8
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF
  __int64 v15; // [rsp+88h] [rbp+10h] BYREF
  int (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    while ( 1 )
    {
      v17 = 0LL;
      v6 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 10) + 8 * v5);
      v16 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v6;
      if ( v6 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[1])(v6);
      v14 = 0LL;
      v7 = **v6;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
      if ( v7(v6, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v14) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v14 + 192LL))(v14, a2) )
      {
        v8 = 0;
      }
      else
      {
        v8 = -1;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      if ( !v8 )
        break;
      if ( (unsigned __int64)++v5 >= *((_QWORD *)this + 11) )
        goto LABEL_9;
    }
    v4 = v5;
    v9 = 0;
  }
  else
  {
LABEL_9:
    v9 = -2147319765;
  }
  if ( v9 >= 0 )
  {
    v11 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 10) + 8 * v4);
    if ( (**v11)(v11, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v15) >= 0 )
    {
      PropW = (unsigned int)GetPropW(a2, L"ITaskList_Deleted");
      v13 = 1024LL;
      if ( PropW )
        v13 = 512LL;
      CClassicWindowManager::_ChangeWindowType((char *)this - 112, v15, v13);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}

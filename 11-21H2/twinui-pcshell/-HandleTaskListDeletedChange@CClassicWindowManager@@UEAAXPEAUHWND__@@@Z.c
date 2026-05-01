/*
 * XREFs of ?HandleTaskListDeletedChange@CClassicWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1801044F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180105678 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CClassicWindowManager::HandleTaskListDeletedChange(CClassicWindowManager *this, HWND a2)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int PropW; // eax
  __int64 v13; // r8
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v15 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    while ( 1 )
    {
      v17 = 0LL;
      v6 = *(_QWORD *)(*((_QWORD *)this + 10) + 8 * v5);
      v16 = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v14 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
             v6,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v14) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v14 + 192LL))(v14, a2) )
      {
        v7 = 0;
      }
      else
      {
        v7 = -1;
      }
      v8 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      if ( !v7 )
        break;
      if ( (unsigned __int64)++v5 >= *((_QWORD *)this + 11) )
        goto LABEL_11;
    }
    v4 = v5;
    v9 = 0;
  }
  else
  {
LABEL_11:
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

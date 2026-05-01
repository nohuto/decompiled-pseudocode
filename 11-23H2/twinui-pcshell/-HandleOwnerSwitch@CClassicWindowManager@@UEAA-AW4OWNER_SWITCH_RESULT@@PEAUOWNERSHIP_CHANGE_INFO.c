/*
 * XREFs of ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x1800142B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18004D854 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x1800D5FEC (CClassicWindowManager--ForEachWindow__lambda_9464cc021c09e3331999e98539241978___.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1802D0518 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CClassicWindowManager::HandleOwnerSwitch(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  CClassicWindowManager *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // r13
  HWND v6; // r14
  _QWORD *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // r15
  unsigned __int64 i; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // edi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rcx
  void (__fastcall *v25)(__int64, _QWORD); // r14
  _QWORD *ClassicWindowOwner; // rax
  void (__fastcall *v27)(__int64, __int64); // rdi
  __int64 AddressOf; // rax
  __int64 v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v31[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v33[3]; // [rsp+50h] [rbp-28h] BYREF
  int v34; // [rsp+68h] [rbp-10h]
  int v35; // [rsp+C0h] [rbp+48h]
  __int64 v37; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v38; // [rsp+D8h] [rbp+60h] BYREF

  v2 = a2;
  v4 = (CClassicWindowManager *)(a1 - 72);
  if ( a1 == 72 )
    v5 = 0LL;
  else
    v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v33[2] = v5;
  v34 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v5, 1LL);
  v35 = 0;
  v6 = *(HWND *)v2;
  v37 = 0LL;
  v32 = *(_QWORD *)(a1 + 128);
  v7 = (_QWORD *)(a1 + 112);
  v33[0] = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  v9 = 0LL;
  if ( *(_QWORD *)(a1 + 128) )
  {
    while ( 1 )
    {
      v31[0] = 0LL;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v9);
      v30 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v38 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
             v10,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v38) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v38 + 192LL))(v38, v6) )
      {
        v11 = 0;
      }
      else
      {
        v11 = -1;
      }
      v12 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v31);
      if ( !v11 )
        break;
      if ( (unsigned __int64)++v9 >= *(_QWORD *)(a1 + 128) )
      {
        v2 = a2;
        v8 = 0LL;
        goto LABEL_14;
      }
    }
    v8 = v9;
    v29 = v9;
    v13 = 0;
    v2 = a2;
  }
  else
  {
LABEL_14:
    v13 = -2147319765;
  }
  if ( v13 >= 0 )
  {
    v24 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 120) + 8 * v8);
    v13 = (**v24)(v24, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v37);
    v14 = v29;
  }
  else
  {
    v14 = v32;
  }
  if ( v13 >= 0 )
  {
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v4, v37, *(unsigned int *)(v2 + 8));
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v37 + 152LL))(v37) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*v7 + 16LL))(a1 + 112, v14);
      v20 = 2;
      v35 = 2;
      goto LABEL_28;
    }
  }
  else if ( v13 == -2147319765 )
  {
    v15 = *(_DWORD *)(v2 + 8);
    if ( (v15 & 1) != 0 )
    {
      if ( IsWindowVisible(*(HWND *)v2) )
      {
        v20 = 1;
        v35 = 1;
        goto LABEL_28;
      }
      if ( *(_QWORD *)CClassicWindowManager::GetClassicWindowOwner(v4) )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
        v38 = 0LL;
        v33[0] = &v38;
        v33[1] = v4;
        v32 = 0LL;
        v31[0] = &v32;
        v31[1] = v33;
        CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___(v4, v31);
      }
      else
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
      }
    }
    else if ( (v15 & 0x12) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 128);
      for ( i = 0LL; i < v16; ++i )
      {
        v18 = v7[1];
        v19 = *(_QWORD *)(v18 + 8 * i);
        if ( v19 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 8LL))(*(_QWORD *)(v18 + 8 * i));
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 160LL))(v19) )
        {
          v25 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 104LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
          ClassicWindowOwner = (_QWORD *)CClassicWindowManager::GetClassicWindowOwner(v4);
          v25(v19, *ClassicWindowOwner);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v38);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  v20 = 0;
LABEL_28:
  v21 = v37;
  if ( v37 && !v20 )
  {
    v27 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(a2 + 16);
    v27(v21, AddressOf);
    v20 = v35;
  }
  v22 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( v34 >= 0 )
    LeaveCriticalSection(v5);
  return v20;
}

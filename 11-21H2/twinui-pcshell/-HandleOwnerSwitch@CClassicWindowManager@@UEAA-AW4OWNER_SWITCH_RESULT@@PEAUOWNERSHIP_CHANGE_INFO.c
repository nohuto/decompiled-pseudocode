/*
 * XREFs of ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x1802F0590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18003C658 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x18003C738 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x1801053C0 (CClassicWindowManager--ForEachWindow__lambda_9464cc021c09e3331999e98539241978___.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___ @ 0x18022A856 (CClassicWindowManager--ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1802F0FA8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::HandleOwnerSwitch(__int64 a1, __int64 a2)
{
  CClassicWindowManager *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // r15
  int v6; // r12d
  unsigned int v7; // esi
  int ClassicWindow; // eax
  __int64 v9; // rbx
  struct IClassicWindow *v10; // rbx
  void (__fastcall *v11)(struct IClassicWindow *, __int64 *); // rdi
  __int64 *AddressOf; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-8h]
  struct IClassicWindow *v17; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+50h] BYREF

  v4 = (CClassicWindowManager *)(a1 - 72);
  v5 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v15[2] = v5;
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v5, 1);
  v16 = v6;
  v7 = 0;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
  ClassicWindow = CClassicWindowManager::_FindClassicWindow(v4, *(HWND *)a2, &v17, &v18);
  if ( ClassicWindow < 0 )
  {
    if ( ClassicWindow == -2147319765 )
    {
      if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
      {
        if ( IsWindowVisible(*(HWND *)a2) )
        {
          v7 = 1;
        }
        else
        {
          v9 = *CClassicWindowManager::GetClassicWindowOwner(v4, (__int64 *)&v18, *(HWND *)a2);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
          if ( v9 )
          {
            v18 = 0LL;
            v14[0] = &v18;
            v14[1] = v4;
            v19 = 0LL;
            v15[0] = &v19;
            v15[1] = v14;
            CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___((__int64)v4, (__int64)v15);
          }
        }
      }
      else if ( (*(_BYTE *)(a2 + 8) & 0x12) != 0 )
      {
        CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___((__int64)v4, v4);
      }
    }
  }
  else
  {
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v4, v17, *(unsigned int *)(a2 + 8));
    if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 152LL))(v17) )
    {
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(a1 + 112) + 16LL))(a1 + 112, v18);
      v7 = 2;
    }
  }
  v10 = v17;
  if ( v17 && !v7 )
  {
    v11 = *(void (__fastcall **)(struct IClassicWindow *, __int64 *))(*(_QWORD *)v17 + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)(a2 + 16));
    v11(v10, AddressOf);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
  if ( v6 >= 0 )
    LeaveCriticalSection(v5);
  return v7;
}

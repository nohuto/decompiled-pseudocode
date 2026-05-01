/*
 * XREFs of ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18002107C
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x180020F60 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x180306B30 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x180306BC4 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     ?SendConsolidated@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x180307814 (-SendConsolidated@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@W4WINDOW_CONSOLIDAT.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180307B90 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x180307FFC (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180308F84 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2,
        unsigned __int64 *a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // edi
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 22) )
  {
    if ( a2 )
    {
      v12 = 0LL;
      v13 = 0;
      v14 = 0LL;
      v7 = 0LL;
      v8 = 0LL;
      if ( *((_QWORD *)this + 22) )
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * v8);
          if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) == a2 )
            break;
          if ( ++v8 >= *((_QWORD *)this + 22) )
            goto LABEL_10;
        }
        v7 = v8;
        v10 = 0;
      }
      else
      {
LABEL_10:
        v10 = -2147319765;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      if ( v10 >= 0 )
        *a3 = v7;
      v6 = v10;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    }
  }
  else
  {
    return (unsigned int)-2147319765;
  }
  return v6;
}

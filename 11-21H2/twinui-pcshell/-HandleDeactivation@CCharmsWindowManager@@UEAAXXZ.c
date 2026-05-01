/*
 * XREFs of ?HandleDeactivation@CCharmsWindowManager@@UEAAXXZ @ 0x18015E810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?s_GetBehaviorCharm@CCharmsWindowManager@@CA?AW4CHARM_WINDOW_VISIBILITY_BEHAVIOR@@PEAUHWND__@@@Z @ 0x1802F26C0 (-s_GetBehaviorCharm@CCharmsWindowManager@@CA-AW4CHARM_WINDOW_VISIBILITY_BEHAVIOR@@PEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCharmsWindowManager::HandleDeactivation(CCharmsWindowManager *this)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int BehaviorCharm; // eax
  int v5; // eax
  bool v6; // di
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(CCharmsWindowManager *))(*(_QWORD *)this + 56LL))(this);
  v3 = v2;
  if ( v2 )
  {
    BehaviorCharm = CCharmsWindowManager::s_GetBehaviorCharm(v2);
    if ( BehaviorCharm )
    {
      v5 = BehaviorCharm - 1;
      if ( v5 )
      {
        if ( v5 == 2 )
        {
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
          if ( IUnknown_QueryService(
                 *((IUnknown **)this - 2),
                 &IID_IImmersiveApplicationManager,
                 &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
                 &ppvOut) >= 0
            && (*(int (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr) >= 0 )
          {
            (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, v3);
            *((_DWORD *)this + 14) |= 8u;
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
        }
      }
      else
      {
        *((_DWORD *)this + 14) |= 4u;
      }
    }
    else if ( (*((_BYTE *)this + 56) & 0xC) == 0 )
    {
      v7[0] = v3;
      v7[1] = 0LL;
      v6 = (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 8) + 56LL))(*((_QWORD *)this + 8), v7) >= 0;
      if ( (*(int (__fastcall **)(_QWORD))(***((_QWORD ***)this + 3) + 112LL))(**((_QWORD **)this + 3)) >= 0 )
        *((_DWORD *)this + 14) &= ~1u;
      if ( v6 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
    }
  }
  *((_DWORD *)this + 14) &= ~2u;
}

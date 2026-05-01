/*
 * XREFs of ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180010B9C
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18000F300 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180011554 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180187820 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801878C0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  __int64 (__fastcall *v4)(struct IImmersiveApplicationInternal *, __int64 *); // rbx
  int v5; // edi
  RTL_SRWLOCK *v6; // rbx
  __int64 (__fastcall *v7)(struct IImmersiveApplicationInternal *, __int64 *); // rdi
  RTL_SRWLOCK *v9; // rbx
  int v10; // r15d
  DWORD WindowThreadProcessId; // eax
  HWND hWnd; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v13[24]; // [rsp+28h] [rbp-18h] BYREF
  PSRWLOCK dwProcessId; // [rsp+78h] [rbp+38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  v5 = v4(a2, &v16);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
    v15 = 0LL;
    v6 = CApplicationManagerUtility::g_pIAMGlobals;
    dwProcessId = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = *(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 496LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    v5 = v7(a2, &v15);
    if ( v6 )
      ReleaseSRWLockShared(v6);
    if ( v5 >= 0 )
    {
      CRPCTimeout::CRPCTimeout((CRPCTimeout *)v13, 0x2710u);
      v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 176LL))(v15, 1LL);
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v13);
      if ( v13[4] )
      {
        v9 = CApplicationManagerUtility::g_pIAMGlobals;
        dwProcessId = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
        v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v15 + 24LL))(v15, &hWnd);
        if ( v9 )
          ReleaseSRWLockShared(v9);
        if ( v10 >= 0 )
        {
          WindowThreadProcessId = GetWindowThreadProcessId(hWnd, (LPDWORD)&dwProcessId);
          if ( (_DWORD)dwProcessId )
          {
            if ( WindowThreadProcessId )
              ReportCoreHang(&dwProcessId, 1LL, WindowThreadProcessId);
          }
        }
      }
      if ( v5 >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 76) + 88LL))(*((_QWORD *)this + 76), v15);
      CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v13);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    if ( v5 >= 0 )
      CApplicationManager::UpdateMonitorForAppAsync(this, a2);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  return (unsigned int)v5;
}

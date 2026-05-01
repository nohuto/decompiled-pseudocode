/*
 * XREFs of ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180012680
 * Callers:
 *     ?SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18006E4E0 (-SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z.c)
 *     ?SwitchToShellWindow@CApplicationManager@@UEAAJXZ @ 0x1803A13A0 (-SwitchToShellWindow@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x180012608 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ??$CreateRefCountedObj@V?$CAutoHandle@PEAX@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@@WRL@Microsoft@@XZ @ 0x180012890 (--$CreateRefCountedObj@V-$CAutoHandle@PEAX@@$$V@@YA-AV-$ComPtr@V-$CRefCountedObject@V-$CAutoHand.c)
 *     CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x1800128E0 (CDelayIAMOperations--AddOperation__lambda_d2a883147a4aaef7223296bf15465975___.c)
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x180012A4C (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18004DFE8 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::SwitchToDesktopOnMonitor(CIAMGlobals *a1, __int64 a2, int a3)
{
  signed int Error; // edi
  CApplicationManager *v6; // rsi
  HANDLE *v7; // rbx
  bool IsCalledOnIAMThread; // al
  bool v9; // r13
  unsigned int v10; // r15d
  HANDLE **v11; // rax
  __int64 v12; // rcx
  HANDLE Event; // rax
  int v14; // edi
  HANDLE *v15; // rcx
  HANDLE *v17; // [rsp+20h] [rbp-30h] BYREF
  CApplicationManager *v18; // [rsp+28h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  bool v20; // [rsp+38h] [rbp-18h]
  HANDLE *v21; // [rsp+40h] [rbp-10h] BYREF
  int v22; // [rsp+48h] [rbp-8h]
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF

  Error = 0;
  v6 = (CIAMGlobals *)((char *)a1 - 152);
  if ( (a3 & 0x20) == 0 )
  {
    Error = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch((CIAMGlobals *)((char *)a1 - 152));
    if ( Error < 0 )
      return (unsigned int)Error;
  }
  v7 = 0LL;
  v17 = 0LL;
  IsCalledOnIAMThread = CIAMGlobals::IsCalledOnIAMThread(a1);
  v9 = IsCalledOnIAMThread;
  v10 = 3;
  if ( (a3 & 4) != 0 )
    goto LABEL_14;
  if ( IsCalledOnIAMThread )
  {
    Error = CApplicationManager::_ActivateIamSpecialWindow(v6);
LABEL_14:
    if ( Error >= 0 )
    {
      v24 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
      v18 = v6;
      v19 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
      v20 = v9;
      v21 = v7;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
      v22 = a3;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v14 = CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___(
              *((_QWORD *)a1 + 81),
              &v18,
              v10);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v14 )
      {
        Error = 0;
        if ( v7 )
          WaitForSingleObjectEx(v7[1], 0x1388u, 0);
      }
      else
      {
        Error = -2147467259;
      }
      v15 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*((void (__fastcall **)(HANDLE *))*v15 + 2))(v15);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    }
    goto LABEL_21;
  }
  v11 = (HANDLE **)CreateRefCountedObj<CAutoHandle<void *>,>(&v24);
  if ( &v17 != v11 )
  {
    v7 = *v11;
    *v11 = 0LL;
  }
  v17 = v7;
  v12 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v7 )
  {
    Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    v7[1] = Event;
    if ( Event )
    {
      Error = 0;
LABEL_13:
      v10 = 4;
      goto LABEL_14;
    }
    Error = ResultFromKnownLastError();
    if ( Error >= 0 )
      goto LABEL_13;
  }
  else
  {
    Error = -2147024882;
  }
LABEL_21:
  if ( v7 )
    (*((void (__fastcall **)(HANDLE *))*v7 + 2))(v7);
  return (unsigned int)Error;
}

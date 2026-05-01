/*
 * XREFs of ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180057F20
 * Callers:
 *     ?SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180057E70 (-SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z.c)
 *     ?SwitchToShellWindow@CApplicationManager@@UEAAJXZ @ 0x1802E8C70 (-SwitchToShellWindow@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x180058134 (CDelayIAMOperations--AddOperation__lambda_d2a883147a4aaef7223296bf15465975___.c)
 *     ??$CreateRefCountedObj@V?$CAutoHandle@PEAX@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@@WRL@Microsoft@@XZ @ 0x1800582B4 (--$CreateRefCountedObj@V-$CAutoHandle@PEAX@@$$V@@YA-AV-$ComPtr@V-$CRefCountedObject@V-$CAutoHand.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x180058438 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x180058A64 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x180058FA4 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::SwitchToDesktopOnMonitor(CApplicationManager *a1, __int64 a2, int a3)
{
  int Error; // edi
  HANDLE *v7; // rbx
  bool IsCalledOnIAMThread; // al
  bool v9; // r12
  unsigned int v10; // r14d
  HANDLE **v11; // rax
  __int64 v12; // rcx
  HANDLE Event; // rax
  int v14; // edi
  __int64 v15; // rcx
  HANDLE *v17; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v18; // [rsp+28h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  bool v20; // [rsp+38h] [rbp-18h]
  HANDLE *v21; // [rsp+40h] [rbp-10h] BYREF
  int v22; // [rsp+48h] [rbp-8h]
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  Error = 0;
  if ( (a3 & 0x20) == 0 )
  {
    Error = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch(a1);
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
    Error = CApplicationManager::_ActivateIamSpecialWindow((CApplicationManager *)((char *)a1 - 152));
LABEL_14:
    if ( Error >= 0 )
    {
      v23 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
      v18 = (_QWORD *)((char *)a1 - 152);
      v19 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
      v20 = v9;
      v21 = v7;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
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
      v15 = (__int64)v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    }
    goto LABEL_21;
  }
  v11 = (HANDLE **)CreateRefCountedObj<CAutoHandle<void *>,>(&v23);
  if ( &v17 != v11 )
  {
    v7 = *v11;
    *v11 = 0LL;
  }
  v17 = v7;
  v12 = v23;
  if ( v23 )
  {
    v23 = 0LL;
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

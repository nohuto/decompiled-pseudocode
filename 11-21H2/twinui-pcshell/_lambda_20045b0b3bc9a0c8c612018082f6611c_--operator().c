/*
 * XREFs of _lambda_20045b0b3bc9a0c8c612018082f6611c_::operator() @ 0x1802E0540
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___::operator() @ 0x1802E0FE0 (CDelayIAMOperations--CDelayedOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003AC08 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18005731C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18005897C (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18016A3E0 (-_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_20045b0b3bc9a0c8c612018082f6611c_::operator()(__int64 a1)
{
  CApplicationManager *v2; // rbx
  __int64 *AddressOf; // rax
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64, __int64 *); // rdi
  __int64 *v6; // rax
  CApplicationManager *v7; // rbx
  struct IObjectArray *v8; // rbx
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rdi
  CApplicationManager *v10; // rbx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-28h] BYREF
  struct IUnknown *v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14[3]; // [rsp+50h] [rbp-18h] BYREF
  int v15; // [rsp+90h] [rbp+28h] BYREF
  struct IObjectArray *v16; // [rsp+98h] [rbp+30h] BYREF
  struct ISyncIAMEventHandler *v17; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+40h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = 0LL;
  v2 = *(CApplicationManager **)a1;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)&v12);
  if ( (int)CApplicationManager::_GetForegroundApplicationNoLock(v2, (struct IImmersiveApplication **)AddressOf) >= 0 )
  {
    v14[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v12, v14) >= 0 )
    {
      v13 = 0LL;
      v4 = v14[0];
      v5 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14[0] + 464LL);
      v6 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v13);
      v5(v4, v6);
      if ( (unsigned int)SHIsSameObject(v13, *(struct IUnknown **)(a1 + 8)) )
      {
        v16 = 0LL;
        v18 = 0LL;
        v7 = *(CApplicationManager **)a1;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
        if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(v7, 0LL, &v16) >= 0 )
        {
          v8 = v16;
          GetAt = v16->lpVtbl->GetAt;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
          if ( ((int (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))GetAt)(
                 v8,
                 0LL,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 &v18) >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 48LL))(v18, &v15) >= 0
            && v15 )
          {
            v17 = 0LL;
            v10 = *(CApplicationManager **)a1;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
            if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(v10, &v17) >= 0 )
              (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, __int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), int, int, int))(*(_QWORD *)v17 + 24LL))(
                v17,
                v16,
                (*(_QWORD *)a1 + 248LL) & -(__int64)(*(_QWORD *)a1 != 0LL),
                v12,
                8,
                8,
                0xFFFF);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v14);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
}

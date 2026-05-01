/*
 * XREFs of ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x1800EBD40
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180085700 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800EC840 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GU.c)
 *     CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___ @ 0x1800EC8E0 (CDelayIAMOperations--AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___.c)
 *     ?RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z @ 0x1800EC9EC (-RemoveOperation@CDelayIAMOperations@@QEAAPEAVCOperation@1@K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801896CC (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CApplicationManager::OnMessage(
        CApplicationManager *this,
        int a2,
        HWND a3,
        unsigned int a4,
        bool *a5)
{
  bool v9; // si
  __int64 v10; // r8
  bool v11; // al
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rbx
  int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  struct CDelayIAMOperations::COperation *v22; // rbx
  int (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rcx
  int v24; // ebx
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 v27; // r13
  void *v28; // r15
  _DWORD *v29; // rax
  _DWORD *v30; // rbx
  _DWORD *v31; // rdi
  unsigned int v32; // eax
  struct CDelayIAMOperations::COperation *v33; // rax
  struct CDelayIAMOperations::COperation *v34; // rbx
  bool v35; // [rsp+30h] [rbp-D0h]
  struct IObjectArray *v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  int v42; // [rsp+60h] [rbp-A0h]
  int v43; // [rsp+64h] [rbp-9Ch]
  unsigned int Ptr; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+80h] [rbp-80h]
  void *Block; // [rsp+88h] [rbp-78h]
  int v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-60h] BYREF
  int v52; // [rsp+A8h] [rbp-58h]
  void *v53; // [rsp+B0h] [rbp-50h]
  int v54; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v57[2]; // [rsp+D0h] [rbp-30h] BYREF
  HWND v58; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v59; // [rsp+E8h] [rbp-18h]
  char v60; // [rsp+F0h] [rbp-10h]
  GUID iid; // [rsp+F8h] [rbp-8h] BYREF
  WCHAR Buffer[40]; // [rsp+110h] [rbp+10h] BYREF

  v9 = 0;
  if ( CApplicationManager::_uMsgWindowServiceRegister != a2 && CApplicationManager::_uMsgWindowServiceUnregister != a2 )
  {
    if ( a2 != 1025 )
    {
      if ( a2 == 1026 )
      {
        v9 = 1;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v22 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 75), a4);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v22 )
        {
          (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v22 + 8LL))(v22);
          (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v22)(v22, 1LL);
        }
      }
      goto LABEL_31;
    }
    v9 = 1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v33 = CDelayIAMOperations::RemoveOperation(*((CDelayIAMOperations **)this + 75), a4);
    v34 = v33;
    if ( v33 )
    {
      (*(void (__fastcall **)(struct CDelayIAMOperations::COperation *))(*(_QWORD *)v33 + 8LL))(v33);
      (**(void (__fastcall ***)(struct CDelayIAMOperations::COperation *, __int64))v34)(v34, 1LL);
    }
LABEL_30:
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    goto LABEL_31;
  }
  v9 = 1;
  if ( GlobalGetAtomNameW(a4, Buffer, 40)
    && IIDFromString(Buffer, &iid) >= 0
    && (unsigned int)GetWindowBand(a3, &v40)
    && ((v40 == 1 || v40 == 8) && v40 != 1
     || (unsigned int)GetWindowBand(a3, &v41)
     && ((v41 == 1 || v41 == 8) && v41 != 1 || v41 == 1 && (unsigned int)IsShellManagedWindow(a3, 1LL, v10)))
    && !GetWindow(a3, 4u) )
  {
    v11 = (int)CoreIsWindowServiceSupported(a3, &iid) >= 0;
    v35 = CApplicationManager::_uMsgWindowServiceRegister == a2;
    if ( v11 == (CApplicationManager::_uMsgWindowServiceRegister == a2) )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v36 = (struct IObjectArray *)((char *)this - 200);
      v37 = 0LL;
      v57[0] = 0LL;
      v12 = 0LL;
      v38 = 0LL;
      v13 = 0LL;
      if ( *((_QWORD *)this + 55) )
      {
        while ( 1 )
        {
          v56 = 0LL;
          v14 = *(_QWORD *)(*((_QWORD *)this + 54) + 8 * v13);
          v55 = v14;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          v15 = -1;
          v39 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v14)(
                 v14,
                 &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                 &v39) >= 0 )
          {
            v16 = *v39;
            v58 = a3;
            v59 = 0LL;
            v60 = 0;
            v15 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, __int64))(v16 + 296))(v39, &v58, 2LL) != 0) - 1;
            v17 = v59;
            if ( v59 )
            {
              v59 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            }
          }
          v18 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v55);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v56);
          if ( !v15 )
            break;
          if ( (unsigned __int64)++v13 >= *((_QWORD *)this + 55) )
          {
            v12 = v38;
            goto LABEL_25;
          }
        }
        v12 = v13;
        v19 = 0;
      }
      else
      {
LABEL_25:
        v19 = -2147319765;
      }
      if ( v19 < 0
        || (v23 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 54) + 8 * v12),
            (**v23)(v23, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v37) < 0) )
      {
        if ( !GetPropW(a3, L"DelayServiceAvailabilityChangedOperationId") )
        {
          v57[0] = v36;
          v57[1] = a3;
          v32 = CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___(v36[100].lpVtbl, v57);
          if ( v32 )
            SetPropW(a3, L"DelayServiceAvailabilityChangedOperationId", (HANDLE)v32);
        }
      }
      else
      {
        v24 = 4;
        if ( v35 )
          v24 = 5;
        if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 384LL))(v37) == a3 )
          v24 |= 2u;
        v38 = 0LL;
        (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v37)(
          v37,
          &GUID_8b14e88b_5663_4caf_b196_c31479262831,
          &v38);
        v25 = v38;
        v36 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36);
        if ( (int)AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)this + 30, &v36) >= 0 )
        {
          SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA(&v45, v25, v36, 1LL, &iid, v24);
          v26 = v45;
          v45 = 0LL;
          v50 = v26;
          v27 = v46;
          v46 = 0LL;
          v51 = v27;
          v42 = v49;
          v54 = v49;
          v43 = v47;
          v52 = v47;
          v28 = Block;
          v53 = Block;
          Block = 0LL;
          v49 = 0;
          Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
          v29 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
          v30 = v29;
          v31 = 0LL;
          if ( v29 )
          {
            v29[3] = 1;
            *(_QWORD *)v29 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
            v50 = 0LL;
            *((_QWORD *)v30 + 2) = v26;
            v51 = 0LL;
            *((_QWORD *)v30 + 3) = v27;
            v30[12] = v42;
            v30[8] = v43;
            *((_QWORD *)v30 + 5) = v28;
            v28 = 0LL;
            v53 = 0LL;
            v54 = 0;
            *(_QWORD *)v30 = off_180631740;
            v31 = v30;
          }
          SHTaskPoolQueueTask(3LL, 2LL, Ptr, 0LL, v31, 0LL);
          if ( v31 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v31 + 16LL))(v31);
          operator delete[](v28);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
          operator delete[](0LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v36);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
      }
      v20 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_30;
    }
  }
LABEL_31:
  *a5 = v9;
  return 0LL;
}

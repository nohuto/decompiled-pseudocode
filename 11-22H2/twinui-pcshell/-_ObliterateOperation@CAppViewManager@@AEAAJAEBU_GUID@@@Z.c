/*
 * XREFs of ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1803B72E4
 * Callers:
 *     wil::details::lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___::_lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___ @ 0x1803AC534 (wil--details--lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___--_lambda_call__lambda_f9c9.c)
 *     _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x1803AC8CC (_lambda_3a58774b2403835eabbd2227e376bc7e_--operator().c)
 *     ?DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z @ 0x1803ADF70 (-DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z @ 0x1803B51E0 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x1803BA0F8 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000FF1C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180061D8C (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_ObliterateOperation(CAppViewManager *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, const struct _GUID *, _BYTE *, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v10; // eax
  int v11; // eax
  int GlomWorker; // eax
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64); // [rsp+38h] [rbp-38h] BYREF
  int v18; // [rsp+40h] [rbp-30h] BYREF
  PSRWLOCK v19; // [rsp+48h] [rbp-28h]
  _BYTE v20[16]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v19 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v18);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x552,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_20;
  }
  if ( v18 )
  {
    v17 = 0LL;
    v7 = *((_QWORD *)this + 23);
    v8 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _BYTE *, __int64 *))(*(_QWORD *)v7 + 56LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf((__int64 *)&v17);
    v10 = v8(v7, a2, v20, AddressOf);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x558,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_18:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
      goto LABEL_20;
    }
    if ( v17 )
    {
      v16 = 0LL;
      v11 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v17, (__int64)&v16);
      v6 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x55D,
          (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
        goto LABEL_18;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 192LL))(v16) )
      {
        GlomWorker = CAppViewManager::_TransferAllWindowsToNextGlomWorker((__int64)this, v16, 0LL, -3);
        if ( GlomWorker < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x562,
            (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)GlomWorker);
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 176LL))(
                *((_QWORD *)this + 15),
                v16);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x566,
            (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v13);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *))(**((_QWORD **)this + 23) + 72LL))(
            *((_QWORD *)this + 23),
            a2);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x56A,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
    v6 = 0;
    goto LABEL_18;
  }
  v6 = -2147023728;
LABEL_20:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}

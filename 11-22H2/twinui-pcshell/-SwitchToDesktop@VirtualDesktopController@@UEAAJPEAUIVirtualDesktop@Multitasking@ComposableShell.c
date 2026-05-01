/*
 * XREFs of ?SwitchToDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180543730
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18038D25C (--1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall VirtualDesktopController::SwitchToDesktop(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // ebx
  __int64 (__fastcall *v6)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 *Ptr; // rcx
  __int64 v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rbx
  int v16; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD); // rdi
  _QWORD *v21; // rax
  int v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+28h] [rbp-58h] BYREF
  __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h] BYREF
  __int64 v27; // [rsp+40h] [rbp-40h] BYREF
  RTL_SRWLOCK *v28; // [rsp+48h] [rbp-38h] BYREF
  GUID v29; // [rsp+50h] [rbp-30h] BYREF
  GUID v30; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = this + 17;
  AcquireSRWLockShared(this + 17);
  v28 = v4;
  if ( this[11].Ptr )
  {
    v24 = 0LL;
    v6 = **a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    v7 = v6(
           (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
           &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
           &v24);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v7);
LABEL_24:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v24);
      goto LABEL_25;
    }
    v8 = (__int64 *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v24 + 24LL))(v24, &v30);
    v9 = *v8;
    *v8 = 0LL;
    v27 = v9;
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v30);
    v26 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
            v9,
            &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30,
            &v26);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 170LL;
      goto LABEL_14;
    }
    v23 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 56LL))(v26, &v23);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 173LL;
      goto LABEL_14;
    }
    if ( v23 )
    {
      v30 = GUID_NULL;
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v9 + 32LL))(v9, &v30);
      v5 = v10;
      if ( v10 >= 0 )
      {
        Ptr = (__int64 *)this[18].Ptr;
        v13 = *Ptr;
        v29 = v30;
        v10 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD))(v13 + 88))(Ptr, &v29, 0LL);
        v5 = v10;
        if ( v10 >= 0 )
        {
          v5 = 0;
          goto LABEL_23;
        }
        v11 = 179LL;
      }
      else
      {
        v11 = 178LL;
      }
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v10);
LABEL_23:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
      goto LABEL_24;
    }
    v25 = 0LL;
    v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this[11].Ptr;
    v15 = **v14;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
    v16 = v15(v14, &GUID_53f5ca0b_158f_4124_900c_057158060b27, &v25);
    v5 = v16;
    if ( v16 >= 0 )
    {
      v19 = v25;
      v20 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 168LL);
      v21 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v24 + 24LL))(v24, &v30);
      v5 = v20(v19, *v21);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v30);
      if ( v5 >= 0 )
      {
        v5 = 0;
        goto LABEL_22;
      }
      v17 = (unsigned int)v5;
      v18 = 185LL;
    }
    else
    {
      v17 = (unsigned int)v16;
      v18 = 184LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)v17);
LABEL_22:
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v25);
    goto LABEL_23;
  }
  v5 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA3,
    (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)0x8007139FLL);
LABEL_25:
  Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(&v28);
  return (unsigned int)v5;
}

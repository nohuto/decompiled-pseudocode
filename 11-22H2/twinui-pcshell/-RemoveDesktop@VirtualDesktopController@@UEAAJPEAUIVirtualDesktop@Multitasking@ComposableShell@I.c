/*
 * XREFs of ?RemoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x180543180
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18038D25C (--1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall VirtualDesktopController::RemoveDesktop(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))
{
  RTL_SRWLOCK *v6; // rbx
  int v7; // ebx
  __int64 (__fastcall *v8)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 (__fastcall **v12)(__int64, GUID *, __int64 *); // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 *Ptr; // rcx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v18; // eax
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  PVOID v21; // rsi
  __int64 (__fastcall *v22)(PVOID, _QWORD, __int64); // rdi
  __int64 v23; // rbx
  _QWORD *v24; // rax
  int v26; // [rsp+20h] [rbp-39h] BYREF
  __int64 v27; // [rsp+28h] [rbp-31h] BYREF
  __int64 v28; // [rsp+30h] [rbp-29h] BYREF
  __int64 v29; // [rsp+38h] [rbp-21h] BYREF
  __int64 v30; // [rsp+40h] [rbp-19h] BYREF
  GUID v31; // [rsp+50h] [rbp-9h] BYREF
  RTL_SRWLOCK *v32; // [rsp+60h] [rbp+7h] BYREF
  GUID v33; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v6 = this + 17;
  AcquireSRWLockShared(this + 17);
  v32 = v6;
  if ( this[11].Ptr )
  {
    v27 = 0LL;
    v8 = **a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    v9 = v8(
           (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
           &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
           &v27);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE1,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v9);
LABEL_23:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v27);
      goto LABEL_24;
    }
    v30 = 0LL;
    v10 = (__int64 *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v27 + 24LL))(v27, &v31);
    v11 = *v10;
    *v10 = 0LL;
    v30 = v11;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
    v29 = 0LL;
    v12 = *(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v11;
    v29 = 0LL;
    v13 = (*v12)(v11, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v29);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = 231LL;
      goto LABEL_14;
    }
    v26 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 56LL))(v29, &v26);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = 234LL;
      goto LABEL_14;
    }
    if ( v26 )
    {
      v33 = GUID_NULL;
      v13 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v11 + 32LL))(v11, &v33);
      v7 = v13;
      if ( v13 >= 0 )
      {
        Ptr = (__int64 *)this[18].Ptr;
        v16 = *Ptr;
        v31 = v33;
        v13 = (*(__int64 (__fastcall **)(__int64 *, GUID *))(v16 + 80))(Ptr, &v31);
        v7 = v13;
        if ( v13 >= 0 )
        {
          v7 = 0;
          goto LABEL_22;
        }
        v14 = 240LL;
      }
      else
      {
        v14 = 239LL;
      }
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v13);
LABEL_22:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
      goto LABEL_23;
    }
    v28 = 0LL;
    v17 = **a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
    v18 = v17(
            (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a3,
            &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
            &v28);
    v7 = v18;
    if ( v18 >= 0 )
    {
      v21 = this[11].Ptr;
      v22 = *(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)v21 + 96LL);
      v23 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v28 + 24LL))(v28, &v33);
      v24 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v27 + 24LL))(v27, &v31);
      v7 = v22(v21, *v24, v23);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
      if ( v7 >= 0 )
      {
LABEL_21:
        Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v28);
        goto LABEL_22;
      }
      v19 = (unsigned int)v7;
      v20 = 247LL;
    }
    else
    {
      v19 = (unsigned int)v18;
      v20 = 245LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)v19);
    goto LABEL_21;
  }
  v7 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDE,
    (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)0x8007139FLL);
LABEL_24:
  Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(&v32);
  return (unsigned int)v7;
}

/*
 * XREFs of ?IsRemoteDesktopConnected@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180541FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18038D25C (--1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180391844 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopController::IsRemoteDesktopConnected(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        bool *a3)
{
  RTL_SRWLOCK *v6; // rbx
  __int64 (__fastcall **v7)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 *Ptr; // rcx
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  RTL_SRWLOCK *v22; // [rsp+48h] [rbp-38h] BYREF
  GUID v23; // [rsp+50h] [rbp-30h] BYREF
  GUID v24; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v6 = this + 14;
  AcquireSRWLockShared(this + 14);
  v22 = v6;
  v7 = *a2;
  v20 = 0LL;
  v8 = (*v7)(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v20);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v21 = 0LL;
    v10 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v18);
    v11 = *v10;
    *v10 = 0LL;
    v21 = v11;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    v19 = 0LL;
    v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
            v11,
            &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30,
            &v19);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v17 = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 56LL))(v19, &v17);
      v9 = v12;
      if ( v12 >= 0 )
      {
        if ( v17 )
        {
          v24 = GUID_NULL;
          v12 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v11 + 32LL))(v11, &v24);
          v9 = v12;
          if ( v12 < 0 )
          {
            v13 = 515LL;
            goto LABEL_12;
          }
          Ptr = (__int64 *)this[15].Ptr;
          v15 = *Ptr;
          v23 = v24;
          v12 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v15 + 144))(Ptr, &v23, &v18);
          v9 = v12;
          if ( v12 < 0 )
          {
            v13 = 518LL;
            goto LABEL_12;
          }
          *a3 = (_DWORD)v18 == 1;
        }
        else
        {
          *a3 = 0;
        }
        v9 = 0;
        goto LABEL_16;
      }
      v13 = 510LL;
    }
    else
    {
      v13 = 508LL;
    }
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v12);
LABEL_16:
    winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v19);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F7,
    (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v8);
LABEL_17:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(&v22);
  return v9;
}

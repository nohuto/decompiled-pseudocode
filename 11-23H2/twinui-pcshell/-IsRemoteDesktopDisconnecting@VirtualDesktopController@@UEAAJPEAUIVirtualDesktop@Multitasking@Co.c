/*
 * XREFs of ?IsRemoteDesktopDisconnecting@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180542230
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopController::IsRemoteDesktopDisconnecting(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        unsigned __int8 *a3)
{
  RTL_SRWLOCK *v6; // rdi
  __int64 (__fastcall **v7)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rax
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 *Ptr; // rcx
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-60h] BYREF
  __int64 v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20[3]; // [rsp+38h] [rbp-48h] BYREF
  GUID v21; // [rsp+50h] [rbp-30h] BYREF
  GUID v22; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v6 = this + 14;
  AcquireSRWLockShared(this + 14);
  v20[1] = (__int64)v6;
  v7 = *a2;
  v19 = 0LL;
  v8 = (*v7)(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v19);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x214,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  v20[0] = 0LL;
  v10 = (__int64 *)(*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v19 + 24LL))(v19, &v22);
  v11 = *v10;
  *v10 = 0LL;
  v20[0] = v11;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  v18 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
          v11,
          &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30,
          &v18);
  v9 = v12;
  if ( v12 >= 0 )
  {
    v17 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 56LL))(v18, &v17);
    v9 = v12;
    if ( v12 >= 0 )
    {
      if ( v17 )
      {
        v22 = GUID_NULL;
        v12 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v11 + 32LL))(v11, &v22);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 544LL;
          goto LABEL_12;
        }
        Ptr = (__int64 *)this[15].Ptr;
        v15 = *Ptr;
        v21 = v22;
        v12 = (*(__int64 (__fastcall **)(__int64 *, GUID *, unsigned __int8 *))(v15 + 216))(Ptr, &v21, a3);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 545LL;
          goto LABEL_12;
        }
      }
      else
      {
        *a3 = 0;
      }
      v9 = 0;
      goto LABEL_15;
    }
    v13 = 539LL;
  }
  else
  {
    v13 = 537LL;
  }
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v12);
LABEL_15:
  if ( v18 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v20);
LABEL_18:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v9;
}

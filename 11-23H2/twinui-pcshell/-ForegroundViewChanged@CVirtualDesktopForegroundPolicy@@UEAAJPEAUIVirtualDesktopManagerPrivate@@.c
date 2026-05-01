/*
 * XREFs of ?ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIApplicationView@@@Z @ 0x180041BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x18006B5F8 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BD28 (--1-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtualDesktop@@@Z @ 0x1805FC874 (-_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopForegroundPolicy::ForegroundViewChanged(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopSwitchAnimator *a3,
        struct IApplicationView *a4)
{
  __int64 v8; // r15
  unsigned int v9; // edi
  int (__fastcall *v11)(__int64, __int64); // rbx
  __int64 AddressOf; // rax
  __int64 (__fastcall *v13)(struct IVirtualDesktopManagerPrivate *, __int64 *); // rbx
  int v14; // eax
  int v15; // ebx
  int DesktopForView; // eax
  __int64 (__fastcall **v17)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+20h] [rbp-40h]
  int v25; // [rsp+30h] [rbp-30h] BYREF
  struct IVirtualDesktop *v26; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  struct IUnknown *v29[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v31; // [rsp+90h] [rbp+30h] BYREF

  v8 = *((_QWORD *)this + 5);
  v9 = 0;
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9A,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)0x80010108LL,
      v24);
    return 2147549448LL;
  }
  v29[0] = 0LL;
  v11 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 72LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(v29);
  if ( v11(v8, AddressOf) < 0 || (unsigned int)SHIsSameObject((struct IUnknown *)a4, v29[0]) )
  {
    v27 = 0LL;
    v13 = *(__int64 (__fastcall **)(struct IVirtualDesktopManagerPrivate *, __int64 *))(*(_QWORD *)a2 + 360LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v27);
    v14 = v13(a2, &v27);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA9,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
        (const char *)(unsigned int)v14,
        v24);
LABEL_9:
      v9 = v15;
LABEL_26:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v27);
      goto LABEL_27;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           a4,
           v27) )
    {
      v15 = 0;
      goto LABEL_9;
    }
    v26 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
    DesktopForView = CVirtualDesktopForegroundPolicy::_FindDesktopForView(this, a4, &v26);
    if ( DesktopForView < 0 )
    {
      v9 = DesktopForView;
LABEL_25:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v26);
      goto LABEL_26;
    }
    v28 = 0LL;
    v17 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v26;
    v28 = 0LL;
    v18 = (*v17)(v26, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v28);
    v19 = v18;
    if ( v18 >= 0 )
    {
      v31 = 0;
      v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 64LL))(v28, &v31);
      v19 = v18;
      if ( v18 >= 0 )
      {
        if ( v31 )
        {
          v19 = 0;
LABEL_24:
          v9 = v19;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
          goto LABEL_25;
        }
        v25 = 3;
        v22 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerPrivate *, __int64, struct IVirtualDesktop *, int *))(*(_QWORD *)a2 + 408LL))(
                a2,
                v27,
                v26,
                &v25);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xBB,
            (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
            (const char *)(unsigned int)v22,
            v24);
        v23 = (*(__int64 (__fastcall **)(struct IVirtualDesktopSwitchAnimator *, struct IVirtualDesktop *, bool))(*(_QWORD *)a3 + 24LL))(
                a3,
                v26,
                v25 != 3);
        v19 = v23;
        if ( v23 >= 0 )
          goto LABEL_24;
        v21 = (unsigned int)v23;
        v20 = 188LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
          (const char *)v21,
          v24);
        goto LABEL_24;
      }
      v20 = 181LL;
    }
    else
    {
      v20 = 179LL;
    }
    v21 = (unsigned int)v18;
    goto LABEL_23;
  }
LABEL_27:
  Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(v29);
  return v9;
}

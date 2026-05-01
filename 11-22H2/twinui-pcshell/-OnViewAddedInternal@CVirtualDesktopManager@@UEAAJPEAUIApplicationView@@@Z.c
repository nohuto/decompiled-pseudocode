/*
 * XREFs of ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180163CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180163F10 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180163F60 (-OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ??4?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop@@@Z @ 0x1801BB104 (--4-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDeskto.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVirtualDesktopManager::OnViewAddedInternal(
        __int64 **this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64))
{
  int CurrentDesktopInternal; // eax
  unsigned int v5; // ebx
  struct IVirtualDesktop *v6; // rbx
  __int64 (__fastcall **v7)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v8; // eax
  __int64 v9; // rdx
  struct IApplicationView *v10; // rdx
  __int64 *v11; // rsi
  __int64 (__fastcall *v12)(__int64 *, __int64, __int128 *); // rbx
  __int64 WindowForView; // rax
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+28h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  struct IVirtualDesktop *v22; // [rsp+38h] [rbp-38h] BYREF
  struct IVirtualDesktop *v23; // [rsp+40h] [rbp-30h] BYREF
  __int128 v24; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v23 = 0LL;
  CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal((CVirtualDesktopManager *)this, &v23);
  v5 = CurrentDesktopInternal;
  if ( CurrentDesktopInternal >= 0 )
  {
    v6 = v23;
    v22 = v23;
    if ( v23 )
      (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v23 + 8LL))(v23);
    v21 = 0LL;
    v7 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v6;
    v21 = 0LL;
    v8 = (*v7)(v6, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v21);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v19 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 64LL))(v21, &v19);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v24 = 0LL;
        v25 = 0LL;
        v11 = this[27];
        if ( v11 )
        {
          v12 = *(__int64 (__fastcall **)(__int64 *, __int64, __int128 *))(*v11 + 136);
          WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v10);
          v14 = v12(v11, WindowForView, &v24);
          if ( v14 >= 0 )
          {
            if ( v19 )
            {
              if ( !(_BYTE)v24 )
                wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::operator=(&v22, this[22]);
            }
            else if ( (_BYTE)v24 && !BYTE4(v25) )
            {
              v20 = 0LL;
              v15 = this[12];
              v16 = *v15;
              v20 = 0LL;
              v17 = (*(__int64 (__fastcall **)(__int64 *, char *, __int64 *))(v16 + 88))(v15, (char *)&v24 + 4, &v20);
              if ( v17 >= 0 )
                wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::operator=(&v22, v20);
              else
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x4D3,
                  (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
                  (const char *)(unsigned int)v17);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x4C5,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v14);
          }
        }
        v8 = CVirtualDesktopManager::OnViewAddedInternal(
               (CVirtualDesktopManager *)this,
               (struct IApplicationView *)a2,
               v22);
        v5 = v8;
        if ( v8 >= 0 )
          goto LABEL_24;
        v9 = 1241LL;
      }
      else
      {
        v9 = 1217LL;
      }
    }
    else
    {
      v9 = 1215LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_24:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4BB,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)CurrentDesktopInternal);
LABEL_25:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
  return v5;
}

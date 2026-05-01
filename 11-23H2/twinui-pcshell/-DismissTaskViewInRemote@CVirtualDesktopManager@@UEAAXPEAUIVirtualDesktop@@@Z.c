/*
 * XREFs of ?DismissTaskViewInRemote@CVirtualDesktopManager@@UEAAXPEAUIVirtualDesktop@@@Z @ 0x1806011F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800A6C70 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentDesktop@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18016DE50 (-GetCurrentDesktop@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180177DC8 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??4?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop@@@Z @ 0x1801BB104 (--4-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDeskto.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18048D96C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     MakeMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e___ @ 0x1805FCFBC (MakeMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e___.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x180601C38 (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CVirtualDesktopManager::DismissTaskViewInRemote(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2)
{
  int v3; // eax
  wil::details *Event; // rdi
  const char *v5; // r9
  void (__fastcall ***v6)(_QWORD, GUID *, wil ***); // rcx
  void *v7; // rdx
  wil **v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v12; // [rsp+68h] [rbp+28h] BYREF
  struct IVirtualDesktop *v13; // [rsp+70h] [rbp+30h] BYREF
  wil *v14; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  if ( a2 )
  {
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::operator=((__int64 *)&v13, (__int64)a2);
  }
  else
  {
    v13 = 0LL;
    CVirtualDesktopManager::GetCurrentDesktop(this, &v13);
  }
  v10[0] = 0LL;
  v3 = (**(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v13)(
         v13,
         &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30,
         v10);
  if ( v3 >= 0 )
  {
    if ( !(*(unsigned int (__fastcall **)(__int64, int *))(*(_QWORD *)v10[0] + 56LL))(v10[0], &v12)
      && v12
      && (unsigned int)CVirtualDesktopManager::GetSwitcherType((char *)this - 8) == 1 )
    {
      v14 = 0LL;
      Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
      if ( !Event )
        wil::details::in1diag3::Throw_GetLastError(
          retaddr,
          (void *)0x1817,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
          v5);
      GetLastError();
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        &v14,
        Event);
      v8 = &v14;
      v9 = 0LL;
      MakeMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_(&v9, &v8);
      v6 = (void (__fastcall ***)(_QWORD, GUID *, wil ***))*((_QWORD *)this + 33);
      v8 = 0LL;
      (**v6)(v6, &GUID_b8445672_ee65_4e59_b5ef_fd73ca6b61e2, &v8);
      if ( v8 )
        (*((void (__fastcall **)(wil **, __int64, _QWORD))*v8 + 3))(v8, v9, 0LL);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v8);
      wil::handle_wait(v14, (void *)0xFFFFFFFFLL);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
      if ( v14 )
        wil::details::CloseHandle(v14, v7);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x17F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v3);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
}

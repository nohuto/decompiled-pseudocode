/*
 * XREFs of ?PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805472F0
 * Callers:
 *     ?SetViewCollectionInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1800FE400 (-SetViewCollectionInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationViewCollection@@@Z.c)
 * Callees:
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180029E8C (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x18009D1E4 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801895D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@V?$initializer_list@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@AEBV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x180544440 (--0-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$all_ea_180544440.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CVirtualDesktopManager::PlaceOrphanedViewsInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rbx
  int v6; // eax
  int updated; // edi
  __int64 v8; // rbx
  int v9; // eax
  __int64 **v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int v14; // [rsp+20h] [rbp-39h] BYREF
  __int64 v15; // [rsp+28h] [rbp-31h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-29h]
  __int64 v17; // [rsp+38h] [rbp-21h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-19h]
  unsigned int v19; // [rsp+48h] [rbp-11h] BYREF
  __int64 v20; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-1h]
  __int64 *v22[3]; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v23; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v25; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+7Fh] BYREF

  v25 = 0LL;
  v4 = *((_QWORD *)this + 12);
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  v6 = v5(v4, &v25);
  updated = v6;
  if ( v6 >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v17,
      v25);
    v14 = 0;
    v15 = 0LL;
    v16 = &v17;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v14);
    v19 = v18;
    v20 = 0LL;
    v21 = &v17;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v19);
    while ( 1 )
    {
      if ( v14 == v19 && v16 == v21 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
        updated = 0;
        goto LABEL_14;
      }
      v8 = v15;
      v27 = v15;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 13) + 72LL))(
             *((_QWORD *)this + 13),
             v8,
             *((_QWORD *)this + 11)) )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 13) + 40LL))(
               *((_QWORD *)this + 13),
               v8,
               a2);
        updated = v9;
        if ( v9 < 0 )
        {
          v11 = (unsigned int)v9;
          v12 = 1815LL;
          goto LABEL_13;
        }
      }
      wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
        &v26,
        (__int64)a2);
      v22[0] = &v26;
      v22[1] = &v27;
      v10 = std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
              &v23,
              v22);
      updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this - 8, v8, v10);
      `eh vector destructor iterator'(
        (char *)&v26,
        8LL,
        1LL,
        (void (*)(void *))wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>);
      if ( updated < 0 )
        break;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
      ++v14;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v14);
    }
    v11 = (unsigned int)updated;
    v12 = 1818LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v11);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x712,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v6);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  return (unsigned int)updated;
}

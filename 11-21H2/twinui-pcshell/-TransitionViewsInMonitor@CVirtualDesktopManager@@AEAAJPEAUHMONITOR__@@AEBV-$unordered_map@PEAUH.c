/*
 * XREFs of ?TransitionViewsInMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@AEBV?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@PEAUIVirtualDesktop@@22PEAPEAU5@@Z @ 0x18054BC7C
 * Callers:
 *     ?TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B414 (-TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@.c)
 *     ?TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B82C (-TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180029E8C (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180029F94 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x18009D1E4 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??4?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop@@@Z @ 0x1801736CC (--4-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIVirtualDesktop.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801895D0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find@PEAUHMONITOR__@@@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@PEAX@1@AEBQEAUHMONITOR__@@_K@Z @ 0x180543B88 (--$_Find@PEAUHMONITOR__@@@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$vector@V-$com_ptr_t@UIAppli.c)
 *     ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@V?$initializer_list@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@AEBV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x180544440 (--0-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$all_ea_180544440.c)
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180544F50 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::TransitionViewsInMonitor(
        __int64 a1,
        HMONITOR a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct IVirtualDesktop **a7)
{
  struct IVirtualDesktop **v10; // r12
  __int64 appended; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // eax
  int updated; // esi
  __int64 *v16; // r14
  __int64 *v17; // r13
  __int64 v18; // rcx
  char v19; // bl
  int DesktopInternal; // eax
  __int64 v21; // rax
  __int64 v22; // rsi
  int (__fastcall *v23)(__int64, GUID *, __int64 *); // r12
  __int64 v24; // rcx
  GUID v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 **v28; // rax
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  struct IVirtualDesktop *v31; // rdx
  _QWORD *CurrentDesktopCollection; // rax
  int v34; // [rsp+20h] [rbp-A1h] BYREF
  __int64 v35; // [rsp+28h] [rbp-99h] BYREF
  __int64 v36; // [rsp+30h] [rbp-91h] BYREF
  unsigned __int8 v37[8]; // [rsp+38h] [rbp-89h] BYREF
  struct IVirtualDesktop **v38; // [rsp+40h] [rbp-81h] BYREF
  __int64 v39; // [rsp+48h] [rbp-79h]
  __int64 v40; // [rsp+50h] [rbp-71h]
  __int64 v41; // [rsp+58h] [rbp-69h]
  HMONITOR v42; // [rsp+60h] [rbp-61h]
  __int64 *v43[2]; // [rsp+70h] [rbp-51h] BYREF
  __int64 *v44[3]; // [rsp+80h] [rbp-41h] BYREF
  GUID v45; // [rsp+98h] [rbp-29h] BYREF
  GUID v46; // [rsp+A8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+47h]

  v40 = a4;
  v42 = a2;
  *(_QWORD *)v37 = a2;
  v39 = a5;
  v41 = a6;
  v10 = a7;
  v38 = a7;
  *a7 = 0LL;
  appended = std::_Fnv1a_append_bytes(a1, v37, 8uLL);
  v12 = std::_Hash<std::_Umap_traits<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>>,0>>::_Find<HMONITOR__ *>(
          a3,
          v37,
          appended);
  if ( v12 == a3[1] )
    return 0LL;
  v13 = 0LL;
  v36 = 0LL;
  v46 = GUID_NULL;
  v14 = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)a4 + 32LL))(a4, &v46);
  updated = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x623,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_53;
  }
  v16 = *(__int64 **)(v12 + 24);
  v17 = *(__int64 **)(v12 + 32);
  while ( 1 )
  {
    if ( v16 == v17 )
    {
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v36);
      return 0LL;
    }
    v18 = *v16;
    if ( *v16 )
      break;
LABEL_41:
    ++v16;
  }
  v19 = 0;
  v35 = 0LL;
  v45 = GUID_NULL;
  DesktopInternal = (*(__int64 (__fastcall **)(__int64, GUID *))(*(_QWORD *)v18 + 200LL))(v18, &v45);
  updated = DesktopInternal;
  if ( DesktopInternal >= 0 )
  {
    v34 = 0;
    DesktopInternal = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)*v16 + 336LL))(*v16, &v34);
    updated = DesktopInternal;
    if ( DesktopInternal < 0 )
    {
      v30 = 1587LL;
      goto LABEL_51;
    }
    if ( v34 )
      goto LABEL_20;
    v21 = *(_QWORD *)&v45.Data1 - *(_QWORD *)&v46.Data1;
    if ( *(_QWORD *)&v45.Data1 == *(_QWORD *)&v46.Data1 )
      v21 = *(_QWORD *)v45.Data4 - *(_QWORD *)v46.Data4;
    if ( v21 )
    {
      v22 = *(_QWORD *)(a1 + 96);
      v23 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v22 + 96LL);
      v24 = v35;
      v35 = 0LL;
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      if ( v23(v22, &v45, &v35) >= 0 )
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 112) + 32LL))(
                *(_QWORD *)(a1 + 112),
                *v16,
                v35);
      v10 = v38;
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 112) + 32LL))(
              *(_QWORD *)(a1 + 112),
              *v16,
              v40);
    }
    if ( v34 )
    {
LABEL_20:
      v25 = v45;
      v26 = *(_QWORD *)&v45.Data1 - 0x4658059A45DB96FFLL;
      if ( *(_QWORD *)&v45.Data1 == 0x4658059A45DB96FFLL )
        v26 = *(_QWORD *)v45.Data4 - 0x1012647F7CCD4687LL;
      if ( v26 )
        goto LABEL_24;
    }
    else
    {
      v25 = v45;
    }
    if ( !v19 )
    {
LABEL_40:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v35);
      goto LABEL_41;
    }
LABEL_24:
    v27 = *(_QWORD *)&v25.Data1 - *(_QWORD *)&v46.Data1;
    if ( !v27 )
      v27 = *(_QWORD *)v25.Data4 - *(_QWORD *)v46.Data4;
    if ( v27 )
    {
      if ( !v13 )
      {
        if ( v41 )
        {
          v31 = (struct IVirtualDesktop *)v41;
        }
        else
        {
          DesktopInternal = CVirtualDesktopManager::CreateDesktopInternal((CVirtualDesktopManager *)(a1 + 8), v42, v10);
          updated = DesktopInternal;
          if ( DesktopInternal < 0 )
          {
            v30 = 1625LL;
            goto LABEL_51;
          }
          v31 = *v10;
        }
        wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>::operator=(&v36, (__int64)v31);
        v13 = v36;
      }
      if ( v19 )
      {
        DesktopInternal = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 112) + 40LL))(
                            *(_QWORD *)(a1 + 112),
                            *v16,
                            v13);
        updated = DesktopInternal;
        if ( DesktopInternal < 0 )
        {
          v30 = 1634LL;
          goto LABEL_51;
        }
      }
      CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection(a1, v44);
      DesktopInternal = CVirtualDesktopManager::UpdateViewVisibility(a1, *v16, CurrentDesktopCollection);
      updated = DesktopInternal;
      if ( DesktopInternal < 0 )
      {
        v30 = 1638LL;
        goto LABEL_51;
      }
    }
    else
    {
      if ( v19 )
      {
        DesktopInternal = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 112) + 40LL))(
                            *(_QWORD *)(a1 + 112),
                            *v16,
                            v39);
        updated = DesktopInternal;
        if ( DesktopInternal < 0 )
        {
          v30 = 1609LL;
          goto LABEL_51;
        }
      }
      wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
        v37,
        v39);
      v43[0] = (__int64 *)v37;
      v43[1] = (__int64 *)&v38;
      v28 = std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
              v44,
              v43);
      updated = CVirtualDesktopManager::UpdateViewVisibility(a1, *v16, v28);
      `eh vector destructor iterator'(
        (char *)v37,
        8LL,
        1LL,
        (void (*)(void *))wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>);
      if ( updated < 0 )
      {
        v29 = (unsigned int)updated;
        v30 = 1613LL;
        goto LABEL_52;
      }
    }
    goto LABEL_40;
  }
  v30 = 1584LL;
LABEL_51:
  v29 = (unsigned int)DesktopInternal;
LABEL_52:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v30,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v29);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v35);
LABEL_53:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v36);
  return (unsigned int)updated;
}

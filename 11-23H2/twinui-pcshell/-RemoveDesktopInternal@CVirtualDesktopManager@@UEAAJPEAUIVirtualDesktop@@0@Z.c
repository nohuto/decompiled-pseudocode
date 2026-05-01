/*
 * XREFs of ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180602EA0
 * Callers:
 *     ?RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180602D30 (-RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18003A918 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18003B554 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010A38C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8E9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     wil::details::ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___::_ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___ @ 0x1802152B4 (wil--details--ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___--_ScopeExitFn__lambda_51bb.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z @ 0x1802DF0B8 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIVirtualDesktop@@@Z.c)
 *     ??0?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@V?$initializer_list@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@AEBV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x1806000D4 (--0-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$all_ea_1806000D4.c)
 *     ??1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180600470 (--1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x180601C38 (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 *     ?StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180603C48 (-StartActivity@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x180604284 (-Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualD.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x18060755C (-_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVirtualDesktopManager::RemoveDesktopInternal(
        CVirtualDesktopManager *this,
        struct IUnknown *a2,
        struct IVirtualDesktop *a3)
{
  int v4; // eax
  int updated; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  bool v12; // r15
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // rax
  int v17; // eax
  __int64 **v18; // rax
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  _QWORD *CurrentDesktopCollection; // rax
  int v22; // eax
  unsigned int SwitcherType; // eax
  struct IUnknown *v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  struct IVirtualDesktop *v27; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  struct IVirtualDesktop **v32; // [rsp+70h] [rbp-90h]
  __int64 *v33[3]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-60h] BYREF
  struct IVirtualDesktop **v35; // [rsp+B0h] [rbp-50h]
  char v36; // [rsp+B8h] [rbp-48h]
  _QWORD v37[40]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v25 = a2;
  v27 = a3;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v37,
    (__int64)"VirtualDesktopDestroyedActivity");
  v37[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v37);
  v4 = CVirtualDesktopManager::_CheckDesktopRemovalPreconditions(
         (CVirtualDesktopManager *)((char *)this - 8),
         (struct IVirtualDesktop *)v25,
         v27);
  updated = v4;
  if ( v4 >= 0 )
  {
    v8 = (__int64 *)*((_QWORD *)this + 13);
    if ( !v8 )
    {
      updated = -2147417848;
      v6 = 2147549448LL;
      v7 = 985LL;
      goto LABEL_5;
    }
    v29 = 0LL;
    v9 = *v8;
    v29 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v9 + 24))(v8, &v29);
    updated = v10;
    if ( v10 < 0 )
    {
      v11 = 988LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_39:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v29);
      goto LABEL_40;
    }
    v12 = (unsigned int)SHIsSameObject(v25, *((struct IUnknown **)this + 23)) != 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 15)
                                                                                         + 32LL))(
            *((_QWORD *)this + 15),
            v25,
            v27);
    updated = v10;
    if ( v10 < 0 )
    {
      v11 = 992LL;
      goto LABEL_10;
    }
    *(_QWORD *)&v31 = (char *)this - 8;
    *((_QWORD *)&v31 + 1) = &v25;
    v32 = &v27;
    v34 = v31;
    v35 = &v27;
    v36 = 1;
    v13 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v29 + 24))(v29, &v28);
    updated = v13;
    if ( v13 >= 0 )
    {
      v15 = 0;
      if ( v28 )
      {
        while ( 1 )
        {
          v26 = 0LL;
          v16 = *v29;
          v26 = 0LL;
          v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v16 + 32))(
                  v29,
                  v15,
                  &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                  &v26);
          updated = v17;
          if ( v17 < 0 )
            break;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, struct IUnknown *))(**((_QWORD **)this + 14) + 32LL))(
                 *((_QWORD *)this + 14),
                 v26,
                 v25) )
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 14) + 40LL))(
                    *((_QWORD *)this + 14),
                    v26,
                    v27);
            updated = v17;
            if ( v17 < 0 )
            {
              v20 = 1007LL;
              goto LABEL_28;
            }
            if ( v12 )
            {
              wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
                &v30,
                (__int64)v27);
              *(_QWORD *)&v31 = &v30;
              *((_QWORD *)&v31 + 1) = &v31;
              v18 = std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(
                      v33,
                      (__int64 **)&v31);
              updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this - 8, v26, v18);
              `eh vector destructor iterator'(
                (char *)&v30,
                8LL,
                1LL,
                (void (*)(void *))wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>);
              if ( updated < 0 )
              {
                v19 = (unsigned int)updated;
                v20 = 1010LL;
                goto LABEL_29;
              }
            }
            else
            {
              CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this - 8, v33);
              v17 = CVirtualDesktopManager::UpdateViewVisibility((__int64)this - 8, v26, CurrentDesktopCollection);
              updated = v17;
              if ( v17 < 0 )
              {
                v20 = 1014LL;
                goto LABEL_28;
              }
            }
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
          if ( ++v15 >= v28 )
            goto LABEL_22;
        }
        v20 = 1004LL;
LABEL_28:
        v19 = (unsigned int)v17;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)v19);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
        goto LABEL_38;
      }
LABEL_22:
      if ( v12
        && (v13 = CVirtualDesktopManager::SwitchDesktopInternalPrivate((char *)this - 8, v27, 0LL),
            updated = v13,
            v13 < 0) )
      {
        v14 = 1021LL;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 12) + 64LL))(
                *((_QWORD *)this + 12),
                v25);
        updated = v13;
        if ( v13 >= 0 )
        {
          v22 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 17) + 56LL))(
                  *((_QWORD *)this + 17),
                  v25);
          if ( v22 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x404,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
              (const char *)(unsigned int)v22);
          v36 = 0;
          v13 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, struct IVirtualDesktop *))(**((_QWORD **)this + 15)
                                                                                               + 48LL))(
                  *((_QWORD *)this + 15),
                  v25,
                  v27);
          updated = v13;
          if ( v13 >= 0 )
          {
            SwitcherType = CVirtualDesktopManager::GetSwitcherType((__int64)this - 8);
            VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::Stop(v37, v25, v27, SwitcherType);
            updated = 0;
            goto LABEL_38;
          }
          v14 = 1031LL;
        }
        else
        {
          v14 = 1024LL;
        }
      }
    }
    else
    {
      v14 = 1000LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_38:
    wil::details::ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___::_ScopeExitFn__lambda_51bb635e1ede125b1e9590b7696bcce9___((__int64)&v34);
    goto LABEL_39;
  }
  v6 = (unsigned int)v4;
  v7 = 984LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)v6);
LABEL_40:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::~VirtualDesktopDestroyedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *)v37);
  return (unsigned int)updated;
}

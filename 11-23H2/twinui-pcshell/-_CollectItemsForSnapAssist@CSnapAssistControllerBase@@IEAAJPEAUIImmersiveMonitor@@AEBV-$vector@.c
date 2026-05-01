/*
 * XREFs of ?_CollectItemsForSnapAssist@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@PEAPEAUIObjectCollection@@@Z @ 0x18066D6A0
 * Callers:
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x18066E048 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@@Z @ 0x18066DF90 (-_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplic.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CSnapAssistControllerBase::_CollectItemsForSnapAssist(
        CSnapAssistControllerBase *this,
        void *a2,
        __int64 a3,
        __int64 a4,
        void **a5)
{
  void **v7; // rsi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, void ***); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  const struct _GUID *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-38h]
  unsigned int v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v22; // [rsp+50h] [rbp-20h]
  unsigned int v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h] BYREF
  __int64 *v25; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v27; // [rsp+A0h] [rbp+30h] BYREF
  void *v28; // [rsp+A8h] [rbp+38h] BYREF

  v28 = a2;
  v7 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v8 = *((_QWORD *)this + 9);
  v9 = *(__int64 (__fastcall **)(__int64, void ***))(*(_QWORD *)v8 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
  v10 = v9(v8, &a5);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
    v14 = CEnumerableObjectCollection::CreateInstance(v13, v12, &v28);
    v11 = v14;
    if ( v14 >= 0 )
    {
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
        (__int64)&v18,
        (__int64)a5);
      v20 = 0;
      v21 = 0LL;
      v22 = &v18;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v20);
      v23 = v19;
      v24 = 0LL;
      v25 = &v18;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v23);
      while ( 1 )
      {
        if ( v20 == v23 && v22 == v25 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
          *v7 = v28;
          v11 = 0;
          goto LABEL_13;
        }
        v15 = v21;
        v27 = v21;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
        if ( (unsigned __int8)CSnapAssistControllerBase::_ShouldShowViewInSnapAssist(this, a4) )
        {
          v16 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v28 + 40LL))(v28, v15);
          v11 = v16;
          if ( v16 < 0 )
            break;
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
        ++v20;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v20);
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x403,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3FD,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v14);
    }
LABEL_13:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FA,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
  return v11;
}

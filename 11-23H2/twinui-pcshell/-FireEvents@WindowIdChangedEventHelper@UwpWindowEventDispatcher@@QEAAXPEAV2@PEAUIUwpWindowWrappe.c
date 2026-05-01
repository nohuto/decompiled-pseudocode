/*
 * XREFs of ?FireEvents@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAV2@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1800A0F1C
 * Callers:
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18009AFE0 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x18009D834 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18016A870 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18009AF50 (-RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18009CC20 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0BC@$$CBG@Z @ 0x1800F5F24 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA-AV-$ComPtr@V.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ @ 0x180182978 (-InternalRelease@-$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0M@$$CBG@Z @ 0x1804B9A48 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@wil@@YA-AV-$ComPtr@VV.c)
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEBQEBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEBQEBG@Z @ 0x1804B9AD0 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEBQEBG@wil@@YA-AV-$ComPtr@VViewEv.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall UwpWindowEventDispatcher::WindowIdChangedEventHelper::FireEvents(
        UwpWindowEventDispatcher::WindowIdChangedEventHelper *this,
        struct UwpWindowEventDispatcher *a2,
        __int64 (__fastcall ***a3)(struct IUwpWindowWrapperInternal *, GUID *, __int64 *))
{
  __int64 (__fastcall **v5)(struct IUwpWindowWrapperInternal *, GUID *, __int64 *); // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  *(_BYTE *)this = 0;
  if ( *((_QWORD *)this + 1) )
  {
    v5 = *a3;
    v17 = 0LL;
    v6 = (*v5)((struct IUwpWindowWrapperInternal *)a3, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v17);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x143,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v14[0]);
    if ( *((_BYTE *)this + 28) )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
      v14[0] = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      UwpWindowEventDispatcher::RaiseViewEvent((__int64)a2, v17, 6u, v14);
      *((_BYTE *)this + 28) = 0;
    }
    v16 = 0LL;
    v8 = *((_QWORD *)this + 1);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
    v9 = AgileGitPtr::CopyLocal((AgileGitPtr *)(v8 + 24), &GUID_c1659867_0cf6_5f3b_99df_4f036280926c, &v16);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        v14[0]);
    if ( *((_BYTE *)this + 36) )
    {
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const (&)[12]>(v14);
      v10 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v17, v14[0]);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x151,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v10,
          v14[0]);
      *((_BYTE *)this + 36) = 0;
      Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease(v14);
    }
    if ( *((_BYTE *)this + 44) )
    {
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const (&)[18]>(v14);
      v11 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v17, v14[0]);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x158,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v11,
          v14[0]);
      *((_BYTE *)this + 44) = 0;
      Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease(v14);
    }
    if ( *((_BYTE *)this + 52) )
    {
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const * const &>(v14, off_1807F4720);
      v12 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v17, v14[0]);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x15F,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v12,
          v14[0]);
      *((_BYTE *)this + 52) = 0;
      Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease(v14);
    }
    if ( *((_BYTE *)this + 60) )
    {
      wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const * const &>(v14, &off_1807F4728);
      v13 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v17, v14[0]);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x166,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v13,
          v14[0]);
      *((_BYTE *)this + 60) = 0;
      Microsoft::WRL::ComPtr<ViewEventArgsForPropertyChanged>::InternalRelease(v14);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  }
}

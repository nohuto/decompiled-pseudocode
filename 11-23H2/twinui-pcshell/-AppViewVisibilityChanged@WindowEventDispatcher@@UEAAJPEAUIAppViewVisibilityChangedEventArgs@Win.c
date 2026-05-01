/*
 * XREFs of ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C1640
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1804C4488 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1804C6C88 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@W4HOSTED_APP_CHANGED@@@Z @ 0x1804CBC7C (-UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Int.c)
 *     ?attach@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWrapperInternal@@@Z @ 0x1804CD334 (-attach@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWr.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall WindowEventDispatcher::AppViewVisibilityChanged(RTL_SRWLOCK *this, __int64 (***a2)(void))
{
  unsigned int v4; // r14d
  __int64 (**v5)(void); // rax
  __int64 (*v6)(void); // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  RTL_SRWLOCK *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64, __int64 *); // rdi
  int v19; // eax
  const char *v20; // r9
  __int64 result; // rax
  int v22; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v25; // [rsp+40h] [rbp-48h] BYREF
  __int64 v26[8]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v28; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v30; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *a2;
  v25 = 0LL;
  v6 = *v5;
  try
  {
    v7 = v6();
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3BD,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v7,
        v22);
    v30 = 0LL;
    v8 = *v25;
    v30 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v8 + 48))(
           v25,
           &v30);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3C0,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        v22);
    v10 = ((__int64 (__fastcall *)(__int64 (***)(void), int *))(*a2)[6])(a2, &v28);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3C3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        v22);
    if ( IsComponentAppViewAndGetKindAndModel(v30, 0LL, 0LL) )
    {
      LOBYTE(v4) = v28 != 1;
      WindowEventDispatcher::UpdateAudioState(&this[-2], v30, v4 + 2);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v30 + 48LL))(
              v30,
              &v29);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3C8,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v11,
          v22);
      v24 = 0LL;
      v12 = this + 57;
      AcquireSRWLockShared(this + 57);
      v26[1] = (__int64)&this[57];
      WindowEventDispatcher::GetCachedView(&this[-2], &v23, v29);
      v13 = v23;
      v23 = 0LL;
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach(&v24, v13);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
      v14 = v24;
      if ( !v24 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3CE,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)0x80070490LL,
          v22);
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 256LL))(v24);
      if ( v15 && v28 == 1 )
      {
        v23 = 0LL;
        v16 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)this[37].Ptr + 48LL))(this[37].Ptr, v26);
        v17 = *(_QWORD *)v16;
        v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(**(_QWORD **)v16 + 136LL);
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v23);
        v19 = v18(v17, v15, 1LL, &v23);
        if ( v19 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3D5,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v19,
            v22);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v26);
        wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v23);
      }
      if ( v12 )
        ReleaseSRWLockShared(v12);
      LOBYTE(v4) = v28 == 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 320LL))(v14, 1LL, v4);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3E4,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v20);
  }
  return result;
}

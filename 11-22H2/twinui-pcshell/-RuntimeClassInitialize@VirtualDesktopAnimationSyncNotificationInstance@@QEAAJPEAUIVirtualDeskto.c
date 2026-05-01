/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDesktop@@0PEAUIObjectArray@@K@Z @ 0x180608C00
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@AEAPEAU3@PEAUIObjectArray@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@1$$QEAPEAUIObjectArray@@AEAK@Z @ 0x180608530 (--$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimation.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800A6DD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18013959C (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z @ 0x1805B88EC (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z.c)
 *     ??$QueueTask@AEAV_lambda_4888b64c5e64c473e9f2aad195409538_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@KAEAV_lambda_4888b64c5e64c473e9f2aad195409538_@@@Z @ 0x180608648 (--$QueueTask@AEAV_lambda_4888b64c5e64c473e9f2aad195409538_@@@ComTaskPool@Internal@Windows@@SAJW4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopAnimationSyncNotificationInstance::RuntimeClassInitialize(
        VirtualDesktopAnimationSyncNotificationInstance *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3,
        struct IObjectArray *a4,
        unsigned int a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v9 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v9;
  if ( v9 )
  {
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
    v9[5] = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
    *((_BYTE *)v9 + 40) = 0;
    *v9 = &CRefCountedObject<VirtualDesktopAnimationSyncNotificationInstance::MarshalledData>::`vftable';
    *((_DWORD *)v9 + 12) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  v19 = v10;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  v11 = *((_QWORD *)this + 2);
  if ( v11 != v10 )
  {
    v19 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
    v12 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v10;
    v11 = v10;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v11 = *((_QWORD *)this + 2);
    }
  }
  if ( v11 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v10 + 32));
    if ( (__int64 *)((char *)this + 24) == &v19 )
    {
      if ( v10 != -32 )
        ReleaseSRWLockExclusive((PSRWLOCK)(v10 + 32));
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        (RTL_SRWLOCK **)this + 3,
        (RTL_SRWLOCK *)(v10 + 32));
    }
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=((__int64 *)(v10 + 8), (__int64)a2);
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=((__int64 *)(v10 + 16), (__int64)a3);
    Microsoft::WRL::ComPtr<IObjectArray>::operator=((__int64 *)(v10 + 24), (__int64)a4);
    v19 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
    v16 = Windows::Internal::ComTaskPool::QueueTask<_lambda_4888b64c5e64c473e9f2aad195409538_ &>(v15, v14, a5, &v19);
    v13 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
        (const char *)(unsigned int)v16);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  else
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v13;
}

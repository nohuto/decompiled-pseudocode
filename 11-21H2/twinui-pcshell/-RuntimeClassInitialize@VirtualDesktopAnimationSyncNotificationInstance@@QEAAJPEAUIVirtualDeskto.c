/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDesktop@@0PEAUIObjectArray@@K@Z @ 0x18054D708
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@AEAPEAU3@PEAUIObjectArray@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@1$$QEAPEAUIObjectArray@@AEAK@Z @ 0x18054D364 (--$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimation.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18010EE24 (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$QueueTask@AEAV_lambda_4888b64c5e64c473e9f2aad195409538_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@KAEAV_lambda_4888b64c5e64c473e9f2aad195409538_@@@Z @ 0x1801B5DC4 (--$QueueTask@AEAV_lambda_4888b64c5e64c473e9f2aad195409538_@@@ComTaskPool@Internal@Windows@@SAJW4.c)
 *     ??0_lambda_4888b64c5e64c473e9f2aad195409538_@@QEAA@AEBV?$ComPtr@V?$CRefCountedObject@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@@WRL@Microsoft@@@Z @ 0x1801B5E54 (--0_lambda_4888b64c5e64c473e9f2aad195409538_@@QEAA@AEBV-$ComPtr@V-$CRefCountedObject@UMarshalled.c)
 *     ??1_lambda_4888b64c5e64c473e9f2aad195409538_@@QEAA@XZ @ 0x1801B5E78 (--1_lambda_4888b64c5e64c473e9f2aad195409538_@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x18022A2AC (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18022A3F4 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z @ 0x180500128 (--4-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObjectArray@@@Z.c)
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
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  RTL_SRWLOCK *v20; // [rsp+50h] [rbp+20h] BYREF

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
  v18[0] = v10;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v18);
  v11 = *((_QWORD *)this + 2);
  if ( v11 != v10 )
  {
    v20 = (RTL_SRWLOCK *)v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
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
    wil::AcquireSRWLockExclusive(&v20, (RTL_SRWLOCK *)(v10 + 32));
    if ( (RTL_SRWLOCK **)((char *)this + 24) != &v20 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        (RTL_SRWLOCK **)this + 3,
        v20);
      v20 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v20);
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=((__int64 *)(v10 + 8), (__int64)a2);
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=((__int64 *)(v10 + 16), (__int64)a3);
    Microsoft::WRL::ComPtr<IObjectArray>::operator=((__int64 *)(v10 + 24), (__int64)a4);
    _lambda_4888b64c5e64c473e9f2aad195409538_::_lambda_4888b64c5e64c473e9f2aad195409538_((__int64 *)&v20, v18);
    v16 = Windows::Internal::ComTaskPool::QueueTask<_lambda_4888b64c5e64c473e9f2aad195409538_ &>(v15, v14, a5, &v20);
    v13 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
        (const char *)(unsigned int)v16);
    _lambda_4888b64c5e64c473e9f2aad195409538_::~_lambda_4888b64c5e64c473e9f2aad195409538_((_lambda_4888b64c5e64c473e9f2aad195409538_ *)&v20);
  }
  else
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(v18);
  return v13;
}

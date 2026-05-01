/*
 * XREFs of ?v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180040A30
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180040B2C (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LockScreenDirectorServiceProviderImpl::v_QueryService(
        LockScreenDirectorServiceProviderImpl *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  LockScreenDirectorServiceProviderImpl *v8; // rbx
  int v9; // eax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ILockScreenDirector *v14; // [rsp+48h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_ILockScreenDirector.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_ILockScreenDirector.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_ILockScreenDirector.Data4;
  if ( !v6 )
  {
    v14 = 0LL;
    v8 = (LockScreenDirectorServiceProviderImpl *)((char *)this - 48);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
    v9 = LockScreenDirectorServiceProviderImpl::EnsureChildServices(v8, &v14);
    v7 = v9;
    if ( v9 < 0 )
    {
      v11 = 92LL;
    }
    else
    {
      v9 = (**(__int64 (__fastcall ***)(struct ILockScreenDirector *, const struct _GUID *, void **))v14)(v14, a3, a4);
      v7 = v9;
      if ( v9 >= 0 )
      {
        v7 = 0;
LABEL_8:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
        return v7;
      }
      v11 = 93LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v9,
      v12);
    goto LABEL_8;
  }
  v7 = -2147467263;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x58,
    (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
    (const char *)0x80004001LL,
    v12);
  return v7;
}

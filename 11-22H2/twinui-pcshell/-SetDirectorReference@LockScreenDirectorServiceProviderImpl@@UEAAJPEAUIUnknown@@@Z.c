/*
 * XREFs of ?SetDirectorReference@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIUnknown@@@Z @ 0x1800408F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LockScreenDirectorServiceProviderImpl::SetDirectorReference(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v5; // eax
  int AgileReference; // ebx
  __int64 v7; // rbp
  void *v8; // rax
  PVOID Ptr; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb,
         &v15);
  AgileReference = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v5,
      v12);
    goto LABEL_11;
  }
  AcquireSRWLockExclusive(this + 18);
  v7 = v15;
  v8 = 0LL;
  v14 = 0LL;
  AgileReference = 0;
  if ( v15 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
    AgileReference = RoGetAgileReference(0LL, &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb, v7, &v14);
    v8 = v14;
  }
  v14 = 0LL;
  Ptr = this[19].Ptr;
  this[19].Ptr = v8;
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  if ( AgileReference < 0 )
  {
    v11 = 72LL;
  }
  else
  {
    if ( this[19].Ptr )
    {
      if ( this != (RTL_SRWLOCK *)-144LL )
        ReleaseSRWLockExclusive(this + 18);
      SetEvent(this[17].Ptr);
      AgileReference = 0;
      goto LABEL_11;
    }
    AgileReference = -2147418113;
    v11 = 73LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
    (const char *)(unsigned int)AgileReference,
    v12);
  if ( this != (RTL_SRWLOCK *)-144LL )
    ReleaseSRWLockExclusive(this + 18);
LABEL_11:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  return (unsigned int)AgileReference;
}

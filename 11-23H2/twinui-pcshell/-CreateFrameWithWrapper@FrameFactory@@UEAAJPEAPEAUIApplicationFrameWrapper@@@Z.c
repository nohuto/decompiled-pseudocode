/*
 * XREFs of ?CreateFrameWithWrapper@FrameFactory@@UEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1803C6870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VFrameWrapper@@UIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameWrapper@@$$QEAPEAUIApplicationFrame@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x1803C661C (--$MakeAndInitialize@VFrameWrapper@@UIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEAUIPrivi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FrameFactory::CreateFrameWithWrapper(FrameFactory *this, struct IApplicationFrameWrapper **a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, struct IApplicationFrame **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  char v8; // di
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IApplicationFrame *v12; // [rsp+70h] [rbp+30h] BYREF
  struct IPrivilegedPresentationOperations *v13; // [rsp+80h] [rbp+40h] BYREF
  struct IApplicationFrame *v14; // [rsp+88h] [rbp+48h] BYREF

  v12 = 0LL;
  v4 = *((_QWORD *)this + 3);
  v5 = *(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  v6 = v5(v4, &v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = 1;
    v13 = (struct IPrivilegedPresentationOperations *)*((_QWORD *)this + 2);
    v14 = v12;
    v9 = Microsoft::WRL::Details::MakeAndInitialize<FrameWrapper,IApplicationFrameWrapper,IApplicationFrame *,IPrivilegedPresentationOperations *>(
           a2,
           &v14,
           &v13);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v7 = 0;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
        (const char *)(unsigned int)v9);
    }
    if ( v8 )
      (*(void (__fastcall **)(_QWORD, struct IApplicationFrame *))(**((_QWORD **)this + 3) + 32LL))(
        *((_QWORD *)this + 3),
        v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15B,
      (int)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  return v7;
}

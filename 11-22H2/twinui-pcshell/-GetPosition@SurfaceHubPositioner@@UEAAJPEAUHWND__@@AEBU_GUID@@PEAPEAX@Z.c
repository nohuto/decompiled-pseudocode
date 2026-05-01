/*
 * XREFs of ?GetPosition@SurfaceHubPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1805A5500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x180125A98 (--$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePos.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::GetPosition(
        SurfaceHubPositioner *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, const struct _GUID *, void **); // [rsp+30h] [rbp+8h] BYREF
  HWND v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  if ( *((_BYTE *)this + 472) )
  {
    *a4 = 0LL;
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
           (void **)&v11,
           &v12);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v7 = (**v11)(v11, a3, a4);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v8 = 180LL;
    }
    else
    {
      v8 = 179LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v7);
LABEL_9:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
    return v6;
  }
  v6 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAF,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)0x8000FFFFLL);
  return v6;
}

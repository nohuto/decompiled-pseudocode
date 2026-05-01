/*
 * XREFs of ?Compare@VirtualDesktopGuidFinder@@QEBAHV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z @ 0x180541248
 * Callers:
 *     ?FindDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x180541470 (-FindDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGuidFinder::Compare(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*a2 + 32LL))(*a2, v10);
  v7 = 0;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v6);
LABEL_6:
    v7 = -1;
    goto LABEL_7;
  }
  v8 = v10[0] - *a1;
  if ( v10[0] == *a1 )
    v8 = v10[1] - a1[1];
  if ( v8 )
    goto LABEL_6;
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a3);
  return v7;
}

/*
 * XREFs of ?Compare@VirtualDesktopGuidFinder@@QEBAHV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z @ 0x180068EA0
 * Callers:
 *     ??$FindEx@UVirtualDesktopGuidFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBUVirtualDesktopGuidFinder@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180068E10 (--$FindEx@UVirtualDesktopGuidFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UIVirtualDesktop@@@WRL@Micr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGuidFinder::Compare(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-48h]
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10 = (int)a2;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*a2 + 32LL))(*a2, v11);
  v7 = 0;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v6,
      v10);
LABEL_5:
    v7 = -1;
    goto LABEL_6;
  }
  v8 = v11[0] - *a1;
  if ( v11[0] == *a1 )
    v8 = v11[1] - a1[1];
  if ( v8 )
    goto LABEL_5;
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a3);
  return v7;
}

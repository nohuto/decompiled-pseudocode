/*
 * XREFs of ?_GetViewThreadId@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEAK@Z @ 0x1805CEF34
 * Callers:
 *     ?_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z @ 0x1805CF0D0 (-_IsViewMeetingWindow@PPIWin32VtcLayoutOperation@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::_GetViewThreadId(
        PPIWin32VtcLayoutOperation *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        unsigned int *a3)
{
  __int64 (__fastcall *v5)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  HWND hWnd; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0;
  v11 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  v6 = v5((struct IApplicationView *)a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    hWnd = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 24LL))(v11, &hWnd);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a3 = GetWindowThreadProcessId(hWnd, 0LL);
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 860LL;
  }
  else
  {
    v8 = 857LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  return v7;
}

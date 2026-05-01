/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf___ @ 0x18049479C
 * Callers:
 *     ?ShowVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJPEAUHMONITOR__@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x180494B90 (-ShowVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJPEAUHMONITOR__@@W4VIRTUAL_DESKT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_____lambda_e68365d89e6ffd9292af92cce9779ecf__const_&_ @ 0x180494644 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce977.c)
 */

__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_(__int64 *a1, __int64 a2)
{
  unsigned int v3; // ebx
  _QWORD *CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_____lambda_e68365d89e6ffd9292af92cce9779ecf__const; // r8
  __int64 v5; // rdi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_____lambda_e68365d89e6ffd9292af92cce9779ecf__const = Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_____lambda_e68365d89e6ffd9292af92cce9779ecf__const___(&v9, a2);
  v5 = (*CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_____lambda_e68365d89e6ffd9292af92cce9779ecf__const
      + 32LL) & -(__int64)(*CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_____lambda_e68365d89e6ffd9292af92cce9779ecf__const != 0LL);
  v10 = v5;
  *CMultitaskingViewTaskCallback__lambda_e68365d89e6ffd9292af92cce9779ecf_____lambda_e68365d89e6ffd9292af92cce9779ecf__const = 0LL;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 )
  {
    v10 = 0LL;
    *a1 = v5;
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"internal\\shell\\private\\inc\\MultitaskingViewTask.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  return v3;
}

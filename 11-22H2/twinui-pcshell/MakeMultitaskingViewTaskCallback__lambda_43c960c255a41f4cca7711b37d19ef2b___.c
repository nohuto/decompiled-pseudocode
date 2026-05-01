/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b___ @ 0x18054A200
 * Callers:
 *     ?ShowVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJPEAUHMONITOR__@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x18054A6D0 (-ShowVirtualDesktopSwitcher@CVirtualDesktopSwitcherService@@UEAAJPEAUHMONITOR__@@W4VIRTUAL_DESKT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_____lambda_43c960c255a41f4cca7711b37d19ef2b__const_&_ @ 0x18054A154 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_(__int64 *a1, __int64 a2)
{
  unsigned int v3; // ebx
  _QWORD *CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_____lambda_43c960c255a41f4cca7711b37d19ef2b__const; // r8
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_____lambda_43c960c255a41f4cca7711b37d19ef2b__const = Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_____lambda_43c960c255a41f4cca7711b37d19ef2b__const___(&v10, a2);
  v5 = -*CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_____lambda_43c960c255a41f4cca7711b37d19ef2b__const;
  v6 = (*CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_____lambda_43c960c255a41f4cca7711b37d19ef2b__const
      + 32LL) & -(__int64)(*CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_____lambda_43c960c255a41f4cca7711b37d19ef2b__const != 0LL);
  v11 = v6;
  *CMultitaskingViewTaskCallback__lambda_43c960c255a41f4cca7711b37d19ef2b_____lambda_43c960c255a41f4cca7711b37d19ef2b__const = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v5);
  }
  if ( v6 )
  {
    v11 = 0LL;
    *a1 = v6;
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (int)"desktop\\internal\\shell\\inc\\private\\MultitaskingViewTask.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return v3;
}

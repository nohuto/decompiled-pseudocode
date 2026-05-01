/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1___ @ 0x1804954F4
 * Callers:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x180230760 (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1_____lambda_75bac987ac5f971a4d8840925317feb1__const_&_ @ 0x18049545C (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317.c)
 */

__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1_(__int64 *a1, __int64 a2)
{
  unsigned int v3; // ebx
  _QWORD *CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1_____lambda_75bac987ac5f971a4d8840925317feb1__const; // r8
  __int64 v5; // rdi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1_____lambda_75bac987ac5f971a4d8840925317feb1__const = Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1_____lambda_75bac987ac5f971a4d8840925317feb1__const___(&v9, a2);
  v5 = (*CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1_____lambda_75bac987ac5f971a4d8840925317feb1__const
      + 32LL) & -(__int64)(*CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1_____lambda_75bac987ac5f971a4d8840925317feb1__const != 0LL);
  v10 = v5;
  *CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1_____lambda_75bac987ac5f971a4d8840925317feb1__const = 0LL;
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

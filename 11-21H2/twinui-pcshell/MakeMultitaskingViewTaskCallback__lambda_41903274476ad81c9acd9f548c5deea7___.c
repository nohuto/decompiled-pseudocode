/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7___ @ 0x1801BE544
 * Callers:
 *     ?QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ @ 0x18059CA9C (-QueueSnapAssistDismissal@CSnapAssistControllerBase@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7_____lambda_41903274476ad81c9acd9f548c5deea7__const_&_ @ 0x1801BE3F0 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7_(__int64 *a1, void *a2)
{
  unsigned int v3; // ebx
  _QWORD *CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7_____lambda_41903274476ad81c9acd9f548c5deea7__const; // r8
  __int64 v5; // rdi
  void *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = 0;
  *a1 = 0LL;
  CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7_____lambda_41903274476ad81c9acd9f548c5deea7__const = Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7_____lambda_41903274476ad81c9acd9f548c5deea7__const___(&v10, a2);
  v5 = (*CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7_____lambda_41903274476ad81c9acd9f548c5deea7__const
      + 32LL) & -(__int64)(*CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7_____lambda_41903274476ad81c9acd9f548c5deea7__const != 0LL);
  v9 = v5;
  *CMultitaskingViewTaskCallback__lambda_41903274476ad81c9acd9f548c5deea7_____lambda_41903274476ad81c9acd9f548c5deea7__const = 0LL;
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 )
  {
    v9 = 0LL;
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
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  return v3;
}

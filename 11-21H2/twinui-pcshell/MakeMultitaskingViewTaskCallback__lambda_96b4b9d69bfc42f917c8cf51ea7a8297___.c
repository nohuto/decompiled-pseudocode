/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___ @ 0x18049968C
 * Callers:
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180499AE0 (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___::CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___ @ 0x18049972C (CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___--CMultitaskingViewTask.c)
 */

__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297_(__int64 *a1, __int64 a2)
{
  unsigned int v4; // ebx
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v6 = CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___::CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___(
           v5,
           a2);
  else
    v6 = 0LL;
  v7 = v6 + 32;
  v8 = -v6;
  v11 = v7 & -(__int64)(v8 != 0);
  if ( v11 )
  {
    v11 = 0LL;
    *a1 = v7 & -(__int64)(v8 != 0);
  }
  else
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"internal\\shell\\private\\inc\\MultitaskingViewTask.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return v4;
}

/*
 * XREFs of winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___ @ 0x180284108
 * Callers:
 *     ?Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180734C60 (-Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScre.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x20uLL);
  v6[1] = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v6[2] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 6) = 1;
  *v6 = off_1807CBD00;
  *a1 = v6;
  winrt::hstring::~hstring((void **)(a2 + 8));
  return a1;
}

/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_f11de0bc23a1be581f21c48152b34889___ @ 0x18028CDC4
 * Callers:
 *     ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1800795A8 (-CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@Composable.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _lambda_f11de0bc23a1be581f21c48152b34889_::__lambda_f11de0bc23a1be581f21c48152b34889_ @ 0x18028D0C8 (_lambda_f11de0bc23a1be581f21c48152b34889_--__lambda_f11de0bc23a1be581f21c48152b34889_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_f11de0bc23a1be581f21c48152b34889___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v9; // [rsp+30h] [rbp+8h]

  v9 = operator new(0x30uLL);
  v4 = *a2;
  *a2 = 0LL;
  v9[1] = v4;
  v5 = a2[1];
  a2[1] = 0LL;
  v9[2] = v5;
  v6 = a2[2];
  a2[2] = 0LL;
  v9[3] = v6;
  v7 = a2[3];
  a2[3] = 0LL;
  v9[4] = v7;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v9 + 10) = 1;
  *v9 = off_180986650;
  *a1 = v9;
  lambda_f11de0bc23a1be581f21c48152b34889_::__lambda_f11de0bc23a1be581f21c48152b34889_(a2);
  return a1;
}

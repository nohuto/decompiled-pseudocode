/*
 * XREFs of ??$await_transform@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@QEAA?A_P$$QEAV?$duration@_JU?$ratio@$00$00@std@@@chrono@3@@Z @ 0x1806359C4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$1 @ 0x18021A120 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_18021A120.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::WindowTabHost *,unsigned __int64>::promise_type::await_transform<std::chrono::duration<__int64,std::ratio<1,1>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = 10000000LL * *a3;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = v3;
  result = a2;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = 0;
  return result;
}

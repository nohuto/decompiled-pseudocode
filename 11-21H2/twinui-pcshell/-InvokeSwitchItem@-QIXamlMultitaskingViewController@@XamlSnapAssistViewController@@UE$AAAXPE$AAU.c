/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180611820
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180211D40 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@WBA@E$AAAXPE$.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___ @ 0x1801EA178 (CreationThreadDispatcher--RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___.c)
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::_lambda_b057d2eecf04af11f3f014dd266c7d19__0 @ 0x1801EA42C (_lambda_b057d2eecf04af11f3f014dd266c7d19_--_lambda_b057d2eecf04af11f3f014dd266c7d19__0.c)
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::__lambda_b057d2eecf04af11f3f014dd266c7d19_ @ 0x1801EA540 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--__lambda_b057d2eecf04af11f3f014dd266c7d19_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlSnapAssistViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 *v7; // rax
  int v8; // eax
  int v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int64 v12[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  result = __abi_winrt_ptr_ctor(a2);
  v4 = result;
  if ( !*(_BYTE *)(a1 + 392) )
  {
    *(_BYTE *)(a1 + 392) = 1;
    v5 = __abi_winrt_ptr_ctor(a1);
    *(_QWORD *)v9 = __abi_winrt_ptr_ctor(v5);
    v10 = __abi_winrt_ptr_ctor(v4);
    v11 = __abi_winrt_ptr_ctor(a1);
    v6 = *(_QWORD *)(a1 + 88);
    v7 = lambda_b057d2eecf04af11f3f014dd266c7d19_::_lambda_b057d2eecf04af11f3f014dd266c7d19__0(v12, (__int64 *)v9);
    v8 = CreationThreadDispatcher::RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___(v6, (volatile int *)v7);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x77,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
        (const char *)(unsigned int)v8,
        v9[0]);
    result = lambda_b057d2eecf04af11f3f014dd266c7d19_::__lambda_b057d2eecf04af11f3f014dd266c7d19_((__int64 *)v9);
    if ( v5 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}

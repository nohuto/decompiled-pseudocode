/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@GuidedSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180789C20
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@GuidedSnapAssistViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802B2360 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@GuidedSnapAssistViewController@@WBA@E$AAAXP.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1807882A8 (CreationThreadDispatcher--RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x180788C34 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--__lambda_6bd17a0f38fc15379b652e4a7dca1691_.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__GuidedSnapAssistViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rdi
  int v7; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  result = __abi_winrt_ptr_ctor(a2);
  v4 = result;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 384) + 152LL) )
  {
    *(_BYTE *)(a1 + 368) = 1;
    v5 = __abi_winrt_ptr_ctor(a1);
    v9 = __abi_winrt_ptr_ctor(v5);
    v10 = __abi_winrt_ptr_ctor(v4);
    v11 = __abi_winrt_ptr_ctor(a1);
    v6 = *(_QWORD *)(a1 + 88);
    v8[0] = __abi_winrt_ptr_ctor(v9);
    v8[1] = __abi_winrt_ptr_ctor(v10);
    v8[2] = __abi_winrt_ptr_ctor(v11);
    v7 = CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___(v6, (volatile int *)v8);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x72,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\guidedsnapassistviewcontroller.cpp",
        (const char *)(unsigned int)v7,
        v8[0]);
    result = lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_(&v9);
    if ( v5 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return result;
}

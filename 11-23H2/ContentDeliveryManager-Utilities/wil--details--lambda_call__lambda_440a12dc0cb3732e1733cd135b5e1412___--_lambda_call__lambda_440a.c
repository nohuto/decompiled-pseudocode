/*
 * XREFs of wil::details::lambda_call__lambda_440a12dc0cb3732e1733cd135b5e1412___::_lambda_call__lambda_440a12dc0cb3732e1733cd135b5e1412___ @ 0x18008FDAC
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal_::_1_::dtor$6 @ 0x1800D8E93 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800D8E93.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5d510b4d7a865d4a4e9fb2fe8b809fc5___ @ 0x18008D7A0 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5d510b4d7a865d4a4e9.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_440a12dc0cb3732e1733cd135b5e1412___::_lambda_call__lambda_440a12dc0cb3732e1733cd135b5e1412___(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  int v5[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    v2 = *(_QWORD *)(a1 + 16);
    v3 = **(_QWORD **)a1;
    *(_QWORD *)v5 = *(_QWORD *)(a1 + 8);
    v6 = v2;
    v4 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5d510b4d7a865d4a4e9fb2fe8b809fc5___(
           v3,
           (__int64)v5);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v4,
        v5[0]);
  }
}

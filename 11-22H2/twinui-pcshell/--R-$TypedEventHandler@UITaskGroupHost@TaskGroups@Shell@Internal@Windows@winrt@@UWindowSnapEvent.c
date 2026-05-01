/*
 * XREFs of ??R?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@QEBA@AEBUITaskGroupHost@TaskGroups@Shell@Internal@23@AEBUWindowSnapEventArgs@56723@@Z @ 0x1802E8C28
 * Callers:
 *     ??$invoke@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@34@UWindowSnapEventArgs@78934@@impl@winrt@@YA_NAEBU?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@1@AEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@41@AEBUWindowSnapEventArgs@78941@@Z @ 0x1802E8B76 (--$invoke@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@wi_ea_1802E8B76.c)
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowSnapEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_1c999fd274f28c3cc30ec1be55abdd26_@@@impl@winrt@@UEAAHPEAXUstruct_Windows_Internal_Shell_TaskGroups_WindowSnapEventArgs@23@@Z @ 0x180648640 (-Invoke@-$delegate@U-$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@W_ea_180648640.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowSnapEventArgs>::operator()(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // xmm0_8
  __int64 v4; // rcx
  int v5; // r8d
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v3 = *a3;
  v4 = *a1;
  v5 = *((_DWORD *)a3 + 2);
  v7 = v3;
  v8 = v5;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, *a2, &v7);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}

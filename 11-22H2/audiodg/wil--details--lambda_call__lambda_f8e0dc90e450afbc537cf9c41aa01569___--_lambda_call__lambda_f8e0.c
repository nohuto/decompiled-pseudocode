/*
 * XREFs of wil::details::lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___::_lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___ @ 0x140067194
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140007820 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___::_lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 152LL))(*a1, *(_QWORD *)a1[1]);
  }
  return result;
}

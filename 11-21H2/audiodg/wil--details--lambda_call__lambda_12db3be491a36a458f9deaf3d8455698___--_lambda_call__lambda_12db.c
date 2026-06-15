/*
 * XREFs of wil::details::lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___::_lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___ @ 0x14004CCEC
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14001D720 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___::_lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)**a1 + 88LL))(**a1, a1[1]);
  }
  return result;
}

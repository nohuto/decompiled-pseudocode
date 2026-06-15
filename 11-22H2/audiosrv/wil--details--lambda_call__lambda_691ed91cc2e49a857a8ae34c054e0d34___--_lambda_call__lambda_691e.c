/*
 * XREFs of wil::details::lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___::_lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___ @ 0x1800DEADC
 * Callers:
 *     _CAudioSession::RegisterOwnerProcess_::_1_::dtor$1 @ 0x18007DD01 (_CAudioSession--RegisterOwnerProcess_--_1_--dtor$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___::_lambda_call__lambda_691ed91cc2e49a857a8ae34c054e0d34___(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)**a1 + 32LL))(
             **a1,
             (unsigned __int64)(a1[1] + 1) & -(__int64)(a1[1] != 0LL));
  }
  return result;
}

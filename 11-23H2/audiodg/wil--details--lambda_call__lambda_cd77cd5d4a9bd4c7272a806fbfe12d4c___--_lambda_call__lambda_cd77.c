/*
 * XREFs of wil::details::lambda_call__lambda_cd77cd5d4a9bd4c7272a806fbfe12d4c___::_lambda_call__lambda_cd77cd5d4a9bd4c7272a806fbfe12d4c___ @ 0x1400634EC
 * Callers:
 *     _CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::dtor$6 @ 0x140063BA9 (_CStreamGroup--CreateBridgeStreamToTargetStreamGroup_--_1_--dtor$6.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$7 @ 0x140067D81 (_CSubmixImpl--CreateStream_--_1_--dtor$7.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::lambda_call__lambda_cd77cd5d4a9bd4c7272a806fbfe12d4c___::_lambda_call__lambda_cd77cd5d4a9bd4c7272a806fbfe12d4c___(
        __int64 a1)
{
  _QWORD *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_QWORD **)a1;
    if ( **(_QWORD **)a1 )
      return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 8) + 64LL))(**(_QWORD **)(a1 + 8));
  }
  return result;
}

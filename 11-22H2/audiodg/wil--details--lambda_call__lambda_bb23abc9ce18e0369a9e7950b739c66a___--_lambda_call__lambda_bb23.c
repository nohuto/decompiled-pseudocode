/*
 * XREFs of wil::details::lambda_call__lambda_bb23abc9ce18e0369a9e7950b739c66a___::_lambda_call__lambda_bb23abc9ce18e0369a9e7950b739c66a___ @ 0x1400773B8
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x14001E5F0 (-ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::details::lambda_call__lambda_bb23abc9ce18e0369a9e7950b739c66a___::_lambda_call__lambda_bb23abc9ce18e0369a9e7950b739c66a___(
        __int64 a1)
{
  _QWORD *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_QWORD **)a1;
    if ( **(_QWORD **)a1 )
      return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 104LL))(*(_QWORD *)(a1 + 8));
  }
  return result;
}

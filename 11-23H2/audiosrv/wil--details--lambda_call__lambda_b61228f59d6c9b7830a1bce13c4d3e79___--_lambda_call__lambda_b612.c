/*
 * XREFs of wil::details::lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___::_lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___ @ 0x1801047F4
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@@Z @ 0x1800438F0 (-ConnectToRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUISubmixProxy@@@Z.c)
 *     ?ConnectToRightSubmix@CBridgeStreamInstanceProxy@@UEAAJPEAUISubmixProxy@@@Z @ 0x180105E10 (-ConnectToRightSubmix@CBridgeStreamInstanceProxy@@UEAAJPEAUISubmixProxy@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___::_lambda_call__lambda_b61228f59d6c9b7830a1bce13c4d3e79___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 16LL) + 80LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 16LL),
             **((_QWORD **)a1 + 1));
  }
  return result;
}

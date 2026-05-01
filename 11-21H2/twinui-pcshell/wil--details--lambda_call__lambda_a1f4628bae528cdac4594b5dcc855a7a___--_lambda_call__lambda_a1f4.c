/*
 * XREFs of wil::details::lambda_call__lambda_a1f4628bae528cdac4594b5dcc855a7a___::_lambda_call__lambda_a1f4628bae528cdac4594b5dcc855a7a___ @ 0x180410DE0
 * Callers:
 *     _UwpWindowWrapperBase::FlushStashedWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x1804149D8 (_UwpWindowWrapperBase--FlushStashedWindowingEnvironmentSettings_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_a1f4628bae528cdac4594b5dcc855a7a___::_lambda_call__lambda_a1f4628bae528cdac4594b5dcc855a7a___(
        _BYTE *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
    *(_QWORD *)(result + 136) = 0LL;
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}

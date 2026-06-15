/*
 * XREFs of wil::details::lambda_call__lambda_7347583372e92e8d0f625d09ac8b025c___::_lambda_call__lambda_7347583372e92e8d0f625d09ac8b025c___ @ 0x14005EAFC
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14001E010 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_7347583372e92e8d0f625d09ac8b025c___::_lambda_call__lambda_7347583372e92e8d0f625d09ac8b025c___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 112LL))(*(_QWORD *)a1);
  }
  return result;
}

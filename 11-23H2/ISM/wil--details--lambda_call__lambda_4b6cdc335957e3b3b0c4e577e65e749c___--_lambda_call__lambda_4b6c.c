/*
 * XREFs of wil::details::lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___::_lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___ @ 0x1800E13CC
 * Callers:
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800E15F0 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     _GazeDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x1800E176D (_GazeDeviceCollection--OnDeviceAttach_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall wil::details::lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___::_lambda_call__lambda_4b6cdc335957e3b3b0c4e577e65e749c___(
        __int64 a1)
{
  void **result; // rax
  void *v3; // rcx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v3 = **(void ***)a1;
    if ( v3 )
    {
      operator delete(v3);
      **(_QWORD **)a1 = 0LL;
    }
    result = *(void ***)(a1 + 8);
    if ( *result )
    {
      operator delete(*result);
      result = *(void ***)(a1 + 8);
      *result = 0LL;
    }
  }
  return result;
}
